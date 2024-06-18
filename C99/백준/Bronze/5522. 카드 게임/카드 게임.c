#include <stdio.h>

int main()
{
    int JOI[5], sum = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &JOI[i]);
        sum += JOI[i];
    }
    
    printf("%d", sum);
    
}