#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int column;
}ElemType;

#define InitSize 100
typedef struct {
    ElemType *data;
    int MaxSize, length;
}SqList;

// 插入
bool ListInsert(SqList L, int i, ElemType e){
    if(i < 1 || i > L.MaxSize){
        return false;
    }
    if(L.length >= L.MaxSize){
        return false;
    }
    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = e;
    L.length++;
    return true;
}

// 初始化数组
bool ListInit(SqList L){
    L.data = (ElemType *)malloc(InitSize* sizeof(int));
    L.length = 0;
    L.MaxSize = InitSize;
}

// 动态增加数组长度
void IncreaseSize(SqList L, int len){
    ElemType *p = L.data;
    L.data = (ElemType *)malloc((L.MaxSize + len)* sizeof(int));
    for (int i = 0; i < L.length; i++) {
        L.data[i] = p[i];
    }
    L.MaxSize += len;
    free(p);
}