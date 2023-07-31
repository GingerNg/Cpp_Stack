//main.cpp
#include "include/hello.hpp"
// #include "include/add.hpp"
// #include <fstream>
#include <iostream>

// 字符处理函数
// #include<cstring>

// #include <inicpp.h>
// using namespace std;

/*
main-1.cpp 第一个main程序
*/


// void inifileDemo(){
//     // make install 之后引入包，直接使用
//     std::istringstream ss(("[Foo]\nbar=hello world\n[Test]"));
// 	// use function
// 	ini::IniFile myIni;
// 	myIni.decode(ss);

//     std::string myStr = myIni["Foo"]["bar"].as<std::string>();
//     std::cout << myStr << std::endl;

// 	// 从文件读入多行数据 方法一 正确读取
// 	// cout<<"使用 << 读取数据"<<endl;
//     std::string str5;
//     std::ifstream infile("afile.data", std::ios::in);
//     if (!infile.fail())
//     {
//         while (!infile.eof())
//         {
//             infile >> str5;
//             std::cout << str5 << std::endl;
//         }
//     }
// 	infile.close();
//     myIni.decode(infile);

//     std::string myStr1 = myIni["Cpp"]["compile"].as<std::string>();
//     std::cout << myStr1 << std::endl;

// }

// void read(){
//     std::cout << "read\n";
//     char data[100];
//     std::ifstream infile;
//     infile.open("afile.data");
//     infile >> data;
//     // 在屏幕上写入数据
//     std::cout << data << std::endl;
//     // 再次从文件读取数据，并显示它
//     infile >> data;
//     std::cout << data << std::endl;
//     // 关闭打开的文件
//     infile.close();
//     // return 0;
// }

int main(){
    // stoi(string to integer), atoi
    // Both std::stoi and atoi can be used to convert strings to integers,
    // but stoi is recommended for C++ code as it provides better error handling, such as throwing an exception if the conversion fails.
    std::string s1 = "2147482", s2 = "-214748";
    std::cout << std::stoi(s1) << std::endl;
    std::cout << atoi(s2.c_str()) << std::endl;

    // 一个指向 C++ 类的指针与指向结构的指针类似，访问指向类的指针的成员，需要使用成员访问运算符 ->，就像访问指向结构的指针一样。
    // 与所有的指针一样，您必须在使用指针之前，对指针进行初始化。
    ptr_demo();

    // cpp 从命令行获取内容
    std::string input;
    std::cout << "请输入内容: ";
    std::getline(std::cin, input);
    std::cout << "您输入的内容是: " << input << std::endl;

    // cpp 获取环境变量
    const char* var_name = "MY_VAR";
    const char* var_value = std::getenv(var_name);
    if (var_value != nullptr) {
        std::cout << "The value of " << var_name << " is " << var_value << std::endl;
    } else {
        std::cout << var_name << " is not defined" << std::endl;
    }

    // cpp ->

    std::cout << "Hello sub-library 1!" << std::endl;
    helloFun();
    // addFun(145,6);
    // read();
    // inifileDemo();xw
    // algoJingsaiRumen();
    // cTutorial();
    return 0;
}
