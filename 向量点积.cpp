#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1000],b[1000],ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	for(int i=0;i<n;i++)
		ans+=a[i]*b[i];
	cout<<ans;
	return 0;
}
