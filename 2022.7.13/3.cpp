#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10];
    int x,k;
    cin>>x;
    for (int i = 0; i < 10; i++)
        cin>>a[i];
    for (int i = 0; i < 10; i++)
    {
        if(a[i]>=x)
            k=i;
            break;
    }
    for (int i = 10; i >=k; i--)
        a[i+1]=a[i];

    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    system("pause");
	return 0;
}