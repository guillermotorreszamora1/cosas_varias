/*
Iterador que imprime primero los numeros impares en orden natural y luego los numeros pares al reves
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
import java.util.*;
public class AIterator implements Iterator<Integer>{
	private int i;
	private List<Integer> lista;
	private boolean avance;
	public AIterator(List<Integer> lista){
		this.lista = lista;
		i=0;
		avance=true;
	}
	public Integer next(){
		if(hasNext()==false){
			throw new NoSuchElementException();
		}
		while(true){
			if(avance==true){
				if(lista.size()<=i){
					avance=false;
					i = lista.size()-1;
					continue;
				}
				if(lista.get(i)%2==1){
					return lista.get(i++);
				}else{
					i++;
				}
			}else{
				if(i>=lista.size()){
					i--;
					continue;
				}
				if(lista.get(i)%2==0){
					return lista.get(i--);
				}else{
					i--;
				}
			}
		}
	}
	public boolean hasNext(){
		int j=i;
		boolean avanceS;
		avanceS = avance;
		if(avanceS==false&&i==0){
			return false;
		}else{
			j++;
			while(true){
				if(avanceS==true){
					if(lista.size()<=j){
						avanceS=false;
						j = lista.size()-1;
						continue;
					}
					if(lista.get(j)%2==1){
						return true;
					}else{
						j++;
					}
				}else{
					if(j>=lista.size()){
						j--;
						continue;
					}
					if(j==-1){
						return false;
					}
					if(lista.get(j)%2==0){
						return true;
					}else{
						j--;
					}
				}
			}
		}
	}
	public void remove(){
		throw new UnsupportedOperationException();
	}
}
