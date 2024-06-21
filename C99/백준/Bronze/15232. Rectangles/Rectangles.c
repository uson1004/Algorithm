#include <stdio.h>

int main()
{
    int R, C;
    
    scanf("%d %d", &R, &C);
    
    for (int i = 0; i < R; i++) {
        for (int i = 0; i < C; i++) {
            printf("*");
        }
        printf("\n");
    }
}