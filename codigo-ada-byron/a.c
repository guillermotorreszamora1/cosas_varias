#include<stdio.h>

int gcd(int m,int n){
	while(m>0){
		int c = n%m;
		n=m;
		m=c;
	}
	return n;
}

int lcm(int m,int n){
	return m*n/gcd(m,n);
}
int main(){
	int a,b,c,cont,mcm;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
		if(a==0 && b==0 && c==0)
			break;
		cont=0;
		mcm=lcm(a,b);
		cont = c/mcm;
		printf("%d\n",cont);
	}
	return 0;
}
 

