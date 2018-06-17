/*
Solution for the problem 256 of uva.onlinejudge.org
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
#include<stdio.h>
void answer2(){
	printf(
		"00""\n"
		"01""\n"
		"81""\n"
		);
}
void answer4(){
	printf(
		"0000""\n"
		"0001""\n"
		"2025""\n"
		"3025""\n"
		"9801""\n"
		);
}
void answer6(){
	printf(
		"000000""\n"
		"000001""\n"
		"088209""\n"
		"494209""\n"
		"998001""\n"
		);
}
void answer8(){
	printf(
		"00000000""\n"
		"00000001""\n"
		"04941729""\n"
		"07441984""\n"
		"24502500""\n"
		"25502500""\n"
		"52881984""\n"
		"60481729""\n"
		"99980001""\n"
		);
}
int main(){
	int numero;
	while(scanf("%d",&numero)!=EOF){
		if(numero==2){
			answer2();
		}
		if(numero==4){
			answer4();
		}
		if(numero==6){
			answer6();
		}
		if(numero==8){
			answer8();
		}
	}
	return 0;
}