#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,a;
	cin>>n;
	
	for(i=1;i<=n;i++){
		cin>>a;
		cout<<"Case "<<i<<':';
		for(j=1;j<=a;j++){
			if(a%j==0){
				cout<<j<<" ";
			}
		}
		printf("\n");
	}
}
