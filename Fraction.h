#pragma once
class Fraction{
private:
    int numerator;
    int denominator;

public:
    void setNumerator(int N);
    void setDenominator(int D);
    /*int getNumerator();
    int getDenominator();*/

    Fraction();
    void Show();

    Fraction operator+(Fraction& fraction2);
    Fraction operator-(Fraction& fraction2);
    Fraction operator*(Fraction& fraction2);
    Fraction operator/(Fraction& fraction2);

    /*double Add(Fraction fraction2);
    double Sub(Fraction fraction2);
    double Mul(Fraction fraction2);
    double Div(Fraction fraction2);*/
};

