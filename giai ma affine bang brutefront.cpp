#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	string chuoi,chuoigiai;
	int a,b;
	cout<<"nhap chuoi: ";getline(cin,chuoi);
	chuoigiai = chuoi;
//	a = 0;
//	while (a<1 || a> 25 || a%2==0 || a==13)
//	{
//		cout<<"nhap a"; cin>>a;
//		
//	}
//	cout<<"nhap b"; cin>>b;
//	for (int i=0; i< chuoi.size();i++)
//	{
//		chuoigiai[i] = (a*chuoi[i] + b)%26;
//	}
//	cout<<"chuoi moi: "<<chuoi;
	int giai;
	for (int a=1; a<26;a++)
	{
		if (a%2!=0 and a!=13)
		{
			for(int b=1 ; b <26; b++)
			{
				for (int i=0; i< chuoi.size();i++)
				{
					chuoigiai[i] = (a*chuoi[i] - b -97 +26)%26 +97;
				}
				for (int j=1; j<26;j=j+2)
				{
					if((a*j)%26==1 and j !=13)
					{
						giai = j;
						break;	
					}
				}
				cout<<"vs a là : "<<giai<<" và b la: "<<b<<" chuoi la: "<<chuoigiai<<endl;
			
			}
		}
		
	}
	
	
	
		
	
//	for (int i=0; i< chuoi.size();i++)
//	{
//		chuoi[i] = (chuoi[i] - k );
//	}
//	cout<<"\n chuoi cu: "<<chuoi;
	
	
}

