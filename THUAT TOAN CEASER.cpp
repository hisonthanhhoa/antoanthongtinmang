#include<iostream> //ma hoa Caesar
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
	int k;
	cout<<"Nhap chuoi: ";getline(cin,P);
	C=P;
	cout<<"Nhap so K: "; cin>>k;
	//Ma hoa
	for(int i=0; i<P.size(); i++)
	{
		int m; m = Kt_so(P[i]);
		m=(m+k)%26;
		C[i]=so_kt(m);
	}
	cout<<"Chuoi moi: "<<C<<"\n";
	//giai ma
	for(int i=0; i<C.size(); i++)
	{
		int m; m=Kt_so(C[i]);
		m=(m-k+26)%26;
		P[i]=so_kt(m);
	}
	cout<<"Chuoi giai ma la: "<<P;
	return 0;
}
