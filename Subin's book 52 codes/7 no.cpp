/*#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,count=1;
    char str[100000];
	cin>>n;
	cin.ignore();
	for(int j=0;j<n;j++){
		count=1;
			cin.getline(str,100000);
	   for(i=0;str[i]!='\0';i++){
	   	if(str[i]==32){
	   		count++;
		   }
	   }
	   cout<<count<<endl;
	}
}*/

#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{
    char str[100000],*p,*e;
    //cin.getline(str,100000);
    scanf("%[^\n]",str);
    long retrn;
    int count=0;
    p=str;
    
    for(p=str; ;p=e){
    	retrn=strtol(p,&e,10);
    	if(p==e)
    	break;
    	count++;
	}
	cout<<count<<endl;
}
