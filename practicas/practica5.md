# Objetivo 
Hacer un spike sobre hilos, semaforos y locks.
#Herramientas
* git
* gcc

 # Conceptos:
* Hilos
  * Es un proceso ligero que solo consta de un stack. Y el codigo y el heap los comparte con el proceso principal.
  * Pueden ejecutar funciones diferentes.

 * Semaforos:
  * Es una variable global.
  * Soporta dos operaciones.
    ** Incrementar (sem_post) siempre incrementa en uno.
    ** Decrementar (sem_wait) si el valor del semaforo es mayor que 0 decremente si es igual a 0.
  * Controlar acceso a recursos.
* Lock:
  * Es una variable global.
  * Soporta dos operaciones.
    ** lock (bloqueo) adquirir el lock. Si el lock ya está tomado el hilo/proceso se suspende.
    ** unlock (desbloqueo) liberar el lock.
  * Secciones criticas.


 # ¿Qué aprendí?

 # URL del commit.

