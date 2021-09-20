#include<iostream>
#include<cmath>
using namespace std;
int Kt_so(char c)
{
	return c - 'A';
}
char so_kt(int n)
{
	return 'A' + n;
}
int main()
{
	string P,C;
	int a=0 ,b;
	cout<<"Nhap chuoi: ";getline(cin,P);
	C=P;
	while(a<1|| a>25 ||a%2==0 || a== 13)
	{
		cout<<"nhap a  = "; cin>>a;
	}
	cout<< " nhap b = ";
	cin>> b;
	// ma hoa 
	for(int i=0; i<P.size(); i++)
	{
		int m; m = Kt_so(P[i]);
		m=(a*m+b)%26;
		C[i]=so_kt(m);
	}
	cout<<" chuoi duoc ma hoa : "<<C;
	return 0;
	// giai ma 
	for(int i=0; i<P.size(); i++)
	{
		int m; m = Kt_so(P[i]);
		m=(a*m-b)%26;
		C[i]=so_kt(m);
	}
	cout<<" chuoi duoc giai ma : "<<P;
	return 0;
}
