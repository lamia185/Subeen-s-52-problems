#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int m=n-1;
		for(int i=1,j=n;i<=m;i++){
			printf("2^%d+",j);
			j--;
		}
		cout<<"2+1"<<endl;
	}
	cout<<endl;
}
