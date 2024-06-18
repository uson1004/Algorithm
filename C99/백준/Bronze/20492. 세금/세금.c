#include <stdio.h>

int main()
{
    int num = 0;
    
    scanf("%d", &num);
    
    printf("%.0lf %.0lf", num * 0.78, num - (num * 0.2) * 0.22);
}