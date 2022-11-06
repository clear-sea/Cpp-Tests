#include<bits/stdc++.h>
using namespace std;
int n,a[100],sum;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	/*core*/
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	/*core*/
	for(int i=1;i<=n;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}
