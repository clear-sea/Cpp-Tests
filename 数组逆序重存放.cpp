#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[101];
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=n;i>=1;i--)
		cout<<a[i]<<" ";
	return 0;
}
