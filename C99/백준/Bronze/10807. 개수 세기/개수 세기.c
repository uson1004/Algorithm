#include <stdio.h>

int main() {
    int N, v = 0, cnt = 0;
    int num[100] = { 0 };
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &v);
    for (int i = 0; i < N; i++) {
        if (v == num[i]) cnt++;
    }
    printf("%d", cnt);
    
}