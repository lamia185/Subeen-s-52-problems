#include<bits/stdc++.h>
using namespace std;

int main()
{
	char ch;
	int n,i;
	cin>>n;
	while(n--){
		cin>>ch;
		if(ch>='a' && ch<='z')
		cout<<"Lowercase letter"<<endl;
		else if(ch>='A' && ch<='Z')
		cout<<"Uppercase letter"<<endl;
		else if(ch>='0' && ch<='9')
		cout<<"Numaric digit"<<endl;
		else cout<<"Special character"<<endl;
	}
}
