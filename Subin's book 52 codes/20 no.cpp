#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,count=1;
	char str[1001];
	cin>>n;
	while(n--){
		scanf(" %[^\n]",str);
		for(i=0;str[i]!='\0';i++){
			if(str[i]==' '){
				count++;
			}
		}
		cout<<"Count = "<<count<<endl;
	}
}
