/* #include <stdio.h>
#include <ctype.h>

int main () {
   
    int n,i;
    char alfbt ;
    scanf("%d",&n); //ASCII a=97 sampai 123
    for (i=0 ; i<=n-1 ; i++) {
        alfbt = i+97;
        printf("%c",alfbt);
		}
    printf("\n");
    
    for (i=n-1 ; i>=0 ; i--) {
        alfbt = i+97;
        printf("%c",alfbt);
		}
    printf("\n");
} */
#include<stdio.h>

void naik(int n){
	if(n>=0){
		naik (n-1);
		printf("%c", 'a'+n);
	}
}
void turun(int n){
	if(n>=0){
		printf("%c", 'a'+n);
		turun(n-1);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	
	naik(n-1);
	printf("\n");
	
	turun(n-1);
	printf("\n");
}	
