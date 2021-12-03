#include <stdio.h>

//return x^q
double power(double x, int q) {

    if (q == 0) {
        return 1;
    }

    double m = x;
    for (int i = 1; i < q; i++) {
        m *= x;
    }
    return m;
}

int main() {
    //prompt user to type in x and y
    printf("�п�J�B�I��x���ȥH�Φh�����t�������ƥ����y�J");

    //variable declaration
    double x;
    int y;

    //get from standard input
    scanf("%lf%d", &x, &y);

    //initial result
    double result = 0.0;

    //array declaration, to keep the polynomial with size of 6
    double p[6];
    int q[6];

    //iterate each line
    for (int i = 0; i < y; i++) {
        //fetch input
        scanf("%lf%d", &p[i], &q[i]);
        //value cumulation
        result += p[i] * power(x, q[i]);
    }

    printf("%lf\n", result);
}