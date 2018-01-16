#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	while(n--){
	 int i,count=1,fact=1,j,count2=1,flag=1,m;
	char str[11][30];
	char ch[50];
		cin.ignore();
		gets(ch);
		fflush(stdin);
		for(i=0;ch[i]!='\0';i++){
			if(ch[i]==32){
				count++;
			}
		}
		
		for(int i=1;i<=count;i++){
			fact*=i;
     	}
     	
     	
		for(i=0,j=0,m=0;ch[i]!='\0';i++){
		  if(ch[i]!=32){
		    str[j][m]=ch[i];
		    m++;
		}
		    if(ch[i]==32){
		      j++;
		      m=0;
		      count2++;
		    }
		}
	
	    for(int k=0;k<count2;k++){
	    	if(strcmp(str[k],str[k+1])==0){
	    		flag++;
			}
		}
	  
	    int z=fact/flag;
	    cout<<"1/"<<z<<endl;
			
		}
		return 0;
	}
	
