/*

Solution for the problem 271 of aceptaelreto.com
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
#define PADRE(x) (((x)-1)/2)
#define HIJO_I(x) (2*(x)+1)
#define HIJO_D(x) (2*(x)+2)
void max_heap_insertar(int* heap,int* n_elem,int numero){
	int i;
	int aux;
	heap[*n_elem] = numero;
	i = *n_elem;
	(*n_elem)++;
	while(i){
		if(heap[i]>heap[PADRE(i)]){
			aux = heap[i];
			heap[i] = heap[PADRE(i)];
			heap[PADRE(i)] = aux;
			i = PADRE(i);
		}else{
			break;
		}
	}
	/*
	printf("Max_heap_debug_i\n");
	for(i=0;i<(*n_elem);i++){
					printf(":%d:\n",heap[i]);
	}*/
	/*print heap*/
}
int max_heap_extraer(int* heap,int* n_elem){
	int dato;
	int i;
	int hijo_mayor;
	int aux;
	dato = heap[0];
	(*n_elem)--;
	heap[0] = heap[*n_elem];
	i=0;
	while(1){
		if(HIJO_I(i)>(*n_elem)){
			/*printf("r1\n");*/
			break;
		}
		if(HIJO_D(i)>(*n_elem)){
					/*printf("r2\n");*/
			hijo_mayor = HIJO_I(i);
		}else if(heap[HIJO_I(i)]>heap[HIJO_D(i)]){
					/*printf("r3\n");*/
			hijo_mayor = HIJO_I(i);
		}else{
					/*printf("r4\n");*/
			hijo_mayor = HIJO_D(i);
		}
		if(heap[hijo_mayor]>heap[i]){
					/*printf("r5\n");*/
			aux = heap[i];
			heap[i] = heap[hijo_mayor];
			heap[hijo_mayor] = aux;
			i = hijo_mayor;
		}else{
					/*printf("r6\n");*/
			break;
		}
	}
	/*
	printf("Max_heap_debug_e\n");
	for(i=0;i<(*n_elem);i++){
					printf(":%d:\n",heap[i]);
	}*/
	/*print heap*/
	return dato;
}
void min_heap_insertar(int* heap,int* n_elem,int numero){
		int i;
	int aux;
	heap[*n_elem] = numero;
	i = *n_elem;
	(*n_elem)++;
	while(i){
		if(heap[i]<heap[PADRE(i)]){
			aux = heap[i];
			heap[i] = heap[PADRE(i)];
			heap[PADRE(i)] = aux;
			i = PADRE(i);
		}else{
			break;
		}
	}
}
int min_heap_extraer(int* heap,int* n_elem){
	int dato;
	int i=0;
	int hijo_mayor;
	int aux;
	dato = heap[0];
	(*n_elem)--;
	heap[0] = heap[*n_elem];
	while(1){
		if(HIJO_I(i)>(*n_elem)){
			break;
		}
		if(HIJO_D(i)>(*n_elem)){
			hijo_mayor = HIJO_I(i);
		}else if(heap[HIJO_I(i)]<heap[HIJO_D(i)]){
			hijo_mayor = HIJO_I(i);
		}else{
			hijo_mayor = HIJO_D(i);
		}
		if(heap[hijo_mayor]<heap[i]){
			aux = heap[i];
			heap[i] = heap[hijo_mayor];
			heap[hijo_mayor] = aux;
			i = hijo_mayor;
		}else{
			break;
		}
	}
	return dato;
}
int main(){
	int max_heap[200000];
	int min_heap[200000];
	int referencia;
	int i,j,n_parejas;
	int pajaro_a,pajaro_b;
	int max_heap_len;
	int min_heap_len;
	while(1){
		max_heap_len=0;
		min_heap_len=0;
		scanf("%d",&referencia);
		scanf("%d",&n_parejas);
		if(referencia==0&&n_parejas==0){
			break;
		}
		for(i=0;i<n_parejas;i++){
			scanf("%d",&pajaro_a);
			scanf("%d",&pajaro_b);
			if(pajaro_b>referencia){
				if(pajaro_a>referencia){
					min_heap_insertar(min_heap,&min_heap_len,pajaro_a);/*min*/
					min_heap_insertar(min_heap,&min_heap_len,pajaro_b);/*min*/
					max_heap_insertar(max_heap,&max_heap_len,referencia);/*max*/
					referencia = min_heap_extraer(min_heap,&min_heap_len);/*min*/
				/*
				printf("Estado de los heaps\n");
				printf("MAX\n");
				for(i=0;i<max_heap_len;i++){
					printf(":%d:\n",max_heap[i]);
				}
				printf("MIN\n");
				for(i=0;i<min_heap_len;i++){
					printf(":%d:\n",min_heap[i]);
				}
				*/
				}else{
					min_heap_insertar(min_heap,&min_heap_len,pajaro_b);/*min*/
					max_heap_insertar(max_heap,&max_heap_len,pajaro_a);/*max*/
				}
			}else{
				if(pajaro_a>referencia){
					min_heap_insertar(min_heap,&min_heap_len,pajaro_a);/*min*/
					max_heap_insertar(max_heap,&max_heap_len,pajaro_b);/*max*/
				}else{
					max_heap_insertar(max_heap,&max_heap_len,pajaro_a);/*max*/
					max_heap_insertar(max_heap,&max_heap_len,pajaro_b);/*max*/
					min_heap_insertar(min_heap,&min_heap_len,referencia);/*min*/
					referencia = max_heap_extraer(max_heap,&max_heap_len);/*max*/
				/*				
				printf("Estado de los heaps\n");
				printf("MAX\n");
				for(i=0;i<max_heap_len;i++){
					printf(":%d:\n",max_heap[i]);
				}
				printf("MIN\n");
				for(i=0;i<min_heap_len;i++){
					printf(":%d:\n",min_heap[i]);
				}
				*/
				}
			}
			if(i<(n_parejas-1)){
				printf("%d ",referencia);
			}else{
				printf("%d\n",referencia);
			}
		}
		
	}
	return 0;
}
