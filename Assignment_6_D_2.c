#include<stdio.h>
int main() {
    int P=4700;
    float R=4.8,T=1.2,SI;
    SI = (P * R * T) / 100;
    printf("principal value(P) = %d\n", P);
    printf("rate of interest(R) = %.1f\n", R);
    printf("time(T) = %.1f\n", T);
    printf("your simple interest(SI) = %.2f\n", SI);
    return 0;
}