#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	char str[20][20],temp[20];
	int T,n,i,j;
	cin>>T;
	
	while(T--){
		cin>>n;
		for(i=1;i<=n;i++){
			cin.ignore();
			gets(str[i]);
		}
		
		for(i=1;i<=n-1;i++){
			for(j=1;j<=n-1;j++){
				if(str[j][0]>str[j+1][0]){
					strcpy(temp,str[j]);
					strcpy(str[j],str[j+1]);
					strcpy(str[j+1],temp);
				}
			}
		}
		
		for(int k=1;k<=n;k++){
			puts(str[k]);
			cout<<endl;
		}
	}
	
}
