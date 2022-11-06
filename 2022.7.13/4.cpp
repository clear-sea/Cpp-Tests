#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(){
    int n,t;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        t=i;
        while(t){
            a[t%10]++;
            t/=10;
        }
    }
    for (int i = 0; i < 10; i++)
        cout<<a[i]<<" ";
    
    system("pause");
	return 0;
}