// 顺序表

struct SeqList
{
    int MAXNUM;
    int n;
    DataType *element;
};

typedef struct SeqList *PSeqList

PSeqList createNullList_seq(int m)
// 创建空顺序表
{
    PSeqList palist = ({SeqList})malloc(sizeof(struct SeqList));
    if (palist != NULL){
        palist -> element = (DataType *)malloc(sizeof(DataType)*m);
        if (palist -> element){
            palist -> MAXNUM = m
            palist -> n = 0;
            return (palist)
        }
    }
    printf("Out of space!! \n")
    return NULL
}

int isNullList_seq(PSeqList palist)
// 判断线性表是否为空 len(x) == 0
{
    return (palist -> n == 0)
}

