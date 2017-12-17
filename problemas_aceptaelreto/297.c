/*

Solution for the problem 297 of aceptaelreto.com
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
int main(){
	long i,casos,resis,r_total;
	char pot[5];
	scanf("%ld",&casos);
	for(i=0;i<casos;i++){
		r_total=0;
		while(1){
			scanf("%ld",&resis);
			if(resis==0){
				break;
			}
			scanf("%s",pot);
			if(pot[0]=='o'){
				r_total += resis;
			}else if(pot[0]=='d'){
				r_total += resis*10;
			}else if(pot[0]=='h'){
				r_total += resis*100;
			}else if(pot[0]=='k'){
				r_total += resis*1000;
			}else if(pot[0]=='M'){
				r_total += resis*1000000;
			}else if(pot[0]=='G'){
				r_total += resis*1000000000;
			}
		}
		
		/*imprimimos los resultados comprobando cuando se puede usar una abreviatura pero no la siguiente*/
		if(r_total%10){
			printf("%ld o\n",r_total);
		}else if (!(r_total%10)&&(r_total%100)){
			printf("%ld da\n",r_total/10);
		}else if (!(r_total%100)&&(r_total%1000)){
			printf("%ld h\n",r_total/100);
		}else if (!(r_total%1000)&&(r_total%1000000)){
			printf("%ld k\n",r_total/1000);
		}else if (!(r_total%1000000)&&(r_total%1000000000)){
			printf("%ld M\n",r_total/1000000);
		}else{
			printf("%ld G\n",r_total/1000000000);
		}
	}//Fin bucle caso
	return 0;
}
