#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,a[30001]={0},b[30001]={0};
	/*in*/
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>k;
	for(int i=1;i<=k;i++){
		cin>>b[i];
	}
	/*in*/
	/*sort*/
	for(int i=1;i<n;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j]>a[j+1]){
				int t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	/*sort*/
	for(int i=1;i<=k;i++){
		cout<<a[b[i]]<<' '; 
	}
	return 0;
}
