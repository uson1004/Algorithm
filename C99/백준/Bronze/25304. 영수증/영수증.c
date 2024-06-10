#include <stdio.h>

int main() {
    int X, N, sum = 0;
    int a[100] = { 0 }, b[100] = { 0 };
    
    scanf("%d", &X);
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a[i], &b[i]);
        sum += a[i] * b[i]; 
    }
    if (X == sum)
        printf("Yes");
    else
        printf("No");
}