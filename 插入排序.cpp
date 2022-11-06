#include<bits/stdc++.h>
using namespace std;
int n,a[100],sum;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	/*core*/
	for(int i=2;i<=n;i++){
		int x=a[i];
		int j=i-1;
		while(j>0&&x<a[j]){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=x;
	}
	/*core*/
	for(int i=1;i<=n;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}
