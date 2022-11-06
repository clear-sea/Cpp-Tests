#include<iostream>
using namespace std;

int main(){
	long long n,s=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		s=s*i;
	}
	cout<<s;
	return 0;
}
