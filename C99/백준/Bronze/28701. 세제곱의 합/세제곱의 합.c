#include <stdio.h>

int main()
{
    int sum = 0, N = 0, sum2 = 0;
    
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
       sum += i;
       sum2 += i * i * i;
    }
    printf("%d\n%d\n%d", sum, sum * sum, sum2);
}