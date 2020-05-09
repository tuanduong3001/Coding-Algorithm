#include<iostream>



using namespace std;
void input(int& n, int& k)
{
	cin >> n >> k;
}
void output(int n)
{
	cout << n;
}
void rotateRight(int& n, int k)
{
	k %= 32;
	n = (n >> k) | (n << (32 - k));
}
int main()
{
	int n, k;
	input(n, k);
	rotateRight(n, k);
	output(n);
}