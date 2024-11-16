#include <stdio.h>

int main()
{
    int A, B;
    printf("Input two number: ");
    scanf("%d%d",&A,&B);

    if(A>B)
    {
        printf("A is Maximum number and B is Minimum Number.");
    }
    else if(B>A)
    {
        printf("B is Maximum number and A is Minimum Number.");
    }
    else
    {
        printf("A is equal to B.");
    }

    return 0;
}
