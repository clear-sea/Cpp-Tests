#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
    int n,x,k;
    cin>>n>>x>>k;
    for (int i = 1; i < n; i++)
        cin>>a[i];
    for(int i=n;i>=k;i--)
        a[i+1]=a[i];
    a[k]=x;
    for (int i = 1; i < n+1; i++)
        cout<<a[i]<<" ";
    
    system("pause");
	return 0;
}
