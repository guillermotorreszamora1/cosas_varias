/*
Solution for the problem 448 of uva.onlinejudge.org
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
#include<stdlib.h>
char tabla[16][16]={
	"ADD",
	"SUB",
	"MUL",
	"DIV",
	"MOV",
	"BREQ",
	"BRLE",
	"BRLS",
	"BRGE",
	"BRGR",
	"BRNE",
	"BR",
	"AND",
	"OR",
	"XOR",
	"NOT"
};
char translate(char data){
	if(data<='9'){
		data = data-'0';
	}else{
		data = data -'A' +10;
	}
	return data;
}
char read_data(){
	char data;
	do{
		if(scanf("%c",&data)==EOF){
			exit(0);
		}
	}while(data=='\n');
	return data;
}
void read_register(char a){
	char b;
	char c;
	char d;
	int dato;
	b =read_data();
	c = read_data();
	d = read_data();

	b = translate(b);
	c = translate(c);
	d = translate(d);
	dato = 0;
	dato += (b&3)<< 8;
	dato += c << 4;
	dato += d;
	printf("R%d",dato);
}
void read_constant(char a){
	char b;
	char c;
	char d;
	int dato;
	b = read_data();
	c = read_data();
	d = read_data();
	b = translate(b);
	c = translate(c);
	d = translate(d);
	dato = 0;
	dato += (a&3) << 12;
	dato += b << 8;
	dato += c << 4;
	dato += d;
	printf("%d",dato);
}
void read_relative(char a){
	printf("PC+");
	read_constant(a);
}
void read_absolute(char a){
	printf("$");
	read_constant(a);
}
void read_op(){
	char a;
	char tipo;
	a = read_data();
	tipo = translate(a) >> 2;
	a = translate(a);
	if(tipo==0){
		read_register(a);/* R+10 bits*/
	}
	if(tipo==1){
		read_absolute(a);/*$+14 bits*/
	}
	if(tipo==2){
		read_relative(a);/*PC+14 bits*/
	}
	if(tipo==3){
		read_constant(a);/* 14 bits */
	}
}
int main(){
	char c;
	while(scanf("%c",&c)!=EOF){
		if(c=='\n'){
			continue;
		}
		if(c>='0'&&c<='9'){
			printf("%s ",tabla[c-'0']);
		}else{
			printf("%s ",tabla[c-'A'+10]);
		}
		if(c>='0'&&c<='4'){
			read_op();
			printf(",");
			read_op();
			printf("\n");
		}else if(c>='C'&&c<='E'){
			read_op();
			printf(",");
			read_op();
			printf(",");
			read_op();
			printf("\n");
		}else{
			read_op();
			printf("\n");
		}
	}
	return 0;
}