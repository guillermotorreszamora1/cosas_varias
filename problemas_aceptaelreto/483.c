/*
Solution for the problem 471 of aceptaelreto.com
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
#define DUR_DIA 86400
void hora_a_tsp(long long int* tsp,int hora,int minuto,int segundo){
  long long int tsp_aux;
  tsp_aux = hora*3600+minuto*60+segundo;
  *tsp = tsp_aux;
}
void tsp_a_hora(long long int tsp,int* hora,int* minuto,int* segundo){
  if(tsp>=DUR_DIA){
    tsp = tsp - DUR_DIA;
  }
  *hora = tsp/3600;
  *minuto = (tsp%3600)/60;
  *segundo = tsp%60;
}
int main(){
  int horas,minutos,segundos;
  long long int tsp1,tsp2,tsp3;
  int n_uvas,n_uva;
  int n_casos;
  scanf("%d",&n_casos);
  while(n_casos--){
    scanf("%d:%d:%d",&horas,&minutos,&segundos);
    hora_a_tsp(&tsp1,horas,minutos,segundos);
    scanf("%d:%d:%d",&horas,&minutos,&segundos);
    hora_a_tsp(&tsp2,horas,minutos,segundos);
    scanf("%d %d",&n_uvas,&n_uva);
    if(tsp2<tsp1){
      tsp2 += DUR_DIA;
    }
    tsp3 = tsp1 +((tsp2-tsp1)*(n_uva-1))/(n_uvas-1);
    tsp_a_hora(tsp3,&horas,&minutos,&segundos);
    printf("%.2d:%.2d:%.2d\n",horas,minutos,segundos);
  }
  return 0;
}
