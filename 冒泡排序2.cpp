#include<bits/stdc++.h>
using namespace std;
int n,a[100];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		for(int j=n;j>i;j--){
			if(a[j]>a[j-1]){
				int t;
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}
