#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 999999


using namespace std;
int w[50][50] = { 0 };
int d[50], p[50];
vector<int>T;
void input(int& n)
{
	cin >> n;
	for (int i = 0; i < T.size(); i++) {
		T.push_back(i);
		d[i] = MAX;
		for (int j = 0; j < n; j++) {
			cin >> w[i][j];
		}
	}
}
int findMin()
{
	int minval = MAX;
	int pos = 0;
	for (int i = 0; i < T.size(); i++) {
		if (d[T[i]] < minval) {
			minval = d[T[i]];
			pos = T[i];
		}
	}
	return pos;
}
void deleteVal(int idx)
{
	T.erase(T.begin() + idx);
}
void output(int i, int u, int n) {
	cout << "i= " << i << " u= " << u << " ";
	for (int i = 0; i < n; i++) {
		cout << d[i] << "|" << p[i] << " ";
	}
	cout << endl;
}
void dijsktra(int n)
{
	d[0] = 0;
	p[0] = -1;
	int i = 1;
	while (T.size() > 0) {
		int u = findMin();
		deleteVal(u);
		for (int j = 0; j < T.size(); j++) {
			int v = T[j];
			if (d[v] > d[u] + w[u][v]) {
				d[v] = d[u] + w[u][v];
				p[v] = u;
			}
		}
		output(i, u, n);
		i++;
	}
}
int main()
{
	int n;
	input(n);
	dijsktra(n);
}