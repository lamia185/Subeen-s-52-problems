#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,ara[1000],i;
	cin>>n;
	
	for(i=1;i<=n;i++){
		cin>>a;
		for(int j=1;j<=a;j++){
			cin>> ara[j];
		}
		for(int m=1;m<=a;m+=2){
			cout<<ara[m];
			cout<<" ";
		}
		cout<<endl;
	}
	
}
