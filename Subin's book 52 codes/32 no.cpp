#include<bits/stdc++.h>
using namespace std;

int main(){
	int T,x,y,a,i,j;
	cin>>T;
	for(i=0;i<T;i++){
		cin>>x>>y;
		if(x>y){
			cout<<"Invalid"<<endl;
			break;
		}
		else{
			a=y/x;
			for(j=1;j<=a;j++){
				cout<<x*j<<endl;
			}
		}
	}
}
