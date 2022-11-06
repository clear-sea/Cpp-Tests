#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1001]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i%j==0){
				if(a[i]==1)
					a[i]=0;
				else if(a[i]==0)
					a[i]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]==1)
			cout<<i<<" ";
	}
	return 0;
} 
