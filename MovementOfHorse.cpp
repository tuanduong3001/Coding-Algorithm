#include<iostream>
#include<stdio.h>


using namespace std;
int arr[8][8] = { 0 };
int X[8] = { -2,-2,-1,-1,1,1,2,2, };
int Y[8] = { -1,1,-2,2,-2,2,-1,1 };
int dem = 0;
int n;
void output()
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%2d ", arr[i][j]);
		}
		cout << endl;
	}
	cout << endl;
}
void movHorse(int x, int y)
{
	dem++;
	arr[x][y] = dem;
	for (int i = 0; i < 8; i++) {
		if (dem == n * n) {
			cout << "cac buoc di la: \n";
			output();
			exit(0);
		}
		int u = x + X[i];
		int v = y + Y[i];
		if (u >= 0 && u < n && v >= 0 && v < n && arr[u][v] == 0)
			movHorse(u, v);
	}
	dem--;
	arr[x][y] = 0;
}
int main()
{
	cin >> n;
	int a, b;
	cout << "nhap x: ";
	cin >> a;
	cout << "nhap y: ";
	cin >> b;
	movHorse(a, b);
	cout << "khong tim thay duong";
}