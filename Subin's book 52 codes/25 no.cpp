#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,gcd=0,lcm=0,result=0,a,b;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>a>>b;
		for(int j=1;j<=a && j<=b;j++){
			if(a%j==0 &&b%j==0 ){
				gcd=j;
			}
		}
		result=a*b;
		lcm=result/gcd;
		cout<<"LCM = "<<lcm<<endl;
	}
}
