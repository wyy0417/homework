#include<iostream>
using namespace std;
int main(){
	int a,b,c;//a ��λ b ʮλ c ��λ
	printf("������е�ˮ�ɻ�����"); 
	for(int i=100;i<=999;i++) {
		a=i/100;
		b=i%100/10;
		c=i%10;
		if(a*a*a+b*b*b+c*c*c==i)cout<<i<<" ";
	}
	return 0;
}
