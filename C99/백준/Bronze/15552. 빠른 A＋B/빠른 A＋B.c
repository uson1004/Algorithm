#include <stdio.h>

int main()
{
    int num = 0, a[1000000] = { 0 }, b[1000000] = { 0 };
    
    
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (int i = 0; i < num; i++) {
        printf("%d", a[i] + b[i]);
        printf("\n");
    }
}
