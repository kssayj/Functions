#include <stdlib.h>
#include<iostream>

void fillrand(int arr[], const int n, int minrand = 0, int maxrand = 100);
void fillrand(char arr[], const int n, char minrand = 'A', char maxrand = 'Z');
void fillrand(double arr[], const int n, double minrand = 0.0, double maxrand = 1.0);
void print(const int arr[], const int n);
void print(const char arr[], const int n);
void print(const double arr[], const int n);
int sum(int arr[], const int n);
float sum(char arr[], const int n);
double sum(double arr[], const int n);
float avg(int arr[], const int n);
float avg(char arr[], const int n);
double avg(double arr[], const int n);
int maxValueIn(int arr[], const int n);
char maxValueIn(char arr[], const int n);
double maxValueIn(double arr[], const int n);
int minValueIn(int arr[], const int n);
char minValueIn(char arr[], const int n);
double minValueIn(double arr[], const int n);
void sort(int arr[], const int n);
void sort(char arr[], const int n);
void sort(double arr[], const int n);
void ShiftLeft(int arr[], const int n, int shiftAmount);
void ShiftLeft(char arr[], const int n, int shiftAmount);
void ShiftLeft(double arr[], const int n, int shiftAmount);
void ShiftRight(int arr[], const int n, int shiftAmount);
void ShiftRight(char arr[], const int n, int shiftAmount);
void ShiftRight(double arr[], const int n, int shiftAmount);

int main()
{
	const int n = 5;
	int intArr[n];
	fillrand(intArr, n);
	print(intArr, n);
	std::cout << "The sum of the array elements: " << sum(intArr, n) << std::endl;
	std::cout << "The arithmetic mean: " << avg(intArr, n) << std::endl;
	std::cout << "Max value: " << maxValueIn(intArr, n) << std::endl;
	std::cout << "Min value: " << minValueIn(intArr, n) << std::endl;
	std::cout << "Sort array: ";
	sort(intArr, n);
	print(intArr, n);
	int shiftAmount;
	std::cout << "Enter the number of items to cycle: ";
	std::cin >> shiftAmount;
	std::cout << "Left shift: ";
	ShiftLeft(intArr, n, shiftAmount);
	std::cout << "Right shift: ";
	ShiftRight(intArr, n, shiftAmount);
	std::cout << std::endl;

	char charArr[n];
	fillrand(charArr, n);
	print(charArr, n);
	std::cout << "The sum of the array elements: " << sum(charArr, n) << std::endl;
	std::cout << "The arithmetic mean: " << avg(charArr, n) << std::endl;
	std::cout << "Max value: " << maxValueIn(charArr, n) << std::endl;
	std::cout << "Min value: " << minValueIn(charArr, n) << std::endl;
	std::cout << "Sort array: ";
	sort(charArr, n);
	print(charArr, n);
	std::cout << "Enter the number of items to cycle: ";
	std::cin >> shiftAmount;
	std::cout << "Left shift: ";
	ShiftLeft(charArr, n, shiftAmount);
	std::cout << "Right shift: ";
	ShiftRight(charArr, n, shiftAmount);
	std::cout << std::endl;

	double doubleArr[n];
	fillrand(doubleArr, n);
	print(doubleArr, n);
	std::cout << "The sum of the array elements: " << sum(doubleArr, n) << std::endl;
	std::cout << "The arithmetic mean: " << avg(doubleArr, n) << std::endl;
	std::cout << "Max value: " << maxValueIn(doubleArr, n) << std::endl;
	std::cout << "Min value: " << minValueIn(doubleArr, n) << std::endl;
	std::cout << "Sort array: ";
	sort(doubleArr, n);
	print(doubleArr, n);
	std::cout << "Enter the number of items to cycle: ";
	std::cin >> shiftAmount;
	std::cout << "Left shift: ";
	ShiftLeft(doubleArr, n, shiftAmount);
	std::cout << "Right shift: ";
	ShiftRight(doubleArr, n, shiftAmount);
	std::cout << std::endl;
}
void fillrand(int arr[], const int n, int minrand = 0, int maxrand = 100)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = minrand + rand() % (maxrand-minrand);
	}
}

