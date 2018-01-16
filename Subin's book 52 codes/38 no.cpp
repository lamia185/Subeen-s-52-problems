#include<bits/stdc++.h>
using namespace std;

int main(){
	int T,i,n,m,j;
	cin>>T;
	while(T--){
		cin>>n>>m;
		for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				cout<<m;
			}
			cout<<endl;
		}
		
		for(int k=n-1;k>=1;k--){
			for(int l=1;l<=k;l++){
				cout<<m;
			}
			cout<<endl;
		}
	}
}
