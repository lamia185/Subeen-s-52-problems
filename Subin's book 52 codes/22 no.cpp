#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define size 100001

char ara[size];


void seive()
{
	int i,j,root;
	for(i=2;i<size;i++){
		ara[i]=1;
	}
	root=sqrt(size);
	for(i=0;i<=root;i++){
		if(ara[i]==1){
			for(j=2;j*i<=size;j++){
				ara[i*j]=0;
			}
		}
	}
}

int main()
{
	int n,i,a,b,count=0;
	seive();
	cin>>n;
	while(n--){
		cin>>a>>b;
		for(i=a;i<=b;i++){
			if(ara[i]==1){
			   count++;
			}
		}
		cout<<"Count = "<<count<<endl;
	}
}
