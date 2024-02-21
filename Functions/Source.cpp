#include <iostream>
int sum(int a, int b);
int diff(int a, int b);
int prod(int a, int b);
double quot(int a, int b);
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    }
    else if (exponent > 0) {
        double result = 1.0;
        for (int i = 0; i < exponent; ++i) {
            result *= base;
        }
        return result;
    }
    else {
        // Handling negative exponents by taking the reciprocal of the result
        double result = 1.0;
        for (int i = 0; i < -exponent; ++i) {
            result *= base;
        }
        return 1.0 / result;
    }
}
int main()
{
	setlocale(LC_ALL, "ru");
    int a, b;
	std::cout << "введите 2 числа: "; std::cin >> a >> b;
	int c = sum(a, b);
	std::cout << a << " + " << b << " = " << c << std::endl;
	std::cout << a << " - " << b << " = " << diff(a, b) << std::endl;
	std::cout << a << " * " << b << " = " << prod(a, b) << std::endl;
	std::cout << a << " / " << b << " = " << quot(a, b) << std::endl;

    double base;
    int exponent;
    std::cout << "¬ведите число: "; std::cin >> base;
    std::cout << "¬ведите степень: "; std::cin >> exponent;
    double result = power(base, exponent);
    std::cout << base << " в степени " << exponent << " равно " << result << std::endl;
}
int sum(int a, int b)
{
	int c = a + b;
	return c;
}
int diff(int a, int b)
{
	return a - b;
}
int prod(int a, int b)
{
	return a * b;
}
double quot(int a, int b)
{
	return (double)a / b;
}
