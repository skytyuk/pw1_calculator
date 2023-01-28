#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int fibonacci(int i) {
    int value = 0;
    if (i < 1) return 0;
    if (i == 1) return 1;
    return fibonacci(i - 1) + fibonacci(i - 2);
}
int main() {
    setlocale(LC_ALL, "Russian");
    int operation;
    double number1, number2;

    cout << "  ОПЕРАЦИИ:\n 1. Сложение\n 2. Вычитание\n 3. Умножение\n 4. Деление\n 5. Остаток от деления\n 6. Фибоначи\n 7. Выйти из программы\n";

    do {
        int fib = 0;
        cout << "\n Введите операцию: ";
        cin >> operation;
        if (cin.fail()) {
            cout << " Ошибка! Повторите попытку";
            Sleep(1500);
            system("cls");
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "  ОПЕРАЦИИ:\n 1. Сложение\n 2. Вычитание\n 3. Умножение\n 4. Деление\n 5. Остаток от деления\n 6. Фибоначи\n 7. Выйти из программы\n";
            continue;
        }
        else if (operation < 1 || operation > 7) {
            cout << " Нет такой операции!\n";
        }

        switch (operation) {
        case 1:
            cout << " Введите первое число: ";
            cin >> number1;
            cout << " Введите второе число: ";
            cin >> number2;
            if (cin.fail()) {
                cout << "\n Ошибка! Повторите попытку";
                Sleep(1500);
                system("cls");
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "  ОПЕРАЦИИ:\n 1. Сложение\n 2. Вычитание\n 3. Умножение\n 4. Деление\n 5. Остаток от деления\n 6. Фибоначи\n 7. Выйти из программы\n";
                continue;
            }
            if (number1 < 0) {
                cout << " " << "(" << number1 << ")" << " + " << number2 << " = " << number1 + number2 << endl;
            }
            else if (number1 < 0) {
                cout << " " << number1 << " + " << "(" << number2 << ")" << " = " << number1 + number2 << endl;
            }
            else {
                cout << " " << number1 << " + " << number2 << " = " << number1 + number2 << endl;
            }
            break;
        case 2:
            cout << " Введите первое число: ";
            cin >> number1;
            cout << " Введите второе число: ";
            cin >> number2;
            if (cin.fail()) {
                cout << "\n Ошибка! Повторите попытку";
                Sleep(1500);
                system("cls");
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "  ОПЕРАЦИИ:\n 1. Сложение\n 2. Вычитание\n 3. Умножение\n 4. Деление\n 5. Остаток от деления\n 6. Фибоначи\n 7. Выйти из программы\n";
                continue;
            }
            if (number1 < 0) {
                cout << " " << "(" << number1 << ")" << " - " << number2 << " = " << number1 - number2 << endl;
            }
            else if (number1 < 0) {
                cout << " " << number1 << " - " << "(" << number2 << ")" << " = " << number1 - number2 << endl;
            }
            else {
                cout << " " << number1 << " - " << number2 << " = " << number1 - number2 << endl;
            }
            break;
        case 3:
            cout << " Введите первое число: ";
            cin >> number1;
            cout << " Введите второе число: ";
            cin >> number2;
            if (cin.fail()) {
                cout << "\n Ошибка! Повторите попытку";
                Sleep(1500);
                system("cls");
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "  ОПЕРАЦИИ:\n 1. Сложение\n 2. Вычитание\n 3. Умножение\n 4. Деление\n 5. Остаток от деления\n 6. Фибоначи\n 7. Выйти из программы\n";
                continue;
            }
            if (number1 < 0) {
                cout << " " << "(" << number1 << ")" << " * " << number2 << " = " << number1 * number2 << endl;
            }
            else if (number1 < 0) {
                cout << " " << number1 << " * " << "(" << number2 << ")" << " = " << number1 * number2 << endl;
            }
            else {
                cout << " " << number1 << " * " << number2 << " = " << number1 * number2 << endl;
            }
            break;
        case 4:
            cout << " Введите первое число: ";
            cin >> number1;
            cout << " Введите второе число: ";
            cin >> number2;
            if (cin.fail()) {
                cout << "\n Ошибка! Повторите попытку";
                Sleep(1500);
                system("cls");
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "  ОПЕРАЦИИ:\n 1. Сложение\n 2. Вычитание\n 3. Умножение\n 4. Деление\n 5. Остаток от деления\n 6. Фибоначи\n 7. Выйти из программы\n";
                continue;
            }
            if (number2 == 0) {
                cout << " Делить на ноль нельзя!";
                break;
            }
            if (number1 < 0) {
                cout << " " << "(" << number1 << ")" << " / " << number2 << " = " << number1 / number2 << endl;
            }
            else if (number1 < 0) {
                cout << " " << number1 << " / " << "(" << number2 << ")" << " = " << number1 / number2 << endl;
            }
            else {
                cout << " " << number1 << " / " << number2 << " = " << number1 / number2 << endl;
            }
            break;
        case 5:
            int remainder;
            cout << " Введите первое число: ";
            cin >> number1;
            cout << " Введите второе число: ";
            cin >> number2;
            if (cin.fail()) {
                cout << "\n Ошибка! Повторите попытку";
                Sleep(1500);
                system("cls");
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "  ОПЕРАЦИИ:\n 1. Сложение\n 2. Вычитание\n 3. Умножение\n 4. Деление\n 5. Остаток от деления\n 6. Фибоначи\n 7. Выйти из программы\n";
                continue;
            }
            if (number2 == 0) {
                cout << " Делить на ноль нельзя!";
                break;
            }
            remainder = fmod(number1, number2);
            cout << " Остаток от деления: " << remainder << endl;
            break;
        case 6:
            cout << " Введите значение: ";
            cin >> number1;
            if (cin.fail()) {
                cout << "\n Ошибка! Повторите попытку";
                Sleep(1500);
                system("cls");
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "  ОПЕРАЦИИ:\n 1. Сложение\n 2. Вычитание\n 3. Умножение\n 4. Деление\n 5. Остаток от деления\n 6. Фибоначи\n 7. Выйти из программы\n";
                continue;
            }
            for (int i = 0; i < number1; i++) {
                cout << " " << fibonacci(i) << endl;
                fib += fibonacci(i);
            }
            cout << " Сумма всех чисел фибоначчи: " << fib << endl;
            break;
        default:
            break;
        }
    } while (operation != 7);
}