// pair.cpp
#include "pair.h"
#include <string>
void Pair::Rational::Read() {
    std::cout << "Enter the numerator: ";
    std::cin >> numerator;
    std::cout << "Enter the denominator: ";
    std::cin >> denominator;
}

void Pair::Rational::Display() const {
    std::cout << "(" << numerator << ";" << denominator << ")";
}

std::string Pair::Rational::toString() const {
    return "(" + std::to_string(numerator) + ";" + std::to_string(denominator) + ")";
}

Pair Pair::operator+(const Pair& other) const {
    return Pair(rational.getNumerator() * other.rational.getDenominator() + rational.getDenominator() * other.rational.getNumerator(),
        rational.getDenominator() * other.rational.getDenominator());
}

Pair Pair::operator-(const Pair& other) const {
    return Pair(rational.getNumerator() * other.rational.getDenominator() - rational.getDenominator() * other.rational.getNumerator(),
        rational.getDenominator() * other.rational.getDenominator());
}

Pair Pair::operator*(const Pair& other) const {
    return Pair(rational.getNumerator() * other.rational.getNumerator(), rational.getDenominator() * other.rational.getDenominator());
}

Pair Pair::operator/(const Pair& other) const {
    return Pair(rational.getNumerator() * other.rational.getDenominator(), rational.getDenominator() * other.rational.getNumerator());
}

int Pair::getNumerator() const {
    return rational.getNumerator();
}

int Pair::getDenominator() const {
    return rational.getDenominator();
}

void Pair::setNumerator(int a) {
    rational.setNumerator(a);
}

void Pair::setDenominator(int b) {
    rational.setDenominator(b);
}

void Pair::Init(int a, int b) {
    rational.Init(a, b);
}

void Pair::Read() {
    rational.Read();
}

void Pair::Display() const {
    rational.Display();
}

std::string Pair::toString() const {
    return rational.toString();
}
