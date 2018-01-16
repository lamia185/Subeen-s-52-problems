#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
	int T,n,r,x1,x2,y1,y2,i,j,a,b,l,k;
	cin>>T;
	while(T--){
		cin>>x1>>y1>>r>>x2>>y2;
		a=(x2-x1)*(x2-x1);
		b=(y2-y1)*(y2-y1);
		l=sqrt(a+b);
		if(l>r){
			cout<<"The point is not inside the circle"<<endl;
		}
		else 
		cout<<"The point is inside the circle"<<endl;
	}
}
