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
}
void swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
int partition(int arr[], int low, int high)
{
	int left = low;
	int pivot = arr[high];
	int right = high - 1;
	while (true) {
		while (left <= right && arr[left] < pivot)
			left++;
		while (right >= left && arr[right] > pivot)
			right--;
		if (left >= right)
			break;
		swap(arr[left], arr[right]);
		left++;
		right--;
	}
	swap(arr[left], arr[high]);
	return left;
}
void quickSort(int arr[], int low, int high)
{
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	quickSort(arr, 0, n - 1);
	output(arr, n);
}