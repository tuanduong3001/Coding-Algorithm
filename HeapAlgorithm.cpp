#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
void output(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void heapAlgorithm(int arr[], int size, int n)
{
	if (size == 1)
		output(arr, n);
	for (int i = 0; i < size; i++) {
		heapAlgorithm(arr, size - 1, n);
		if (size % 2 == 1)
			swap(arr[0], arr[size - 1]);
		if (size % 2 == 0)
			swap(arr[i], arr[size - 1]);
	}
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	cout << "print result: " << endl;
	heapAlgorithm(arr, n, n);
}