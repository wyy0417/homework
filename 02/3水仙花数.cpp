#include<iostream>
using namespace std;
int main(){
	int a,b,c;//a 百位 b 十位 c 个位
	printf("输出所有的水仙花数："); 
	for(int i=100;i<=999;i++) {
		a=i/100;
		b=i%100/10;
		c=i%10;
		if(a*a*a+b*b*b+c*c*c==i)cout<<i<<" ";
	}
	return 0;
}
