#include <stdlib.h>
#include<iostream>
void fillrand(int arr[], const int n, int minrand = 0, int maxrand = 100)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = minrand + rand() % (maxrand-minrand);
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
int sum(int arr[], const int n)
{
	int result = 0;
	for (int i = 0; i < n; ++i) {
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
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
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

int main()
{
	setlocale(LC_ALL, "ru");
	const int n = 5;
	int arr[n];
	fillrand(arr, n);
	print(arr, n);
	std::cout << "The sum of the array elements: " << sum(arr, n) << std::endl;
	std::cout << "The arithmetic mean: " << avg(arr, n) << std::endl;
	std::cout << "Max value: " << maxValueIn(arr, n) << std::endl;
	std::cout << "Min value: " << minValueIn(arr, n) << std::endl;
	std::cout << "Sort array: ";
	sort(arr,n);
	print(arr, n);
	int shiftAmount;
	std::cout << "Enter the number of items to cycle: "; std::cin >> shiftAmount;
	std::cout << "Left shift: ";
	ShiftLeft(arr, n, shiftAmount);
	std::cout << "Right shift: ";
	ShiftRight(arr, n, shiftAmount);
	std::cout << std::endl;
}
