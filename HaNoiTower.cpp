#include<iostream>

using namespace std;
void Tower(int n, char a, char b, char c)  // Nếu dùng int thì phải trả về 1 giá trị ở return còn void thì không cần
{
	if (n == 1) {
		cout << a << "---------" << c << endl;
		return;
	}
	Tower(n - 1, a, c, b); // Lấy c là cọc trung gian chuyển n-1 dĩa từ a sang cột b
	Tower(1, a, b, c);  // Chuyển đĩa lớn nhất sang cột c
	Tower(n - 1, b, a, c); // Lấy a làm cọc trung gian chuyển n-1 dĩa từ b sang c
}
int main()
{
	char a = 'A', b = 'B', c = 'C';
	int n;
	cout << "give me n ";
	cin >> n;
	Tower(n, a, b, c);
}