#include <stdio.h>

int main()
{
    int num = 0, multi = 1;
    
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
        multi *= i;
    }
    printf("%d", multi);
}