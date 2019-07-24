/*************************************************************************
	> File Name: bisection.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月23日 星期二 11时52分20秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
    double a = -20;
    double b = 20;
    double x;
    x = (a + b) / 2;
    while(fabs(func(p, q, x)) > EPSILON){
       if (func(p, q, a) * func(p, q, x) < 0){
           b = x;
           x = (a + x) / 2; 
       }else if (func(p, q, x) * func(p, q, b) < 0){
           a = x;
           x = (b + x) / 2;
       }
    }
    return x;
}

double f(int p, int q, double x) {
    return p * x + q;
}
