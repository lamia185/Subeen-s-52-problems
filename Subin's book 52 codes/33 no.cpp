#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,i,j,T;
	cin>>T;
	for(i=0;i<T;i++){
		cin>>a>>b>>c;
		for(j=a;j<=b;j++){
			if((j%c)==0){
				cout<<j<<endl;
			}
		}
	}
}
