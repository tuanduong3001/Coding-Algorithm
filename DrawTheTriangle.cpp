#include <iostream> 
using namespace std;

void drawTriangle(int n)
{
	for (int i = 1; i <= n; i++)
	{
		int space = n - i;
		for (int j = 1; j <= space; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int main()
{
	int n;
	cin >> n;
	drawTriangle(n);
	return 0;
}
