#include <stdio.h>

void Cubo(int *Ptr){
    *Ptr = (*Ptr) * (*Ptr) * (*Ptr);
}

int main(){
    int n;

    scanf("%d", &n);
    while (1)
    {
        Cubo(&n);
        printf("%d\n", n);
        scanf("%d", &n);
    }
    
}