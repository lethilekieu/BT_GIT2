#include <iostream>

using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const double PI = 3.14159;
float cVVuong(int a);
float dTVuong(int a);
float cVChuNhat(int a,int b);
float dTChuNhat(int a, int b);
float cVTron(int a);
float dTTron(int a);
int tong(int a, int b);
void phepTru(int &kq);
void phepCong(int &kq);
bool kiemTra(int x, int a, int b);

void phepTru(int &kq) {
	int a = rand() % 100 + 1;
	int b = rand() % 100 + 1;
	cout << "so a :" << a << endl;
	cout << "So b :" << b << endl;
	cout << "a" << a << "-" << "b" << b << "=" << a - b;
}

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
	//////////////////////////////////////////////
	float cVVuong(int a) {
	return 4*a;
}
float dTVuong(int a) {
	return a * a;
}
float cVChuNhat(int a, int b) {
	return (a + b) * 2;
}
float dTChuNhat(int a, int b) {
	return a * b;
}
float cVTron(int a) {
	return 2 * PI*a;
}
float dTTron(int a) {
	return PI * a*a;
}
/////////////////////////////////////////////////////
void phepCong(int &kq) {
	int a = rand() % 100 + 1;
	int b = rand() % 100 + 1;
	cout << "so a :" << a << endl;
	cout << "So b :" << b << endl;
	cout << "a" << a << "+" << "b" << b << "=" << a + b;
}
bool kiemTra(int x, int a, int b) {
	for (int i = 0; i < 100; i++) {
		int tong = a + b;
		if (tong == x)
			return true;
		else
			return false;
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
	
///////////////////////////////////
int a;
	cout << "Nhap canh hinh vuong: ";
	cin >>a;
	cout << "Chu vi hv: " << cVVuong(a) << " Dien tich hv: " << dTVuong(a);
	int b,c;
	cout << "Nhap chieu dai cn: ";
	cin >> b;
	cout << "Nhap chieu rong cn: ";
	cin >> c;
	cout << "Chu vi hcn: " << cVChuNhat(b,c) << " Dien tich hv: " << dTChuNhat(a,b);

	int d;
	cout << "Nhap ban kinh ht: ";
	cin >> d;
	cout << "Chu vi ht: " << cVTron(d) << " Dien tich hv: " << dTTron(d);
//////////////////////////////////////////////
int a, b, x;
	srand(time(NULL));
	a = (rand() % 100) + 1;
	b = (rand() % 100) + 1;
	cout << a << "+" << b << "=";
	cin >> x;
	if (kiemTra(x, a, b) == true) {
		cout << "dung";
	}
	else {
		cout << "sai";
	
	}
	system("pause");
	return 0;
}