#include <iostream>
using namespace std;
int hieu(int a, int b)
{
return (a-b);
};
float Tich(int a,int b)
{
return (a*b);
}
int main()
{
	int a, b;
	char phepToan2;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,*) ";
	cin >> phepToan2;
	if (phepToan2 == "-")
	  cout << "\na - b = " << hieu(a,b) << "\n";
	if(phepToan2 =="*")
		cout <<"\a*b="<<tich(a,b)<<"\n";
	system("pause");
	return 0;
}
