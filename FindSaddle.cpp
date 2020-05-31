#include<iostream>



using namespace std;
void input(int arr[][100], int& r, int& c)
{
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}
}
int findMinInCol(int arr[][100], int ir, int ic, int r, int c)
{
	int x = arr[ir][ic];
	for (int j = 0; j < c; j++) {
		if (arr[ir][j] > x)
			return 0;
	}
	return 1;
}
int findMaxInRow(int arr[][100], int ir, int ic, int r, int c)
{
	int x = arr[ir][ic];
	for (int i = 0; i < r; i++) {
		if (arr[i][ic] < x)
			return 0;
	}
	return 1;
}
void findSaddle(int arr[][100], int r, int c)
{
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (findMinInCol(arr, i, j, r, c) && findMaxInRow(arr, i, j, r, c))
				cout << arr[i][j];
		}
	}
}
int main()
{
	int r, c, arr[100][100];
	input(arr, r, c);
	findSaddle(arr, r, c);
}