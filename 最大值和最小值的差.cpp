#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[10001];
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int maxx=a[1],minn=a[1];
	for(int i=1;i<=n;i++){
		if(a[i]>maxx)
			maxx=a[i];
		if(a[i]<minn)
			minn=a[i];
	}
	cout<<maxx-minn;
	return 0;
}
