#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n;
	char str[1000];
	cin>>n;
	
	while(n--){
		cin>>str;
		for(i=0;str[i]!='\0';i++){
			if(str[i]>='A' && str[i]<='Z'){
				printf("%d",str[i]-64);
			}
		}
		cout<<endl;
	}
}
