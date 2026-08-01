#include <stdio.h>
int main() {
    int n, i, j, max;
    scanf("%d", &n);
    float cgpa[n], temp;
    for(i = 0; i < n; i++) {
        scanf("%f", &cgpa[i]);
    }
    for(i = 0; i < n - 1; i++) {
        max = i;
        for(j = i + 1; j < n; j++) {
            if(cgpa[j] > cgpa[max]) {
                max = j;
            }
        }
        temp = cgpa[i];
        cgpa[i] = cgpa[max];
        cgpa[max] = temp;
    }
    for(i = 0; i < n; i++) {
        printf("%.2f ", cgpa[i]);
    }
    return 0;
}
