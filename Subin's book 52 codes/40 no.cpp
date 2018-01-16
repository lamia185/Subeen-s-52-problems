#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
	int T,x,k,sum=0;
	
	cin>>T;
	
	while(T--){
		sum=0;
		cin>>x>>k;
		for(int i=0;i<=k;i++){
			sum+=pow(x,i);
		}
		cout<<"Result = "<<sum<<endl;
	}
}
