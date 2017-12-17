/*

Solution for the problem 123 of aceptaelreto.com
    Copyright (C) 2017 Guillermo Torres Zamora

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include<stdio.h>
#include<string.h>
int main(){
	char ara[6][10]={
		{"o"},
		{"as"},
		{"a"},
		{"amos"},
		{"ais"},
		{"an"}
	};
	char arp[6][10]={
		{"e"},
		{"aste"},
		{"o"},
		{"amos"},
		{"asteis"},
		{"aron"}	
	};
	char arf[6][10]={
		{"are"},
		{"aras"},
		{"ara"},
		{"aremos"},
		{"areis"},
		{"aran"}
	};
	char era[6][10]={
		{"o"},
		{"es"},
		{"e"},
		{"emos"},
		{"eis"},
		{"en"}		
	};
	char erp[6][10]={
		{"i"},
		{"iste"},
		{"io"},
		{"imos"},
		{"isteis"},
		{"ieron"}
	};
	char erf[6][10]={
		{"ere"},
		{"eras"},
		{"era"},
		{"eremos"},
		{"ereis"},
		{"eran"}
	};
	char ira[6][10]={
		{"o"},
		{"es"},
		{"e"},
		{"imos"},
		{"is"},
		{"en"}
	};
	char irp[6][10]={
		{"i"},
		{"iste"},
		{"io"},
		{"imos"},
		{"isteis"},
		{"ieron"}
	};
	char irf[6][10]={
		{"ire"},
		{"iras"},
		{"ira"},
		{"iremos"},
		{"ireis"},
		{"iran"}
	};
	char pronom[6][10]={
		{"yo"},
		{"tu"},
		{"el"},
		{"nosotros"},
		{"vosotros"},
		{"ellos"}
	};
	char verbo[30];
	char letra;
	char familia;
	int tamano,i;
	while(1){
		scanf("%s",verbo);
		tamano = strlen(verbo);
		familia = verbo[tamano -2];
		verbo[tamano-2]='\0';
		scanf("%c",&letra);
		scanf("%c",&letra);
	 	if(letra=='T'){
	 		break;
	 	}
	 	if(familia=='a'&&letra=='A'){
	 		for(i=0;i<6;i++){
	 			printf("%s %s%s\n",pronom[i],verbo,ara[i]);
	 		}
	 	}
	 	if(familia=='a'&&letra=='P'){
	 		for(i=0;i<6;i++){
	 			printf("%s %s%s\n",pronom[i],verbo,arp[i]);
	 		}
	 	}
	 	if(familia=='a'&&letra=='F'){
	 		for(i=0;i<6;i++){
	 			printf("%s %s%s\n",pronom[i],verbo,arf[i]);
	 		}
	 	}
	 	if(familia=='e'&&letra=='A'){
	 		for(i=0;i<6;i++){
	 			printf("%s %s%s\n",pronom[i],verbo,era[i]);
	 		}
	 	}
	 	if(familia=='e'&&letra=='P'){
	 		for(i=0;i<6;i++){
	 			printf("%s %s%s\n",pronom[i],verbo,erp[i]);
	 		}
	 	}
	 	if(familia=='e'&&letra=='F'){
			for(i=0;i<6;i++){
				printf("%s %s%s\n",pronom[i],verbo,erf[i]);
			}
	 	}
		if(familia=='i'&&letra=='A'){
			for(i=0;i<6;i++){
				printf("%s %s%s\n",pronom[i],verbo,ira[i]);
			}
		}
		if(familia=='i'&&letra=='P'){
			for(i=0;i<6;i++){
				printf("%s %s%s\n",pronom[i],verbo,irp[i]);
			}
		}
		if (familia=='i'&&letra=='F'){
			for(i=0;i<6;i++){
				printf("%s %s%s\n",pronom[i],verbo,irf[i]);
			}
		}
	}
	return 0;
}
