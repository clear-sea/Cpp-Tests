#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[7],b[7];
	bool c[7]={0};
	int maxx=0,maxn;
	for(int i=0;i<7;i++){
		cin>>a[i]>>b[i];
		if(a[i]+b[i]>8)
			c[i]=true;
	}
	for(int i=0;i<7;i++){
		if(c[i]==true){
			if(a[i]+b[i]>maxx){
				maxx=a[i]+b[i];
				maxn=i+1;
			}
		}
	}
	cout<<maxn;
	return 0;
}
