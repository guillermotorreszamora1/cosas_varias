#include<stdio.h>
#include<stdlib.h>
int cmp(const void* av,const void* bv){
	int a,b;
	a = *(int*)av;
	b = *(int*)bv;
	return b-a;
}
#define MIN(x,y) ((x)<(y)?(x):(y))
int main(){
	int td,ta,dd,da,n,ndd,nda,i,j;
	int vdd[1000];
	int vda[1000];
	while(scanf("%d %d %d %d %d",&td,&ta,&dd,&da,&n)!=EOF){
		for(i=0;i<n;i++){
			ndd = MIN(td,dd);
			for(j=0;j<ndd;j++){
				scanf("%d",&vdd[j]);
			}
			nda = MIN(ta,da);
			for(j=0;j<nda;j++){
				scanf("%d",&vda[j]);
			}
			qsort(vdd,ndd,sizeof(int),cmp);
			qsort(vda,nda,sizeof(int),cmp);
			for(j=0;j<MIN(ndd,nda);j++){
				if(vda[j]>vdd[j]){
					td--;
				}else{
					ta--;
				}
			}
		}
		printf("%d %d\n",td,ta);
	}
	return 0;
}
