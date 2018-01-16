#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,count[26]={0};
	char str[1001];
	cin>>n;
	while(n--){
		cin.ignore();
	gets(str);
	fflush(stdin);
	
	for(int i=0;str[i]!='\0';i++){
		if(str[i]>='a' && str[i]<='z'){
			count[str[i]-'a']++;
		}
	}
	
	for(int j=0;j<26;j++){
		if(count[j]!=0){
			printf("'%c' = %d\n",'a'+j,count[j]);
		}
	}
}
}
