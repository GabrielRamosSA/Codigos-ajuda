#include <stdio.h>
#include <math.h>

typedef struct
{
    float x, y;
} Ponto;

void distancia(Ponto p1, Ponto p2, float *distancia)
{
    *distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main()
{
    Ponto p1, p2;
    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);

    float dist;
    distancia(p1, p2, &dist);

    printf("Distancia: %.4f", dist);

    return 0;
}