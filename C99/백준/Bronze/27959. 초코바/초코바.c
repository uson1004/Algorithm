#include <stdio.h>

int main()
{
    int A, B;
    
    scanf("%d %d", &A, &B);
    
    if (A * 100 >= B)
    printf("Yes");
    else
    printf("No");
}