#include<stdio.h>
#define MIN(x,y) (((x)<(y))?(x):(y))
unsigned long long int actual[1000000];
unsigned long long int futura[1000002];
int main(){
	unsigned long long int n_servidores;
	unsigned long long int i,carga,necesita;
	unsigned long long int maximo=0;
	unsigned long long int aux;
	while(1){
		maximo=0;
		scanf("%llu",&n_servidores);
		if(n_servidores==0){
			return 0;
		}
		for(i=0;i<n_servidores;i++){
			scanf("%llu",&actual[i]);
			maximo += actual[i];
		}
		i=0;
		futura[i]=0;
		for(i=0;i<n_servidores;i++){
			scanf("%llu",&futura[i+1]);
			maximo += futura[i+1];
		}
		futura[i+1]=0;
		carga = maximo /n_servidores;
		if(maximo%n_servidores!=0){
			printf("IMPOSIBLE\n");
			goto fin;
		}
		for(i=0;i<n_servidores;i++){
			if(actual[i]>carga){
				printf("IMPOSIBLE\n");
				goto fin;
			}
			necesita = carga - actual[i];
			aux = MIN(necesita,futura[i]);
			necesita -= aux;
			futura[i] -= aux; 
			aux = MIN(necesita,futura[i+1]);
			necesita -= aux;
			futura[i+1] -= aux;
			aux =  MIN(necesita,futura[i+2]);
			necesita -= aux;
			futura[i+2] -= aux;
			if(necesita>0){
				printf("IMPOSIBLE\n");
				goto fin;
			}
		}
		printf("%lld\n",carga);
		fin:
		maximo++;
	}
	return 0;
}
