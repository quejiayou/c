#include "num2.h"
void page()
{
    printf("************************\n");
    printf("******     2048   ******\n");
    printf("******   1.��ʼ   ******\n");
    printf("******   0.�˳�   ******\n");
    printf("************************\n");

}
void advocate()
{
    //��ʼ�����鲢���������ʼ�� 2 
    int num[ROW][COL] = {0}; 
    initialize(num, ROW, COL);
    //��ӡ����
    printf("            grade: 0\n");
    print(num, ROW, COL);
    //�����ƶ�
   // move(num, ROW, COL);
    int n = 1;
    while (n)
    {
        //����
        char arr = cat(num, ROW, COL);
        //ˢ��
        system("cls");
        //�����������ƶ�
        rotate(num,arr, ROW, COL);
        //ÿ��һ�����һ��2����4
        random(num, ROW, COL);      
        //��ӡ
        print(num, ROW, COL);
        //�ж���Ӯ
        n = judge(num, ROW, COL);
    }
}
int main()
{
    srand((unsigned int)time(NULL));
    int n = 0;    
    do
    {
        page();
        scanf_s("%d", &n);
        switch (n)
        {
        case 1:
            //������
            system("cls");
            advocate();
            break;
        case 0:
            system("cls");
            printf("����Ϸ�˳���\n");
            break;
        default:
            printf("���������롷\n");
        }
    } while (n);   
    return 0;
}