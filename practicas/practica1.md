## Objetivo
Crear dos llamadas a sistema con su respectivo comandos para apagar y reiniciar.

## Herramientas 
* make
* gcc
* git

## Conceptos
1) Llamadas a sustema
  + Se usan para acceder a hw.
  + Desde el comando son una interrupción.
  + Desde el kernel utilizan el codigo del hw especifico.

2) Modo Kernel
  + Es el bit para acceder al hw.
  + Se prende cuando se ejecuta el kernel.

3) Interrupciones
  + Como el hw interactua con el cpu.

4) Interrupciones via software (trap)
  + Software comunicar con el kernel, SOFTWARE -> CPU -> KERNEL
  
## Que Aprendí

Aprendi a crear archivos de aplicacion los cuales en este caso nos permitieron crear las llamadas de usario que interactuan directamente con el kernel para que el sistema operativo en este caso pudiera reiniciar y apagar el s.o. que estamos usando. 

Además de el orden en el que el se ejecuta una aplicacion y como agregarlas al sistema.

## Url del Commit

https://github.com/AndresSV/so-gp1/commit/3b9489b46a7c42675877914bd0914775890d266f

