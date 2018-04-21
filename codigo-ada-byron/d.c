#include<stdio.h> 
#include<limits.h>
int cache[1001];
int tabla[1001];
int costes[1001];
int maxSalto;
int d(int i){/*cuanto cuesta llegar */
	int coste,j;
	int costeMin;
	if(i<1){
		return 0;
	}
	if(cache[i]!=-1){
		return cache[i];
	}
	costeMin = INT_MAX;
	j=1;
	while(1){
		if((i-j)<0){
			break;
		}
		if((tabla[i]-tabla[i-j])<=maxSalto){
			coste = costes[i-j] + d(i-j);
			if(coste<costeMin){
				costeMin = coste;
			}
		}else{
			break;
		}
		j++;
	}
	cache[i] = costeMin;
	return costeMin;
}
int main(){
	int n_puntos,i;
	while(1){
		scanf("%d",&n_puntos);
		if(n_puntos==0){
			break;
		}
		cache[0]=-1;
		tabla[0]=0;
		for(i=1;i<=n_puntos;i++){
			cache[i]=-1;
			scanf("%d",&tabla[i]);
		}
		costes[0]=0;
		for(i=1;i<=n_puntos;i++){
			scanf("%d",&costes[i]);
		}
		scanf("%d",&maxSalto);
		printf("%d\n",d(n_puntos));
	}
	return 0;
}