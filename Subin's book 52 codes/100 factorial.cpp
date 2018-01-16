#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,fact[1000],temp,size=1,k;
	cin>>n;
	fact[0]=1;
	
	for(i=1;i<=n;i++){
		temp=0;
		for(k=0;k<size;k++){
			temp+=fact[k]*i;
			fact[k]=temp%10;
			temp=temp/10;
		}
		while(temp>0){
			fact[size]=temp%10;
			size=size+1;;
			temp=temp/10;
		}
	}
	
	for(k=size-1;k>=0;k--){
		cout<<fact[k];
	}
	cout<<endl;
}
