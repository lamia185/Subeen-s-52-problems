#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int T,i,j,k,l,count=0,flag=0;;
	char str[50],str2[50];
	cin>>T;
	while(T--){
		count=0;
		cout<<"The string"<<endl;
		cin>>str;
		cout<<"The substring"<<endl;
		cin>>str2;
		k=strlen(str);
		l=strlen(str2);
		
			for(i=0;i<k;i++){
			if(str2[0]==str[i]){
				for(j=1;j<l;j++){
					if(str2[j]==str[i+j])
					{
					flag++;
						if(flag==l)
						count++;
				    }
					else{
						break;
					}
					if(flag==2)
					count++;
				}
				
			}
		}
		
		cout<<count<<endl;
	}
}
