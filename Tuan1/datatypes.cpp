#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    // Input
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    // Output with specific formatting \n = endline, round = .3 for 3 dec number
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);
    printf("%.9lf\n", d);

    return 0;
}
