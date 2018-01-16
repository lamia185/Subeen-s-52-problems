#include<bits/stdc++.h>
using namespace std;

long long int fact(long long int n){
	long long int product=1,i;
    for(i=n;i>=1;i--){
    	product*=i;
	}
	return product;
}

int main()
{
	int T;
	long long int n;
	double sum=0.0;
	cin>>T;
	
	while(T--){
		cin>>n;
		sum=0.0;
		for(int j=1;j<=n;j++){
			sum+=(double)j/fact(j);
		}
		printf("%0.4lf",sum);
	}
}
