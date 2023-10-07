#include "Fraction.h"
#include<iostream>
using namespace std;

void Fraction::setNumerator(int N){
	numerator = N;
}
void Fraction::setDenominator(int D){
	denominator = D;
}
//int Fraction::getNumerator() {
//	return numerator;
//}
//int Fraction::getDenominator() {
//	return denominator;
//}

Fraction::Fraction() {
	numerator = 0;
	denominator = 0;
}

void Fraction::Show() {
	cout << " Числитель: " << numerator;
	cout << " Знаменатель: " << denominator;
}

Fraction Fraction::operator+(Fraction& fraction2) {
	Fraction rezult;
	rezult.setNumerator(numerator * fraction2.denominator + denominator * fraction2.numerator);
	rezult.setDenominator(denominator * fraction2.denominator);
	return rezult;
}
Fraction Fraction::operator-(Fraction& fraction2) {
	Fraction rezult;
	rezult.setNumerator(numerator * fraction2.denominator - denominator * fraction2.numerator);
	rezult.setDenominator(denominator * fraction2.denominator);
	return rezult;
}
Fraction Fraction::operator*(Fraction& fraction2) {
	Fraction rezult;
	rezult.setNumerator(numerator * fraction2.numerator);
	rezult.setDenominator(denominator * fraction2.denominator);
	return rezult;
}
Fraction Fraction::operator/(Fraction& fraction2) {
	Fraction rezult;
	rezult.setNumerator(numerator * fraction2.denominator);
	rezult.setDenominator(denominator * fraction2.numerator);
	return rezult;
}

//double Fraction::Add (Fraction fraction2){
//	return ((float)numerator / (float)denominator) + ((float)fraction2.numerator / (float)fraction2.denominator);
//}
//double Fraction::Sub(Fraction fraction2)
//{
//	return ((float)numerator / denominator) - ((float)fraction2.numerator / (float)fraction2.denominator);
//}
//double Fraction::Mul(Fraction fraction2)
//{
//	return ((float)numerator / (float)denominator) * ((float)fraction2.numerator / (float)fraction2.denominator);
//}
//double Fraction::Div(Fraction fraction2)
//{
//	return ((float)numerator / (float)denominator) / ((float)fraction2.numerator / (float)fraction2.denominator);
//}