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
				count++;
			}
		}
		cout<<"Number of Vowels = "<<count<<endl;
	}
}
