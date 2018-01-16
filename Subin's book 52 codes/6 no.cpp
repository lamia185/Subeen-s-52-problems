#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,a,b,c,x;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		b=a%10;
		c=a/10000;
		x=b+c;
		cout<<"Sum = "<<x<<endl;
	}
}

/*
//ekta number er sob songkha alada korar jonno ba reverse er jonno
int n,a;
cin>>n; 
while(n!=0){
a=n%10;
n/=10;
cout<<a<<endl;
}
*/
