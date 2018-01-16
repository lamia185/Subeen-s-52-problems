#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,a;
	cin>>n;
	while(n--){
		cin>>a;
		for(i=0;i<a;i++){
			for(j=0;j<a;j++){
				cout<<"*";
			}
			printf("\n");
		}
	}
}
