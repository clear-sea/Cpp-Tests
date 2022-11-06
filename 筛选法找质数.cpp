#include<bits/stdc++.h>
using namespace std;
bool num(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(num(i))
			cout<<i<<endl;
	}
	return 0;
}
