#include<bits/stdc++.h>
using namespace std;

int main(){
	int T,n,i,j,ara[30],found=0;
	cin>>T;
	while(T--){
		cin>>n;
		for(i=1;i<=n-1;i++){
			cin>>ara[i];
		}
		for(j=1;j<=n;j++){
			found=0;
			for(int s=1;s<=n-1;s++){
				if(j==ara[s]){
					found=1;
				}
			}
			if(found==0){
				cout<<j<<endl;
			}
		}
	}
}
