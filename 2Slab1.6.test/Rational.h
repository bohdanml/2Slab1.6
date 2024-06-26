#pragma once
#include <iostream>


class Rational {
private:
    int numerator;
    int denominator;

public:
    class Pair {
    private:
        int numerator;
        int denominator;

    public:
        Pair(int a = 0, int b = 1) : numerator(a), denominator(b) {}

        int getNumerator() const {
            return numerator;
        }

        int getDenominator() const {
            return denominator;
        }

        void setNumerator(int a) {
            numerator = a;
        }

        void setDenominator(int b) {
            denominator = b;
        }

        void Init(int a, int b) {
            numerator = a;
            denominator = b;
        }

        void Read();

        void Display() const;

        std::string toString() const;
    };

    Rational(int a = 0, int b = 1) : numerator(a), denominator(b) {}

    Rational operator+(const Rational& other) const;

    Rational operator-(const Rational& other) const;

    Rational operator*(const Rational& other) const;

    Rational operator/(const Rational& other) const;

    int getNumerator() const;

    int getDenominator() const;

    void setNumerator(int a);

    void setDenominator(int b);

    void Init(int a, int b);

    void Read();

    void Display() const;

    std::string toString() const;
};