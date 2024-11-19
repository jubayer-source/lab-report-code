#include <stdio.h>
int main()
{
    int A, B, C;
    printf("Input 3 number: ");
    scanf("%d%d%d",&A,&B,&C);

    if(A > B && A > C)
    {
        if(B>C){
            printf("A is Maximum Number and value: %d\n",A);
            printf("C is Minimum Number and value: %d",C);
            return 0;
        }
        else{
            printf("A is Maximum Number and value: %d\n",A);
            printf("B is Minimum Number and value: %d",B);
            return 0;
        }
    }
    else if(B>A && B > C)
    {
        if(A>C){
            printf("B is Maximum Number and value: %d\n",B);
            printf("C is Minimum Number and value: %d",C);
            return 0;
        }
        else{
            printf("B is Maximum Number and value: %d\n",B);
            printf("A is Minimum Number and value: %d",A);
            return 0;
        }
    }
    else if(C > A && C > B)
    {
        if(A > B){
            printf("C is Maximum Number and value: %d\n",C);
            printf("B is Minimum Number and value: %d",B);
            return 0;
        }
        else{
            printf("C is Maximum Number and value: %d\n",C);
            printf("A is Minimum Number and value: %d",A);
            return 0;
        }
    }

    return 0;
}
