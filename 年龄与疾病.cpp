#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,array[100],array1[4]={0};
	double c[4];
	cin>>n; 
	for(int i=0;i<n;i++)
		cin>>array[i];
	for(int i=0;i<n;i++){
		if(0<=array[i]&&array[i]<=18)
			array1[0]++;
		if(19<=array[i]&&array[i]<=35)
			array1[1]++;
		if(36<=array[i]&&array[i]<=60)
			array1[2]++;
		if(61<=array[i])
			array1[3]++;
	}
	for(int i=0;i<4;i++){
		c[i]=array1[i]*1.0/n*100;
		printf("%.2lf",c[i]);
		cout<<"%"<<endl;
	}
	return 0;
}
//0-18、19-35、36-60、61以上(含61)四个年龄
