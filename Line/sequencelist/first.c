#include <stdio.h>
#include "SqList.h"

int main(){

}

// 第一题从顺序表中删除具有最小值的元素（假设唯一）并由函数返回被删元素的值。空出的位置由最后一个元素填补，若顺序表为空，则显示出错误信息并退出运行
bool Del_Min(SqList L, ElemType value){
    if(L.length == 0){
        return false;
    }
    value = L.data[0];
    int pos = 0;
    for (int i = 1; i < L.length; i++) {
        if(L.data[i].column < value.column){
            value = L.data[i];
            pos = i;
        }
    }
    L.data[pos] = L.data[L.length - 1];
    L.length--;
    return true;
}

// 第二题设计一个高效算法  将顺序表L的所有元素逆置，要求算法的空间复杂度为O（1）
bool Reverse(SqList L){
    int mid = L.length/2;
    ElemType temp;
    for (int i = 0; i < L.length; i++) {
        temp = L.data[i];
        L.data[i] = L.data[L.length-i-1];
        L.data[L.length-i-1] = temp;
    }
}

// 第三题对长度为n的顺序表L，编写一个时间复杂度为O（n）、空间复杂度为O（1）的算法，改算法删除线性表中所有值为x的数据元素
void del_x(SqList L, ElemType x){
    int k = 0;
    for (int i = 0; i < L.length; i++) {
        if(L.data[i].column != x.column){
            L.data[k] = L.data[i];
            k++;
        }
    }
    L.length = k;
}