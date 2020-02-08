/*

Solution for the problem 545 of aceptaelreto.com
    Copyright (C) 2020 Guillermo Torres Zamora

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
  int longi;
  int n_vehiculos;
  int instante;
  int velocidad;
  int tiempo;
  int max_time = 2000000;
  while(scanf("%d %d",&longi,&n_vehiculos)!=EOF){
    max_time = 2000000;
    while(n_vehiculos){
      n_vehiculos--;
      scanf("%d %d",&instante,&velocidad);
      if(instante<0){
        continue;
      }
      tiempo = instante+longi/velocidad;
      if(tiempo<max_time){
        max_time = tiempo;
      }
    }
    printf("%d\n",max_time);
  }
  return 0;
}
