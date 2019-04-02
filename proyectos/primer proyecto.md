# Primer Proyecto

## Primera parte: 
### Objetivo:

Modifica el kernel de xv6 para que imprima cada vez que una llamada a sistema se emplee se imprima una línea con el nombre de la llamada a sistema y su número.

Al terminar observa las llamadas al sistema que ocurren cuando arranca el sistema. Explica lo que pasa.

** Pistas: **

Modificar la función syscall() en syscall.c para antes de ejecutar la función imprimir, tener un arreglo con los nombres de las funciones.

## Segunda parte, Llamada a sistema Date: 
### Objetivo:

Agregar otra llamada a sistema (date) a xv6 que consulte el reloj de la computadora y devuelva el tiempo en formato UTC.

Desde el punto de vista del usuario la función sería:

date(struct rtcdate *r);

** Pistas: **

Utilizar la función cmostime() (definida en lapic.c) para obtener el valor de la hora actual. En el archivo date.h está definida la estructura usada por esa función.

## Herramientas:
* gcc -> compilador
* qemu -> maquina virtual
* make -> automatizaciones

## Conceptos:
Un programa esta compuesto de un codigo fuente.
Un sistema operativo esta compuesto de un kernel y de aplicaciones del sistema.

## Que aprendi:

## Link del commit
