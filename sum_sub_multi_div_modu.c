#include <stdio.h>

int main()
{
    int A, B;
    printf("Input two numbers A & B: ");
    scanf("%d %d", &A, &B);

    int sum = A + B;
    int sub = A - B;
    int mul = A * B;
    float div = (float)A / B;
    int modulus = A % B;

    printf("Summation of A & B is: %d\n", sum);
    printf("Subtraction of A & B is: %d\n", sub);
    printf("Multiplication of A & B is: %d\n", mul);
    printf("Division of A & B is: %.2f\n", div);
    printf("Modulus of A & B is: %d\n", modulus);

    return 0;
}
