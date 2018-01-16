/*#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
	long long int n,a;
	double x;
	cin>>n;
	while(n--){
	cin>>a;
	x=sqrt(a);
	if((x*x)==a)
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
}*/


#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
	long long int n,a,b,c;
	double x;
	cin>>n;
	while(n--){
	cin>>a;
	x=sqrt(a);
	b=ceil(x);
	c=floor(x);
	if(b==c)
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
}


