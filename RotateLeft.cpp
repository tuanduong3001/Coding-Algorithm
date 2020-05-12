#include<iostream>



using namespace std;
void rotateLeft(unsigned int& n, unsigned int k)
{
	k %= 32;
	n = (n << k) | (n >> (32 - k));
}
void input(unsigned int& n, unsigned int& k)
{
	cin >> n >> k;
}
void output(int n)
{
	cout << n;
}
int main()
{
	unsigned int n, k;
	input(n, k);
	rotateLeft(n, k);
	output(n);
}