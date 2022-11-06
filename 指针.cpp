#include<bits/stdc++.h>
using namespace std;
int main(){
	int *p;
	int i=2;
	p=&i;
	printf("%d \n",i);
	cout<<p<<endl;
	*p=5;
	printf("%d\n%d",i,*p);
	return 0;
}
