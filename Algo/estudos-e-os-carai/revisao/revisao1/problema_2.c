#include <stdio.h>
#include <stdbool.h>

int main() {
    int t, i;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        int casas[n];
        bool visitado[n];
        
        for (i = 0; i < n; i++) {
            scanf("%d", &casas[i]);
            visitado[i] = false;
        }
        
        int swaps = 0;
        
        for (i = 0; i < n; i++) {
            if (visitado[i] || casas[i] == i + 1) {
                continue;
            }
            
            int tamanhoCiclo = 0;
            int j = i;
            
            while (!visitado[j]) {
                visitado[j] = true;
                j = casas[j] - 1;
                tamanhoCiclo++;
            }
            
            if (tamanhoCiclo > 1) {
                swaps += (tamanhoCiclo - 1);
            }
        }
        
        printf("%d\n", swaps);
    }
    
    return 0;
}
