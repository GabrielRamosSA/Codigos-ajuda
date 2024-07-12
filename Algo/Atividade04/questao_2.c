#include <stdio.h>
#include <math.h>

struct Ponto
{
    float x,y;
};

float distancia(struct Ponto p1, struct Ponto p2){
    return sqrt(pow(p2.x - p1.x,2) + pow(p2.y - p1.y,2));
}
int main(){
    struct Ponto p1,p2;
    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);

    float dist = distancia(p1,p2);
    printf("Distancia: %.4f", dist);
    return 0;
}
