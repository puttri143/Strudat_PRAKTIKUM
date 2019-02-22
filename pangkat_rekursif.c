#include <stdio.h>

long double pangkat(int n, int a){
	if(a==0)
	return 1;
	else if(a>0)
	return n*pangkat(n, a-1);
	else
	return pangkat(n, a-1)/(long double) n;
}

int main(int b, char const *cha[]) {
	int n,a;
	long double ini;
	scanf("%d %d", &n, &a);
	ini = pangkat(n,a);
	
	printf("%LE\n", ini);
}

