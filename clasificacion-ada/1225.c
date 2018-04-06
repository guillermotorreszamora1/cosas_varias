#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[]){
	int a,aux,i,j,k;
	char subcadena[10];
	int sol[10];
	scanf("%d",&a);
	i=0;
	while(i<a){
		for(j=0;j<10;j++){
			sol[j]=0;
		}
		scanf("%d",&aux);
		for(j=1;j<=aux;j++){
			sprintf(subcadena,"%d",j);
			for(k=0;k<strlen(subcadena);k++){
				sol[subcadena[k]-'0']++;
			}
		}
		i++;
		for(j=0;j<10;j++){
			printf("%d",sol[j]);
			if(j<9){
				printf(" ");
			}else{
				printf("\n");
			}
		}
	}
	return 0;
}