#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int n,i,l;
	char str[1000];
	cin>>n;
	while(n--){
		scanf(" %[^\n]",str);
		l=strlen(str);
		for(i=l-1;i>=0;i--){
			printf("%c",str[i]);
		}
		cout<<endl;
	}
}
