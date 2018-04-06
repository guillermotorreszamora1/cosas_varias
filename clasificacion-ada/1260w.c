#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int key;
	int pos;
}ESTRUCT;
int cmp(const void* a,const void* b){
	if(((ESTRUCT*)a)->key!=((ESTRUCT*)b)->key){
	return ((ESTRUCT*)a)->key - ((ESTRUCT*)b)->key;
	}else{
		return ((ESTRUCT*)a)->pos - ((ESTRUCT*)b)->pos;
	}
}
ESTRUCT estructura[1100];
int main(){
	int i,j,tamano,n_casos,acum;
	scanf("%d",&n_casos);
	for(j=0;j<n_casos;j++){
		acum=0;
		scanf("%d",&tamano);
		for(i=0;i<tamano;i++){
			scanf("%d",&(estructura[i].key));
			estructura[i].pos=i;
		}
		qsort(estructura,tamano,sizeof(ESTRUCT),cmp);
		for(i=0;i<tamano;i++){
			if(i<estructura[i].pos){
				acum =acum +  estructura[i].pos-i;
			}
		}
		printf("%d\n",tamano*(tamano-1)/2-acum);
	}
	return 0;
}