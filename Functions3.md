# Práctica 09. Funciones. Paso de parámetros. Parámetros en línea de comandos.

### Objetivos
Los objetivos de esta práctica son que el alumnado:
* Desarrolle programas sencillos en C++ que utilicen funciones y todos los tipos de sentencias estudiadas

### Rúbrica de evaluacion de esta práctica
Se señalan a continuación los aspectos más relevantes (la lista no es exhaustiva)
que se tendrán en cuenta a la hora de evaluar esta práctica:
* El alumnado ha de acreditar conocer los conceptos expuestos en el material de referencia de esta práctica.
* El alumnado ha de acreditar que ha realizado todos los ejercicios propuestos, así como ser capaz de desarrollar otros similares.
* Ha de acreditar que es capaz de escribir un fichero Makefile para automatizar el proceso de compilación de sus programas.
* El código que escriba ha de estar escrito de acuerdo a los estándares definidos en la Guía de Estilo de Google para C++.
* Todos los identificadores que utilice en su programa (constantes, variables, etc.) deberán ser
  siempre significativos. No utilice nunca identificadores de una única letra, tal vez con la excepción de las
  variables que utilice para iterar en un bucle.
* Antes de su ejecución, todos los programas que desarrolle, deben imprimir en pantalla un
  mensaje indicando la finalidad del programa así como la información que precisará del usuario para su correcta ejecución.

### Trabajo previo: clonar un repositorio git 
Para la realización de esta práctica recibirá una invitación de GitHub Classroom (una plataforma relacionada
con GitHub) para una *tarea* que deberá aceptar.
Una vez acepte la invitación de la tarea, tendrá que clonar (`git clone`) tal como se explicaba en la práctica anterior el
repositorio asociado a la tarea. 
Ese repositorio copiado será el punto de partida (tendrá que añadir en él sus programas)
para su repositorio privado asociado con el desarrollo de esta práctica.

En la entrega de esta práctica, en lugar de subir al aula virtual un fichero `.tar.gz` conteniendo el código
del trabajo realizado, deberá subir el enlace a su repositorio.

En el repositorio que clone tendrá un directorio `fibonacci_sum` que contiene la solución a uno de los
problemas de las hojas de ejercicios de la asignatura.
Esa solución puede servirle de guía:
* Para crear sus propios ficheros Makefile para cada uno de los ejercicios.
* Para saber cómo separar sus ficheros de código en ficheros de cabecera (`*.h` y de código `*.cc`).
* Para estudiar el funcionamiento de la captura de parámetros pasados por línea de comandos a sus programas.

### Ejercicios 
Al realizar los siguientes ejercicios cree dentro de su repositorio de esta práctica un directorio diferente
para cada uno de los ejercicios.
Ponga a cada uno de esos directorios nombres significativos.
Haga que cada uno de sus programas conste de 3 ficheros:
* Un fichero `mi_programa.cc` (programa principal) que contendrá la función `main` e incluirá el fichero de cabecera `funciones.h`
* El fichero `funciones.h` que contendrá las declaraciones de las diferentes funciones que se utilizan en el
  programa principal para resolver el ejercicio en cuestión.
* El fichero `funciones.cc` que contendrá el código (definiciones) de las funciones declaradas en el fichero
  de cabecera.

Modifique los nombres de los ficheros que aquí se proponen para adaptarlos al ejercicio en cuestión.

La compilación de los programas correspondientes a cada ejercicio se automatizará con un fichero Makefile para
cada ejercicio.

Desarrolle cada uno de estos ejercicios de forma incremental, probando cada una de las funciones que va Ud.
desarrollando. Utilice el depurador de VSC para corregir cualquier tipo de error semántico que se produzca en
cualquiera de sus desarrollos.

1. Escriba un programa `find_first_of.cc' que dada una cadena y un carácter, determine la primera posición 
   de la cadena en la que se encuentra ese carácter, en caso de que se encuentre. 
	 Si el carácter no se encuentra, el programa imprimirá -1. 
	 Se considerará que la primera posición de la cadena (la correspondiente al primer carácter de la misma) es la cero:
```
$ ./find_first_of abracadabra r
2

$ ./find_first_of AlbertEinstein Z
-1
```

2. Un [primo de Mersenne](https://es.wikipedia.org/wiki/N%C3%BAmero_primo_de_Mersenne) es un número primo de la 
   forma 2<sup>p</sup> - 1. 
	 Una propiedad conocida de de los primos de Mersenne es que `p` debe ser también un número primo.
   Desarrolle un programa `mersenne.cc` que tome por línea de comandos un número `N` y muestre 
	 como salida los primeros `N` primos de Mersenne.
```
$ ./mersenne 5
3
7
31
127
8191
```

Haga que si su programa se ejecuta sin pasar ningún parámetro por la línea de comandos, el programa finalice
su ejecución imprimiendo en pantalla un mensaje explicativo de su funcionamiento:
```
$ ./mersenne
$ mersenne: falta un número natural como parámetro
Pruebe 'mersenne --help' para más información.
```
si el usuario pasa como único parámetro la opción `--help`, el programa finalizará su ejecución e imprimirá
por pantalla un texto explicativo de su finalidad y comportamiento.

3. Un número de Armstrong es un número que es la suma de sus propios dígitos, 
   cada uno de los cuales elevado al número de dígitos del número. 
	 Por ejemplo:
   * 9 es un número de Armstrong porque: 9 = 9<sup>1</sup> = 9
   * 10 no es un número de Armstrong porque: 10 != 1<sup>2</sup> + 0<sup>2</sup> = 1
   * 153 es un número de Armstrong porque: 153 = 1<sup>3</sup> + 5<sup>3</sup> + 3<sup>3</sup> = 1 + 125 + 27 = 153
   * 154 no es un número de Armstrong porque: 154 != 1<sup>3</sup> + 5<sup>3</sup> + 4<sup>3</sup> = 1 + 125 + 64 = 190

   Desarrolle un programa en C++ que tome como parámetro por línea de comandos un 
	 número e indique si se trata de un número de Armstrong o no.
```
$ ./armstrong 9
9 is an Armstrong number

$ ./armstrong 154
154 is not an Armstrong number
```

4.- Desarrolle un programa `vector_statistics.cc` que tome como parámetro por línea de comandos un tres
números naturales `N`, `M`, `P`, y cree un vector de `N` componentes de tipo `double` cuyos valores hayan sido generados
aleatoriamente en el rango `[M, P]`.
El programa dispondrá de funciones que calculen:
* La suma 
* El producto
* El máximo
* El mínimo
* La media
de los valores almacenados en el vector.

5.- El directorio `bugs` de que hallará en el repositorio que ha clonado contiene varios programas que son la
solución a algunos de los problemas de la Hoja 2 publicada en el aula virtual de la asignatura.
Estos programas contienen algún tipo de error.

Utilice el depurador integrado de VSC para depurar estos programas de modo que funcionen correctamente.


### Referencias
* [git - the simple guide](https://rogerdudler.github.io/git-guide/)
* [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
