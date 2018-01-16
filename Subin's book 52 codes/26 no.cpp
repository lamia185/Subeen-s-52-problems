#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,count=0;
	double x;
	
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		count=0;
		while(x>=1.0){
			x/=2.0;
			count++;
		}
		cout<<count<<" days"<<endl;
	}
}
