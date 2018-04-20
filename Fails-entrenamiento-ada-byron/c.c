#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	long int caso=0,segundo2,i=0,aux,dia,hora,minuto,segundo;
	scanf("%ld",&caso);
	while(i<caso){
		scanf("%ld",&dia);
		scanf("%ld:%ld:%ld",&hora,&minuto,&segundo);
		segundo2=hora*60*60+minuto*60+segundo;
		aux = dia*segundo2;
		minuto = aux/60;
		segundo = aux%60;

		hora = minuto/60;
		minuto = minuto%60;

		dia = hora/24;
		hora = hora%24;

		printf("%ld %.2ld:%.2ld:%.2ld\n",dia,hora,minuto,segundo);
		i++;
	}
	return 0;
}
