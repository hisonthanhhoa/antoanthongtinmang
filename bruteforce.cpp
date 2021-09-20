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
	int k;
	cout<<"Nhap chuoi: ";getline(cin,C);
	P=C;
	for(k=1; k<26; k++)
	{
		for(int i=0; i<C.size(); i++)
		{
			int m; m=Kt_so(C[i]);
			m=(m-k+26)%26;
			P[i]=so_kt(m);
		}
		cout<<"voi k"<<k<<" : "<<P<<endl;
	}
}

