#include <iostream>
#include "rational.h"

int main() {
    Rational::Pair pair1;
    pair1.Read();

    Rational::Pair pair2;
    pair2.Read();

    Rational sum(pair1.getNumerator(), pair1.getDenominator());
    sum = sum + Rational(pair2.getNumerator(), pair2.getDenominator());

    Rational difference(pair1.getNumerator(), pair1.getDenominator());
    difference = difference - Rational(pair2.getNumerator(), pair2.getDenominator());

    Rational product(pair1.getNumerator(), pair1.getDenominator());
    product = product * Rational(pair2.getNumerator(), pair2.getDenominator());

    Rational quotient(pair1.getNumerator(), pair1.getDenominator());
    quotient = quotient / Rational(pair2.getNumerator(), pair2.getDenominator());

    std::cout << "Sum: ";
    sum.Display();
    std::cout << std::endl;

    std::cout << "Difference: ";
    difference.Display();
    std::cout << std::endl;

    std::cout << "Product: ";
    product.Display();
    std::cout << std::endl;

    std::cout << "Quotient: ";
    quotient.Display();
    std::cout << std::endl;

    return 0;
}