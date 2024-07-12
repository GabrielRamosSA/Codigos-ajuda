#include <stdio.h>

double sqrt_manual(double x, double eps) {
    if (x == 0 || x == 1) return x; 
    double l = 0, r = x, mid;
    while (r - l > eps) {
        mid = (l + r) / 2;
        if (mid * mid < x) {
            l = mid;
        } else {
            r = mid;
        }
    }
    return (l + r) / 2;
}

int quadradoPerfeito(long long x) {
    double sqrt_x = sqrt_manual((double)x, 1e-6);
    long long sqrt_x_ll = (long long)sqrt_x;
    return sqrt_x_ll * sqrt_x_ll == x || (sqrt_x_ll + 1) * (sqrt_x_ll + 1) == x;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long Ai;
            scanf("%lld", &Ai);
            sum += Ai;
        }

        if (quadradoPerfeito(sum)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