void fillrand(char arr[], const int n, char minrand = 'A', char maxrand = 'Z')
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = minrand + rand() % (maxrand - minrand + 1);
	}
}

void fillrand(double arr[], const int n, double minrand = 0.0, double maxrand = 1.0)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = minrand + ((maxrand - minrand) * rand()) / RAND_MAX;
	}
}

void print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}

void print(const char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}

void print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}

int sum(int arr[], const int n)
{
	int result = 0;
	for (int i = 0; i < n; ++i) {
		result += arr[i];
	}
	return result;
}

float sum(char arr[], const int n)
{
	int result = 0;
	for (int i = 0; i < n; ++i)
	{
		result += arr[i];
	}
	return result;
}

double sum(double arr[], const int n)
{
	double result = 0;
	for (int i = 0; i < n; ++i)
	{
		result += arr[i];
	}
	return result;
}

float avg(int arr[], const int n)
{
	int average = 0;
	for (int i = 0; i < n; i++)
	{
		average += arr[i];
	}
	return average / n;
}

float avg(char arr[], const int n)
{
	int average = 0;
	for (int i = 0; i < n; i++)
	{
		average += arr[i];
	}
	return static_cast<float>(average) / n;
}

double avg(double arr[], const int n)
{
	double average = 0;
	for (int i = 0; i < n; i++)
	{
		average += arr[i];
	}
	return average / n;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

char maxValueIn(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

char minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}

double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}

void sort(int arr[], const int n)
{
	int min = 0; 
	int tmp = 0; 
	for (int i = 0; i < n; i++)
	{
		min = i; 
		for (int j = i + 1; j < n; j++)
			min = (arr[j] < arr[min]) ? j : min;
		if (i != min)
		{
			tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp;
		}
	}
}

void sort(char arr[], const int n)
{
	char min = 0;
	char tmp = 0;
	for (int i = 0; i < n; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
			min = (arr[j] < arr[min]) ? j : min;
		if (i != min)
		{
			tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp;
		}
	}
}

void sort(double arr[], const int n)
{
	double min = 0;
	double tmp = 0;
	for (int i = 0; i < n; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
			min = (arr[j] < arr[min]) ? j : min;
		if (i != min)
		{
			tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp;
		}
	}
}

void ShiftLeft(int arr[], const int n, int shiftAmount)
{
	shiftAmount = shiftAmount % n;
	for (int i = 0; i < shiftAmount; ++i) {
		int temp = arr[0];
		for (int j = 0; j < n - 1; ++j) {
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = temp;
	}
	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void ShiftLeft(char arr[], const int n, int shiftAmount)
{
	shiftAmount = shiftAmount % n;
	for (int i = 0; i < shiftAmount; ++i)
	{
		char temp = arr[0];
		for (int j = 0; j < n - 1; ++j)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = temp;
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void ShiftLeft(double arr[], const int n, int shiftAmount)
{
	shiftAmount = shiftAmount % n;
	for (int i = 0; i < shiftAmount; ++i)
	{
		double temp = arr[0];
		for (int j = 0; j < n - 1; ++j)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = temp;
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void ShiftRight(int arr[], const int n, int shiftAmount)
{
	shiftAmount = shiftAmount % n;
	for (int i = 0; i < shiftAmount; ++i) {
		int temp = arr[n - 1];
		for (int j = n - 1; j > 0; --j) {
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}
	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void ShiftRight(char arr[], const int n, int shiftAmount)
{
	shiftAmount = shiftAmount % n;
	for (int i = 0; i < shiftAmount; ++i)
	{
		char temp = arr[n - 1];
		for (int j = n - 1; j > 0; --j)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void ShiftRight(double arr[], const int n, int shiftAmount)
{
	shiftAmount = shiftAmount % n;
	for (int i = 0; i < shiftAmount; ++i)
	{
		double temp = arr[n - 1];
		for (int j = n - 1; j > 0; --j)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
