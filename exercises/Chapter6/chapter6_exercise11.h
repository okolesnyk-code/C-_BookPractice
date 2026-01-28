#pragma once

class Fraction {
private:
    long num;
    long den;

public:
    Fraction();
    Fraction(long n, long d);

    void getFraction();
    void showFraction() const;

    Fraction add(const Fraction& other) const;
    Fraction sub(const Fraction& other) const;
    Fraction mul(const Fraction& other) const;
    Fraction div(const Fraction& other) const;

    void lowterms();
};

void chapter6_exercise11();
