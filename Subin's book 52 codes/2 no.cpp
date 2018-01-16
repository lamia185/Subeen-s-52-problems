#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int n,l,k;
	char str[110],i;
	cin>>n;
	while(n--){
		cin>>str;
		l=strlen(str);
		char s=str[l-1];
		k=(int)s-48;
		if(k%2==0)
		cout<<"even"<<endl;
		else 
		cout<<"odd"<<endl;
	}
}

