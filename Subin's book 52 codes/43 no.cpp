#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
	int T,p,q,c,i;
	double s;
	cin>>T;
	while(T--){
		cin>>p>>q>>c;
		s=pow(p,q);
		i=(int)s%c;
		cout<<i<<endl;
	}
}
