#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	int a[1000]={0},b[1000]={0},c[10000]={0};
	cin>>s1>>s2;
	int la=s1.size(),lb=s2.size();
	//转换成数字倒着存入数组 
	for(int i=1;i<=la;i++)
        a[i]=s1[la-i]-'0';
        
    for(int i=1;i<=lb;i++)
        b[i]=s2[lb-i]-'0';
    //运算 
    for(int i=1;i<=la;i++){
    	int x=0;//存放进位  
    	for(int j=1;j<=lb;j++){//对乘数每一位处理  
    		c[i+j-1]=a[i]*b[j]+x+c[i+j-1];//当前积+上次乘积进位+原数  
    		x=c[i+j-1]/10;
    		c[i+j-1]%=10;
    	}
    	c[i+lb]=x;//进位 
	}
	int lc=la+lb;   //位数最多是la+lc，最少是la+lc-1 
    while(c[lc]==0&&lc>1)
    	lc--;
	for(int i=lc;i>=1;i--) //倒序输出 
        cout<<c[i];
    cout<<endl;
	return 0;
}
