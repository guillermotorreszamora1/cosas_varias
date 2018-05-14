/*
Iterador que imprime los numeros impares en orden natural y los numeros pares al reves, alternandolos.
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
public class NIterator implements Iterator<Integer>{
	private int i;
	private int j;
	private boolean oscilador;
	private List<Integer> lista;
	public NIterator(List<Integer> lista){
		this.lista = lista;
		i=0;
		j=lista.size()-1;
		oscilador=true;
	}
	public Integer next(){
		if(hasNext()==false){
			throw new UnsupportedOperationException();
		}
		if(oscilador==true){
			while(true){
				if(lista.get(i)%2==1){
					oscilador=false;
					return lista.get(i++);
				}else{
					i++;
				}
			}
		}else{
			while(true){
				if(lista.get(j)%2==0){
					oscilador=true;
					return lista.get(j--);
				}else{
					j--;
				}
			}
		}
	}
	public boolean hasNext(){
		int iS=i;
		int jS=j;
		if(oscilador==true){
			while(true){
				if(iS>=lista.size()){
					return false;
				}
				if(lista.get(iS)%2==1){
					return true;
				}else{
					iS++;
				}
			}
		}else{
			while(true){
				if(jS<0){
					return false;
				}
				if(lista.get(jS)%2==0){
					return true;
				}else{
					jS--;
				}
			}
		}
	}
	public void remove(){
		throw new UnsupportedOperationException();
	}
}
