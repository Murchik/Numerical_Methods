#include "NumMeth.hpp"

double f(double x) { return (pow(x, 2.0)); }

double rectanglesLeft(double a, double b, int N) {
    double h = (b - a) / (1.0 * N);
    double Sum = 0.0;
    double x = a;
    for (int i = 0; i < N; ++i, x += h) {
        Sum += f(x);
    }
    return h * Sum;
}

double rectanglesRight(double a, double b, int N) {
    double h = (b - a) / (1.0 * N);
    double Sum = 0.0;
    double x = a + h;
    for (int i = 0; i < N; ++i, x += h) {
        Sum += f(x);
    }
    return h * Sum;
}

double rectangles(double a, double b, int N) {
    double h = (b - a) / (1.0 * N);
    double Sum = 0.0;
    double x = 0.0, x_next = h;
    for (int i = 0; i < N; ++i, x += h, x_next += h) {
        Sum += f((x + x_next) / 2.0);
    }

    return h * Sum;
}

double trapezes(double a, double b, int N) {
    double h = (b - a) / (1.0 * N);
    double Sum = 0.0;
    double x = 0;
    for (int i = 0; i < N; ++i, x += h) {
        Sum += f(x);
    }

    return (h / 2.0) * (f(a) + 2.0 * Sum + f(b));
}

double simpson(double a, double b, int N) {
    double h;
    double x;
    double SumEven;
    double SumOdd;
    double step;

    h = (b - a) / (1.0 * N);
    step = 2.0 * h;

    SumOdd = 0.0;
    x = h;
    for (int i = 1; i < N; i += 2, x += step) {
        SumOdd += f(x);
    }

    SumEven = 0.0;
    x = 0.0;
    for (int i = 0; i < N - 1; i += 2, x += step) {
        SumEven += f(x);
    }

    return (h / 3.0) * (f(a) + 4.0 * SumOdd + 2.0 * SumEven + f(b));
}
