#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
	unsigned long int n,a,i,sum=0,j,x,m;
	int T;
	cin>>T;
	
	for(i=0;i<T;i++){
		cin>>n;
		sum=0;
		m=n;
		for(j=1;j<n;j++){
			if((n%j)==0){
				sum+=j;
			}
		}
		if(sum==m){
			cout<<n<<" is a perfect number"<<endl;
		}
		else
		cout<<n<<" is not a perfect number"<<endl;
	}
}

