#include "acc.h"
void number()
{
    printf("黑桃(Spade)、红桃(Heart)、方块(Diamond)、梅花(Club)\n\n");
    printf("一共有52张牌:");
    char arr[ROW][COL] = {0};
    char arr1[ROW][COL] = { 0 };//洗完牌之后
    //初始化牌堆
    prim(arr, ROW,COL);
    //随机洗牌
    pret(arr,arr1, ROW, COL);
    //进行发牌每个人五张，总共四个人
    our(arr1, ROW, COL, GOU);
    
}
int main()
{
    srand((unsigned int)time(NULL));
    number();
    return 0;
}