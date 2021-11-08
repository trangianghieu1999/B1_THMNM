#include <iostream>
using namespace std;
int hieu(int a, int b)
{
return (a-b);
};

int tong(int a, int b){
return (a+b);
};
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";

	cin >> phepToan;
	if (phepToan == "-")
	  cout << "\na - b = " << hieu(a,b) << "\n";
	cin >> phepToan1;
	if (phepToan1 == "+")
	  cout << "\na + b = " << tong(a,b) << "\n";
	system("pause");
	return 0;
}
