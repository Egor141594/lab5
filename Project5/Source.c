#include <stdio.h>
#include <math.h>
#include <locale.h>

#define M_PI 3.14159265358979323846


//ЗАДАНИЕ 1: Вычисление синуса угла

void task1() {
    printf("\n--- ЗАДАНИЕ 1 ---\n");
    double gr, rad, result;

    printf("Введите угол в градусах: ");
    scanf_s("%lf", &gr);
    rad = gr * M_PI / 180.0;
    result = sin(rad);

    printf("sin(%.1f град) = %.6f\n", gr, result);
}
//ЗАДАНИЕ 2 и 3*: Вариант 5
void task2_and_3() {
    printf("\n--- ЗАДАНИЕ 2 и 3* (Вариант 5) ---\n");
    double x, a, b, y;
    const double p = 3.0;
    printf("Введите значение x (например, 4.1): ");
    scanf_s("%lf", &x);
    a = sqrt(p * x);
    b = p * x * x + sqrt(a);
    y = pow(log(b * b), 3) + a * x;

    printf("Результаты Задания 2:\n");
    printf("x = %.1f, y = %.1f\n", x, y);

    // Задание 3*: выделение целых частей
    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    printf("\nЦелые части: A = %d, B = %d, C = %d\n", A, B, C);

    // Логические условия (возвращают 1 - Да, 0 - Нет)
    int cond_a = ((A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0)); // Только одно чётное
    int cond_b = (A % 3 == 0 && B % 3 == 0 && C % 3 == 0);                   // Все кратны 3

    printf("Условие а (только одно из А и В четное): %d\n", cond_a);
    printf("Условие б (все числа кратны трем): %d\n", cond_b);
}

// ДОМАШНЕЕ ЗАДАНИЕ: Вариант 23
void homework_variant23() {
    printf("\n--- ДОМАШНЕЕ ЗАДАНИЕ (Вариант 23) ---\n");
    double x, y, F;
    const double t = 0.5;

    printf("Введите x (например, 4): ");
    scanf_s("%lf", &x);
    printf("Введите y (например, 2): ");
    scanf_s("%lf", &y);

    // Формула для 23 варианта
    double num = pow(sin(x), 3) + log(2 * y + 3 * x); // Числитель
    double den = pow(t, 3) + sqrt(x);                 // Знаменатель
    F = num / den;

    printf("Результат F(x, y) = %.6f\n", F);
}
int main() {
    setlocale(LC_ALL, "Russian");
    task1();
    task2_and_3();
    homework_variant23();

    return 0;
}





