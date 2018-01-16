#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
	int T,a,b,c,m,k,n,l;
	double area;
	
	cin>>T;
	while(T--){
		cin>>a>>b>>c;
		k=(a+b+c)/2;
		m=(k-a);
		n=(k-b);
		l=(k-c);
		
		area=sqrt(k*m*n*l);
		
	printf("%.3lf\n",area);
	}
}
