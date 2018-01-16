#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
  int T,n,m,i,ara1[40],ara2[20],j,k,l;
  cin>>T;
  while(T--){
    cin>>m>>n;
    for(i=0;i<m;i++){
      cin>>ara1[i];
    }
    for(j=0;j<n;j++){
      cin>>ara2[j];
    }
    for(k=0,l=m;k<n;k++){
      ara1[l]=ara2[k];
      l++;
    }
    
    sort(ara1,ara1+5);
    for(int x=0;x<(m+n);x++){
      cout<<ara1[x]<<endl;
    }
  }
}
