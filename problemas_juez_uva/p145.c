/*
Solution for the problem 145 of uva.onlinejudge.org
    Copyright (C) 2018 Guillermo Torres Zamora
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
/*Hours*/
/*0,8,18,22,24*/
/*0,480,1080,1320,1440*/
#include<stdio.h>
#define MAX(x,y) ((x)>(y)?(x):(y))
#define MIN(x,y) ((x)<(y)?(x):(y))
int prices[5][3]={
	{10,6,2},
	{25,15,5},
	{53,33,13},
	{87,47,17},
	{144,80,30}
};
int time1;
int time2;
int time3;
int tax(char type,int inicio,int fin){/*en centavos*/
	int money=0;
	int time;
	type = type -'A';
	time = MIN(fin,480)-MAX(inicio,0);
	if(time>0){
		money += time*prices[type][2];
		time3 += time;
	}
	time = MIN(fin,1080)-MAX(inicio,480);
	if(time>0){
		money += time*prices[type][0];
		time1 += time;
	}
	time = MIN(fin,1320)-MAX(inicio,1080);
	if(time>0){
		money += time*prices[type][1];
		time2 += time;
	}
	time = MIN(fin,1440)-MAX(inicio,1320);
	if(time>0){
		money += time*prices[type][2];
		time3 += time;
	}
	return money;
}
int main(){
	int min1,min2;
	int hora1,hora2;
	char type;
	char cadena[10];
	int inicio;
	int fin;
	int precio;
	while(1){
		scanf("%c",&type);
		if(type=='#'){
			return 0;
		}
		time1=0;
		time2=0;
		time3=0;
		scanf("%s %d %d %d %d",cadena,&hora1,&min1,&hora2,&min2);
		inicio = hora1*60+min1;
		fin = hora2*60+min2;
		if(fin<=inicio){
			precio = tax(type,inicio,1440);
			precio += tax(type,0,fin);
		}else{
			precio = tax(type,inicio,fin);
		}
		printf("  %s%6d%6d%6d  %c%5d.%.2d\n",cadena,time1,time2,time3,type,precio/100,precio%100);
		scanf("%c",&type);;
	}
}