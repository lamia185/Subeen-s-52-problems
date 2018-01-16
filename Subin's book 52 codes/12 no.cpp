#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
	int n,count=0,z,index,sum=0,i;
	bool stop=false;
	
	cin>>n;
	
	while(1){
		for(i=1;;i++){
			z=pow(5,i);
			if(z<100){
			    index=i;	
			}
			else
			{
		    stop=true;
			break;	
			}
	
		}
		if(stop){
			break;
		}
	}
	
	for(i=1;i<=index;i++){
		sum+=100/(pow(5,i));
	}
	cout<<sum<<endl;
}
