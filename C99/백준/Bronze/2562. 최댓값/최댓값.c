#include <stdio.h>

int main() {
    int N = 0, num[9] = { 0 },  cnt = 0, max = -1, temp = 0;
    
    for (int i = 0; i <= 8; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i <= 8; i++) {
            if (max < num[i]) {
                max = num[i];
                cnt = i + 1;
            }
            
    }
    printf("%d %d", max, cnt);
}