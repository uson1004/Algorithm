#include <stdio.h>

int main()
{
    int num[5], sum = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
        num[i] *= num[i];
    }
    
    for (int i = 0; i < 5; i++) {
        sum += num[i];
    }
    
    printf("%d", sum % 10);
}