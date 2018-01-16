#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,i,x=1,a;
	cin>>n;
	while(n--){
		cin>>a;
		for(i=a;i>=1;i--){
			x=x*i;
		}
		cout<<x<<endl;
	}
}
