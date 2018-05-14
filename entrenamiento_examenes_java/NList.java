/*
Lista con un iterador que imprime los numeros impares en orden natural y los numeros pares al reves, alternandolos.
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
public class NList extends LinkedList<Integer>{
	public NList(Collection<? extends Integer> c){
		super(c);
	}
	public Iterator<Integer> iterator(){
		return new NIterator(this);
	}
	public static void main(String...args){
		NList hola = new NList(Arrays.asList(1,2,3,4,5,6,7,8,9,10));
		System.out.print(hola);
	}
}
