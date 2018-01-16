#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	int n,ara[4],i;
	cin>>n;
	while(n--){
		for(i=0;i<3;i++){
			cin>>ara[i];
		}
		sort(ara,ara+3);
		for(i=0;i<3;i++){
			cout<<ara[i]<<' ';
		}
		cout<<endl;
	}
}


