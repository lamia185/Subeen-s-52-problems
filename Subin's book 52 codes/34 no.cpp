#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,i,j,n,a,b,c;
	cin>>T;
	while(T--){
		cin>>a>>b>>c;
		for(i=1;i<=c;i++){
			if(i%a==0 && i%b==0){
				cout<<i<<endl;
			}
		}
	}
}
