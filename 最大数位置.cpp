#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1001]={0};
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int maxx=a[1],maxi=1;
	for(int i=1;i<=n;i++){
		if(a[i]>maxx){
			maxx=a[i];
			maxi=i;
		}
	}
	cout<<maxi;
	return 0;
}
