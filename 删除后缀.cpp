#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len=s.size();
	if(s.find("er",len-2)!=string::npos||s.find("er",len-2)!=string::npos)
		s.erase(len-2,2);
	if(s.find("ing",len-3)==len-3&&s.find("er",len-2)!=string::npos)
		s.erase(len-3,3);
	cout<<s;
	return 0;
}
