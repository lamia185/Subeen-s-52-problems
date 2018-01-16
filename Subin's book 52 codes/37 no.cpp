#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,rev=0,num,i,j;
	cin>>T;
	while(T--){
		cin>>num;
		while(num!=0){
			rev=rev*10;
			rev+=num%10;
			num/=10;
		}
		cout<<rev<<endl;
	}
}
