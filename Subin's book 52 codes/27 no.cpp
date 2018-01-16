#include<bits/stdc++.h>
#include<cstring>
#include<stdlib.h>
#include<cmath>
using namespace std;

int main()
{
	int n,main_num,total_num=0,i,j,a,b,l,m,count=0;
	char str[10000],str2[10000];
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>main_num;
		int a=main_num;
		int s=a;
		
		while(s>0){
		   s/=10;
		   count++;
		  
		}
		
		while(m!=0){
			m=a%10;
			b+=pow(m,count);
			a/=10;
			
		}
		
		
		if(b==main_num){
			cout<<main_num<<" is an armstrong number"<<endl;
		}
		else{
			cout<<main_num<<" is not an armstrong number"<<endl;
		}
	}
}
