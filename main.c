#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age=0;
    scanf("%d",&age);
    if(age<18)
    {
        printf("������\n");
    }
    else if(age>=18&&age<=28)
    {
        printf("����\n");
    }
    else
    {
        printf("�϶���\n");
    }
    return 0;
}
 //if������ֻ�ܸ�һ����䣬���Ҫ��������䣬��Ҫ{}
 //18<=age<28�Ǵ���д����Ӧ����&&����ʾ��
