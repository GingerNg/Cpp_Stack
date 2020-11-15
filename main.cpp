//main.cpp
#include "include/hello.hpp"
#include "include/add.hpp"
// #include <fstream>
#include <iostream>
#include <inicpp.h>
// using namespace std;

void inifileDemo(){
    // make install 之后引入包，直接使用
    std::istringstream ss(("[Foo]\nbar=hello world\n[Test]"));
	// use function
	ini::IniFile myIni;
	myIni.decode(ss);

    std::string myStr = myIni["Foo"]["bar"].as<std::string>();
    std::cout << myStr << std::endl;

	// 从文件读入多行数据 方法一 正确读取
	// cout<<"使用 << 读取数据"<<endl;
    std::string str5;
    std::ifstream infile("afile.data", std::ios::in);
    if (!infile.fail())
    {
        while (!infile.eof())
        {
            infile >> str5;
            std::cout << str5 << std::endl;
        }
    }
	infile.close();
    myIni.decode(infile);

    std::string myStr1 = myIni["Cpp"]["compile"].as<std::string>();
    std::cout << myStr1 << std::endl;

}

void read(){
    std::cout << "read\n";
    char data[100];
    std::ifstream infile;
    infile.open("afile.data");
    infile >> data;
    // 在屏幕上写入数据
    std::cout << data << std::endl;
    // 再次从文件读取数据，并显示它
    infile >> data;
    std::cout << data << std::endl;
    // 关闭打开的文件
    infile.close();
    // return 0;
}

int main(){
    helloFun();
    addFun(145,6);
    read();
    inifileDemo();
    algoJingsaiRumen();
    return 0;
}
