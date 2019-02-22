#include<stdio.h>
	int fpb(int a, int b){
		if(b==0) 
		return a;
		else
		return fpb(b, a%b);
	}
	
	int main(){
		int a, b, c;
		scanf("%d %d", &a, &b);
		c= fpb(a,b);
		printf("%d\n", c);
	}
