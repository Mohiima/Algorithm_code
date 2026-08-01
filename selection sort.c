#include <stdio.h>
int main() {
    int n, i, j, min, temp;
    scanf("%d", &n);
    int p[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(p[j] < p[min]) {
                min = j;
            }
        }
        temp = p[i];
        p[i] = p[min];
        p[min] = temp;
    }
    for(i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    return 0;
}
