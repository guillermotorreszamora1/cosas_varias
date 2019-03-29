/*
Generador aleatorio de contraseñas. Este programa genera contraseñas para linux.Este programa genera una contraseña en cada ejecución.
Si tarda en generar la contraseña,realize alguna otra cosa con el ordenador, por lo menos hasta que se genere la contraseña.
    Copyright (C) 2019 Guillermo Torres Zamora.
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
char especial_char(char a);
int main(){
  FILE* file;
  file = fopen("/dev/random","r");
  unsigned char c;
  char d;
  int i;
  for(i=0;i<12;i++){
    c = 100;
    while((c = getc(file)) > 97){
    }
    if(c>=0 && c <= 25){
      printf("%c",c+'a');
    }else if(c>=26 && c<=51){
      printf("%c",c+'A'-26);
    }else if(c>=52 && c <=61){
      printf("%c",c+'0'-52);
    }else if(c>=62 && c<=87){
      printf("%c",especial_char(c));
    }else if(c>=88 && c<=97){
      printf("%c",c+'0'-88);
    }
  }
  printf("\n");
  fclose(file);
  return 0;
}
char especial_char(char c){
  char d;
  switch (c) {
    case 62:
      d = '+';
      break;
    case 63:
      d = '-';
      break;
    case 64:
      d = '*';
      break;
    case 65:
      d = '/';
      break;
    case 66:
      d= '?';
      break;
    case 67:
      d= '|';
      break;
    case 68:
      d='{';
      break;
    case 69:
      d='}';
      break;
    case 70:
      d='$';
      break;
    case 71:
      d='%';
      break;
    case 72:
      d='&';
      break;
    case 73:
      d='_';
      break;
    case 74:
      d='(';
      break;
    case 75:
      d=')';
      break;
    case 76:
      d='=';
      break;
    case 77:
      d='[';
      break;
    case 78:
      d=']';
      break;
    case 79:
      d='!';
      break;
    case 80:
      d='.';
      break;
    case 81:
      d=',';
      break;
    case 82:
      d=';';
      break;
    case 83:
      d=':';
      break;
    case 84:
      d='#';
      break;
    case 85:
      d='<';
      break;
    case 86:
      d='>';
      break;
    case 87:
      d='\'';
      break;
  }
  return d;
}
