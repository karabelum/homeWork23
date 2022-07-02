//homeWork #23.
#include <iostream>
using namespace std;

void threeMax(int& a, int& b, int& c);
int func(int arr[], int length);
void showArr(int arr[], int size);
void changeArr(int arr1[], int size1, int arr2[], int size2);
int main() {
	//Task 1.
	cout << "homeWork #23\nTask 1.\nEnter three numbers:\n";
	int a, b, c;
	cin >> a >> b >> c;
	threeMax(a, b, c);
	cout << a << " " << b << " " << c << endl;
	// Task 2
	cout << "\nTask 2\n";
	int arr[5] = { 56,15,37,4,0 };
	cout << func(arr, 5) << endl;
	// Task 3
	cout << "\nTask 3\n";
	int arr1[7] = { 3,6,4,1,4,8,2 };
	int arr2[6] = { 5,3,1,5,10,8 };
	cout << "First array:\n";
	showArr(arr1, 7);
	cout << "\nSecond array:\n";
	showArr(arr2, 6);
	cout << "\nChange second array:\n";
	changeArr(arr1, 7, arr2, 6);
	showArr(arr2, 6);
	return 0;
}
//Task 1.
void threeMax(int& a, int& b, int& c) {
	int max;
	if (a > b && a > c) max = a;
	else
		if (b > a && b > c) max = b;
		else max = c;
	a = b = c = max;
	cout << "The largest number: " << max << endl;
}
//Task 2.
int func(int arr[], int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] < 0)
			return arr[i];
	return arr[0];
}
//Task 3.
void changeArr(int arr1[], int size1, int arr2[], int size2) {
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (*(arr1 + i) == *(arr2 + j))
				*(arr2 + j) = 0;
		}
	}
}
void showArr(int arr[], int size) {
	cout << "[";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << "\b\b]\n";
}