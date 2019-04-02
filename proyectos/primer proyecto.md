# Primer Proyecto

## Primera parte: 
### Objetivo:

Modifica el kernel de xv6 para que imprima cada vez que una llamada a sistema se emplee se imprima una línea con el nombre de la llamada a sistema y su número.

Al terminar observa las llamadas al sistema que ocurren cuando arranca el sistema. Explica lo que pasa. El sistema oerativo al arrancar utiliza las mismas llamadas a sistema para escribir el mensaje de bienvenida, arranca procesos, mata procesos, crea copias de si mismo autoriza la escritura o remueve los permisos de escritura.

**Pistas:**

Modificar la función syscall() en syscall.c para antes de ejecutar la función imprimir, tener un arreglo con los nombres de las funciones.

## Segunda parte, Llamada a sistema Date: 
### Objetivo:

Agregar otra llamada a sistema (date) a xv6 que consulte el reloj de la computadora y devuelva el tiempo en formato UTC.

Desde el punto de vista del usuario la función sería:

date(struct rtcdate *r);

**Pistas:**

Utilizar la función cmostime() (definida en lapic.c) para obtener el valor de la hora actual. En el archivo date.h está definida la estructura usada por esa función.

## Herramientas:
* gcc -> compilador
* qemu -> maquina virtual
* make -> automatizaciones

## Conceptos:
Un programa esta compuesto de un codigo fuente.
Un sistema operativo esta compuesto de un kernel y de aplicaciones del sistema.
Llamadas a sistema
Creacion de aplicaciones accesibles por el usuario

## Que aprendi:

A leer código ya escrito previamente y a continuar con el estilo de programación, así como a guiarme con la documentación proporcionada del S.O. xv6 así como la diferencia entre aplicaciones que se ejecutan a nivel local pero tienen acceso los drivers de la computadora.

## Link del commit

* Parte 1: https://github.com/AndresSV/so-gp1/commit/29d17fbf226bc71a339f4216f1f12fa309a06029
* Parte 2: https://github.com/AndresSV/so-gp1/commit/6374e5efb4a8b09317768a7f816dfcb0d78ff564
