#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	string P,C,K;
	string B="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout<<"nhap plaintext: ";cin>>P; C=P;
	cout<<"nhap chuoi K= ";cin>>K;
	//ma hoa
	for(int i=0; i<P.size();i++)
		for(int j=0;j<26;j++)
			if(P[i]==B[j]) C[i]=K[j];
	cout<<"chuoi ma hoa: "<<C;
	for(int i=0; i<C.size();i++)	
		for(int j=0;j<26;j++)
			if(C[i]==B[j]) P[i]=B[j];
	cout<<"chuoi ma hoa: "<<P;
}

