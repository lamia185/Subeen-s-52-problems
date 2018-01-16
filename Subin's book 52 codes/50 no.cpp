#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int T;
	char str[30],str2[30];
	cin>>T;
	while(T--){
		cin>>str;
		int l=strlen(str);
		for(int i=0;i<l;i++){
			if(str[i]=='L'){
				str2[i]=str[i-1];
	
			}
			else if(str[i]=='R'){
				str2[i]=str[i+1];
			}
			else
			str2[i]=str[i];
			
		}
		puts(str2);
	}
}
