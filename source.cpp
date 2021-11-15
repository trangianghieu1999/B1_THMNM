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
	//Tinh Tich
	if(phepToan2 =="*")
		cout <<"\a*b="<<tich(a,b)<<"\n";
	//KiemtrasoChanle
 	int num;
  
   	cout<<"Nhập vào một số nguyên: ";
  	 cin>>num;
   	if ( num%2 == 0 )
      	cout<<num<<" là số chẵn ";
   	else
     	 cout<<num<<" là số lẻ";
   	cout<<"\n----------------------------\n";
	system("pause");
	return 0;
}
//Cau 19