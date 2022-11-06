#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[11],ans=0;
	for(int i=1;i<=10;i++)
		cin>>a[i];
	cin>>n; 
	for(int i=1;i<=10;i++){
		if(a[i]<=n)
			ans++;
		else if(a[i]>n&&a[i]<=n+30)
			ans++;
	}
	cout<<ans;
	return 0;
}
