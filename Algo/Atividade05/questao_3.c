#include <stdio.h>
#include <math.h>

typedef struct
{
    float x1, x2;
} Raizes;

void calculaRaizes(float a, float b, float c, Raizes *r)
{
    float delta = b * b - 4 * a * c;

    if (delta >= 0)
    {
        r->x1 = (-b + sqrt(delta)) / (2 * a);
        r->x2 = (-b - sqrt(delta)) / (2 * a);
    }
    else
    {
        r->x1 = r->x2 = -1;
    }
}

int main()
{
    float a, b, c;
    Raizes r;

    while (1)
    {
        if (scanf("%f %f %f", &a, &b, &c) != 3)
            break;

        calculaRaizes(a, b, c, &r);

        if (r.x1 > -1 && r.x2 > -1)
            printf("%.1f %.1f\n", r.x1, r.x2);
        else
            printf("complexo\n");
    }

    return 0;
}
