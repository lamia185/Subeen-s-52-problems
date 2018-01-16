#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int i,j,T,n;
	char str[30],str2[30];
	cin>>T;
	cin.ignore();
	while(T--){
		fflush(stdin);
		gets(str);
		int l=strlen(str);
		for(i=l-1,j=0;i>=0;i--){
			str2[j]=str[i];
			j++;
		}
		str2[j]='\0';

		if(strcmp(str,str2)==0){
			cout<<"Yes! It is palindrome"<<endl;
		}
		else cout<<"Sorry! it is not a palindrome"<<endl;
	}
}
