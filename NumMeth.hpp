#ifndef NUMERICAL_METHODS_HPP
#define NUMERICAL_METHODS_HPP

#include <cmath>

float f(float x);
double f(double x);

double rectanglesLeft(double a, double b, int N);
double rectanglesRight(double a, double b, int N);
double rectangles(double a, double b, int N);

double trapezes(double a, double b, int N);

double simpson(double a, double b, int N);

#endif  // NUMERICAL_METHODS_HPP
