#Solution for the problem 324 of uva.onlinejudge.org
#    Copyright (C) 2018 Guillermo Torres Zamora
#    This program is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#    You should have received a copy of the GNU General Public License
#    along with this program.  If not, see <http://www.gnu.org/licenses/>.

while( True ):
	numero = int(input())
	if numero == 0:
		exit()
	resultado = 1;
	for i in range(1,numero+1):
		resultado = resultado*i;
	resultado = str(resultado)
	print(str(numero)+"! --")
	respuesta = "";
	pad1 = " "
	pad2 = pad1 + pad1
	pad3 = pad2 + pad1
	pad4 = pad3 + pad1

	respuesta += pad3 + "(" + str(0) + ")";
	dato = str(resultado.count(str(0)))
	if len(dato)==1 :
		respuesta += pad4
	if len(dato)==2 :
		respuesta += pad3
	if len(dato)==3 :
		respuesta += pad2
	respuesta += dato
	for i in range (1,5):
		respuesta += pad4 + "(" + str(i) + ")";
		dato = str(resultado.count(str(i)))
		if len(dato)==1 :
			respuesta += pad4
		if len(dato)==2 :
			respuesta += pad3
		if len(dato)==3 :
			respuesta += pad2
		respuesta += dato
	respuesta += "\n"

	respuesta += pad3 + "(" + str(5) + ")";
	dato = str(resultado.count(str(5)))
	if len(dato)==1 :
		respuesta += pad4
	if len(dato)==2 :
		respuesta += pad3
	if len(dato)==3 :
		respuesta += pad2
	respuesta += dato

	for i in range (6,10):
		respuesta += pad4 + "(" + str(i) + ")";
		dato = str(resultado.count(str(i)))
		if len(dato)==1 :
			respuesta += pad4
		if len(dato)==2 :
			respuesta += pad3
		if len(dato)==3 :
			respuesta += pad2
		respuesta += dato
	print(respuesta)


	#			print("("+str(i)+")\t"+str( resultado.count( str(i) ) ))





#257! --
#   (0)  120    (1)   44    (2)   43    (3)   45    (4)   42
#   (5)   42    (6)   40    (7)   42    (8)   52    (9)   40