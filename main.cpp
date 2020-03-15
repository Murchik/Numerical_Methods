#include <cmath>
#include <iostream>

#include "NumMeth.hpp"

int main() {
    double a = 0.0;
    double b = 4.0;

    std::cout << rectanglesLeft(a, b, 3) << std::endl;
    std::cout << rectanglesLeft(a, b, 10) << std::endl;
    std::cout << rectanglesLeft(a, b, 50) << std::endl;
    std::cout << rectanglesLeft(a, b, 10000) << std::endl;
    std::cout << rectanglesLeft(a, b, 100000) << std::endl << std::endl;

    std::cout << rectanglesRight(a, b, 3) << std::endl;
    std::cout << rectanglesRight(a, b, 10) << std::endl;
    std::cout << rectanglesRight(a, b, 50) << std::endl;
    std::cout << rectanglesRight(a, b, 10000) << std::endl;
    std::cout << rectanglesRight(a, b, 100000) << std::endl << std::endl;

    std::cout << rectangles(a, b, 3) << std::endl;
    std::cout << rectangles(a, b, 10) << std::endl;
    std::cout << rectangles(a, b, 50) << std::endl;
    std::cout << rectangles(a, b, 10000) << std::endl;
    std::cout << rectangles(a, b, 100000) << std::endl << std::endl;

    std::cout << trapezes(a, b, 3) << std::endl;
    std::cout << trapezes(a, b, 10) << std::endl;
    std::cout << trapezes(a, b, 50) << std::endl;
    std::cout << trapezes(a, b, 10000) << std::endl;
    std::cout << trapezes(a, b, 100000) << std::endl << std::endl;

    std::cout << simpson(a, b, 3) << std::endl;
    std::cout << simpson(a, b, 10) << std::endl;
    std::cout << simpson(a, b, 50) << std::endl;
    std::cout << simpson(a, b, 10000) << std::endl;
    std::cout << simpson(a, b, 100000) << std::endl << std::endl;

    return 0;
}
