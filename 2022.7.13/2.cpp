#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10];
	for(int  i=0;i<10;i++){
		cin>>a[i];
	}
	int temp;
	temp=a[9];
	a[9]=a[0];
	a[0]=temp;
	for (int i = 1; i < 9; i++){
		a[i]=a[i+1];
	}
	for (int i = 0; i < 10; i++)
		cout<<a[i]<<" ";
	return 0;
}
//1 2 3 4 5 6 7 8 9 10
