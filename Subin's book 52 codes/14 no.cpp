#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int T,n,i,j,count=0;
	char str[10001];
	char ch[5];
    cin>>T;
    fflush(stdin);
    
    for(j=0;j<T;j++){
    	count=0;
    	scanf("%[^\n]",str);
         fflush(stdin);
        scanf("%s",ch);
        fflush(stdin);
      for(i=0;str[i]!='\0';i++){
    	if(str[i]==ch[0])
    		count++;
	}
    	if(count==0){
    		printf("'%c' is not present\n",ch[0]);
		}
		else{
			printf("Occurance of '%c' in '%s' = %d\n",ch[0],str,count);
			
		}

	}
}
