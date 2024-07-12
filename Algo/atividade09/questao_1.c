#include <stdio.h>

int main(){
    int n, i;


    scanf("%d", &n);
    int v[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int presente[n];
    for (i = 0; i <= n; i++) {
        presente[i] = 0; 
    }


    for (i = 0; i <= n; i++) {
        if (v[i] < n) {
            presente[v[i]] = 1; 
        }
    }

    for (i = 0; i <= n; i++) {
        if (presente[i] == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}