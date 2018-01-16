#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,run1,run2,ball,balldone;
	double present_rate,wishing_rate,z,y,x;
	
	cin>>n;
	while(n--){
		cin>>run1>>run2>>ball;
		balldone=300-ball;
		x=((run2*1.0)/balldone)*6;
	
		present_rate=double(x);
		y=run1-run2;
		y=(y+1)*1.0;
		z=(y/ball)*6;
		wishing_rate=double(z);
		
		printf("%0.2lf %0.2lf",present_rate,wishing_rate);
		
	
	}
}
