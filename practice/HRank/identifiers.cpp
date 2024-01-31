#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int         x;
    long int    y;
    float       z;
    double      j;
    char        a;

    scanf("%d %ld %c %f %lf", &x, &y, &a, &z, &j);
    
    printf("%d\n", x);
    printf("%ld\n", y);
    printf("%c\n", a);
    printf("%f\n", z);
    printf("%lf\n", j);
    return 0;
}