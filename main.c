#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age=0;
    scanf("%d",&age);
    if(age<18)
    {
        printf("青少年\n");
    }
    else if(age>=18&&age<=28)
    {
        printf("青年\n");
    }
    else
    {
        printf("老东西\n");
    }
    return 0;
}
 //if语句后面只能跟一条语句，如果要跟多条语句，需要{}
 //18<=age<28是错误写法，应该用&&，表示且
