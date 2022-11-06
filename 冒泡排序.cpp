#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[21]={0},temp;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int maxx=a[1],maxi=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=1;i<=n;i++)
		cout<<a[i]<<"\n";
	return 0;
}
