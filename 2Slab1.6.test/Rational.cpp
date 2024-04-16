#include "rational.h"
#include <string>

void Rational::Pair::Read() {
    std::cout << "Enter the numerator: ";
    std::cin >> numerator;
    std::cout << "Enter the denominator: ";
    std::cin >> denominator;
}

void Rational::Pair::Display() const {
    std::cout << "(" << numerator << ";" << denominator << ")";
}

std::string Rational::Pair::toString() const {
    return "(" + std::to_string(numerator) + ";" + std::to_string(denominator) + ")";
}

Rational Rational::operator+(const Rational& other) const {
    return Rational(numerator * other.denominator + denominator * other.numerator,
        denominator * other.denominator);
}

Rational Rational::operator-(const Rational& other) const {
    return Rational(numerator * other.denominator - denominator * other.numerator,
        denominator * other.denominator);
}

Rational Rational::operator*(const Rational& other) const {
    return Rational(numerator * other.numerator, denominator * other.denominator);
}

Rational Rational::operator/(const Rational& other) const {
    return Rational(numerator * other.denominator, denominator * other.numerator);
}

int Rational::getNumerator() const {
    return numerator;
}

int Rational::getDenominator() const {
    return denominator;
}

void Rational::setNumerator(int a) {
    numerator = a;
}

void Rational::setDenominator(int b) {
    denominator = b;
}

void Rational::Init(int a, int b) {
    numerator = a;
    denominator = b;
}

void Rational::Read() {
    std::cout << "Enter the numerator: ";
    std::cin >> numerator;
    std::cout << "Enter the denominator: ";
    std::cin >> denominator;
}

void Rational::Display() const {
    std::cout << "(" << numerator << ";" << denominator << ")";
}

std::string Rational::toString() const {
    return "(" + std::to_string(numerator) + ";" + std::to_string(denominator) + ")";
}