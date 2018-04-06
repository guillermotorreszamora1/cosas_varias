#include<stdio.h>
int tabla[2000];
int main(){
	int i,n_casos,j,tamano,contador,k;
	scanf("%d",&n_casos);
	for(i=0;i<n_casos;i++){
		contador=0;
		scanf("%d",&tamano);
		for(j=0;j<tamano;j++){
			scanf("%d",tabla+j);
		}
		for(j=0;j<tamano;j++){
			for(k=0;k<j;k++){
				if(tabla[k]<=tabla[j]){
					contador++;
				}
			}
		}
		printf("%d\n",contador);
	}
	return 0;
}