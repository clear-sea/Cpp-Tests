#include<bits/stdc++.h>
using namespace std;

int main(){
	for(int x=0;x<=20;x++){
		for(int y=0;y<=33;y++)
			for(int z=0;z<=100;z++){
				if((5*x+3*y+1/3.0*z)==100&(x+y+z==100))
					cout<<x<<' '<<y<<' '<<z<<endl;
			}
	}
	return 0;
}
