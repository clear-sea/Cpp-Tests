#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,a[3001],b[3000];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<n;i++){
		b[i]=abs(a[i+1]-a[i]);
	}
	
	sort(b,b+n);
	
	bool flag=true;
	for(int i=2;i<n;i++){
		if(b[i]-b[i-1]!=1)
			flag=false;
	}
	if(flag)
		cout<<"Jolly";
	else
		cout<<"Not jolly";
	return 0;
}
