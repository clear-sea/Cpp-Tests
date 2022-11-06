#include<iostream>
using namespace std;
int main() {
	float S,x1, y1, x2, y2, x3, y3,S1,S2,S3;
	cin>> x1>>y1>>x2>>y2>>x3>>y3;
	S1 = 0.5 * (y1 - y2)*(x1 - x2);
	S2 = 0.5 * (y1 - y3)*(x3 - x1);
	S3 = 0.5 * (y3 - y2) * (x3 - x2);
	S = (x3 - x1) * (y1 - y2) - S1 - S2 - S3;
	printf("%.2f",S);
	return 0;
}
