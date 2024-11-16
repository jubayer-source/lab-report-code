#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Input 5 integer: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    int summation = (a+b+c+d+e);
    float average = summation/5.0;

    printf("Average Value:%.2f", average);


    return 0;
}
