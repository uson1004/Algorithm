#include <stdio.h>
#include <string.h>
int main () { 
    int N, sum = 0;
    
    scanf ("%d", &N);
    
    char b[N];
     
    scanf("%s", b);
    	
    for (int i = 0; i < N; i++) {
        sum += b[i] - '0';
    }
    printf("%d", sum);
} 
