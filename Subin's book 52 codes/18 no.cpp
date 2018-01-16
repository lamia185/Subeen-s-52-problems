#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int n,i,j,count=0;
	char str[1001];
	cin>>n;
	
	while(n--){
		count=0;
		scanf(" %[^\n]",str);
		for(i=0;str[i]!='\0';i++){
			if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
				cout<<str[i];
			}
		}
		cout<<endl;
		for(j=0;str[j]!='\0';j++){
			if(str[j]!='a'&& str[j]!='e'&& str[j]!='i' && str[j]!='o' && str[j]!='u' && str[j]!=' '){
				cout<<str[j];
			}
		}
		cout<<endl;
	}
}
