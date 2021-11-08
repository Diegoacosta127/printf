La idea sería básciamente esta:

1. A vos te dan un string de una forma determinada, ese stringtiene adentro un % y después un format. Que en este caso puede ser c, s, d, i o %. Por ejemplo: "Imprimí un char: %c"


2. Después, en la función que declaramos nosotros, tenés que caminarla para ir chequeando:
	a: si es nulla
	b: si tiene algo sin %
	c: si tiene % y % 
	d: si tiene % y espacio o null.

3. Mientras caminas, si encontras un % y un format de los que nos sirven a nosotros, llamamos una función que nos diga que si es tal letra (c, s, d, i), a cuál función tenemos que llamar. Porque tenemos que declar además, un tipo de funcion para cada tipo de impresión. 

4. A esa función específica que declaramos para imprimir cada tipo de dato, le tenemos que pasar efectívamente el dato que tiene que imprimir, que a su vez, va a ser uno de los va_arg? de la función variádica original. 

5. Al final de todo, hay que imprimir también el largo de lo que imprimiste, asi que hay que meter algún contador por ahí?


6. De alguna manera hay que usar un struct, que declaramos en el archivo "main.h.
Ese struct, tiene adentro, un char y un puntero a una función que toma como argumento, el va_list o el va_arg? de la foo variádica. 

7. Después en algún otro lado, inicializas el struct que adentro tiene un array.  Ese array tiene dos elementos. Por un lado tiene el char que buscamos y por otro tiene la función que corresponde con ese char.
