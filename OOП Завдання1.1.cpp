#include <iostream>
#include "Fraction.h"
using namespace std;

int main(){
    setlocale(LC_ALL, "");
    int N, D, a = 1;
    float R;

        Fraction fraction;//1 obj
        cout << "Введите чеслитель дроби: ";
        cin >> N;

        do {
            cout << "Введите знаменатель дроби: ";
            cin >> D;
            if (D == 0) {
                cout << "Делить на ноль нельзя!\n";
            }
            else break;
        } while (1);

        fraction.setNumerator(N);
        fraction.setDenominator(D);

   Fraction fraction2;//2 obj
   cout << "Введите чеслитель дроби: ";
   cin >> N;

   do {
       cout << "Введите знаменатель дроби: ";
       cin >> D;
       if (D == 0) {
           cout << "Делить на ноль нельзя!\n";
       }
       else break;
   } while (1);

   fraction2.setNumerator(N);
   fraction2.setDenominator(D);

   cout << "\nПервая дробь: ";
   fraction.Show();
   cout << "\nВторая дробь: ";
   fraction2.Show();

   Fraction fraction3;//3 obj
   while (a != 0) {
       cout << "\n\nВыберите необходимое действие с дробями:\n"
           "0. Завершение математичиских действий;\n"
           "1. Сложение;\n"
           "2. Вычитание;\n"
           "3. Умножение;\n"
           "4. Деление.\n";
       cin >> a;
       switch (a) {
       case 0: {
           break;
       }
       case 1: {
           //R = fraction.Add(fraction2);

           cout << "Результат = ";
           //fraction3.operator+(fraction2);
           fraction3 = fraction + fraction2;
           fraction3.Show();
       }
             break;
       case 2: {
           //R = fraction.Sub(fraction2);

           cout << "Результат = ";
           //fraction3.operator-(fraction2);
           fraction3 = fraction - fraction2;
           fraction3.Show();
       }
             break;
       case 3: {
           //R = fraction.Mul(fraction2);

           cout << "Результат = ";
           //fraction3.operator*(fraction2);
           fraction3 = fraction * fraction2;
           fraction3.Show();
       }
             break;
       case 4: {
           //R = fraction.Div(fraction2);

           cout << "Результат = ";
           //fraction3.operator/(fraction2);
           fraction3 = fraction / fraction2;
           fraction3.Show();
       }
             break;
       default:cout << "неправельно выбраный вариант действия!";
       }
   }
}

