#include<iostream>
using namespace std;

int main(){
	long long a=0,maxx=100000;
	cin>>a;maxx=a;
	for(int i=1;i<10;i++){
		cin>>a;
		if(maxx<a){
			maxx=a;
		}
	}
	cout<<maxx;
	return 0;
}
