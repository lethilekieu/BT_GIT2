#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b)
{
	return (a-b);
}
int tich(int a, int b);
float thuong(int a, int b);
int tong(int a, int b)
	{
	return(a+b);
	}
int hieu(int a, int b)
	{
	return(a-b);
	}
int tich(int a, int b)
	{
	return(a*b);
	}
float thuong(int a, int b)
	{
	if(b==0)
	cout<<"mau khong bang 0";
	else{
		return(a/b);
		}
	}
int main()
{
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";

	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Tong la: "<<tong(a,b);
	cout<<"Hieu la: "<<hieu(a,b);
	cout<<"Tich la: "<<tich(a,b);
	cout<<"Thuong la: "<<thuong(a,b);

	system("pause");
	return 0;
}