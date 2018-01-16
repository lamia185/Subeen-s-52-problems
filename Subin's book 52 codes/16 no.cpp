 #include<bits/stdc++.h>
 #include<cstring>
 using namespace std;
 
 void rev(char str2[],int l){
 	for(int i=l-1;i>=0;i--){
 		printf("%c",str2[i]);
	 }
	 printf(" ");
 }
 
 int main()
 {
 	int n,i,j,k,m,count=1,flag=0;
 	char str[1001],str2[1001];
 	cin>>n;
 	
 	while(n--){
 		scanf(" %[^\n]",str);
 		for(i=0,j=0;str[i]!='\0';i++){
 			if(str[i]!=32){
 				str2[j]=str[i];
 				j++;
			 }
			 else if(j>0){
			 	str2[j]='\0';
			 	int l=strlen(str2);
			 	j=0;
			 	flag++;
			 	rev(str2,l);
			 	
			 }
		 }
		 if(j>0){
		 	str2[j]='\0';
		 	rev(str2,strlen(str2));
		 }
		 printf("\n");
	 }
 }
