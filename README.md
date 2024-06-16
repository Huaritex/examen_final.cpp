
> [!IMPORTANT]
> El problema     

Eres un desarrollador C++ en una empresa y se te ha solicitado crear un modelo de base de
datos simple.
  
Pero antes te piden investigar sobre todas las bases de datos existentes y
hacer una comparativa para justificar esta implementacion.

Entonces, primero se debe realizar dicha comparativa estudiar las existentes y escribir una
justificacion del desarrollo de un nuevo manejador de base de datos.

Luego, es necesario analizar el problema y escribir un programa en C++ que implemente el
trabajo con una base de datos simple (abreviado «BD»).

El programa se comunicará con el usuario a través de la entrada y salida estándar (flujos stdin y stdout).

Almacenaremos en nuestra BD pares del tipo: fecha, evento. Definiremos la fecha como una
cadena en el formato Año-Mes-Día, donde Año, Mes y Día son números enteros.

Definiremos el evento como una cadena de caracteres imprimibles arbitrarios sin
separadores dentro (espacios, tabulaciones, etc.). Un evento no puede ser una cadena vacía.
En una misma fecha pueden ocurrir muchos eventos diferentes, la BD debe ser capaz de
almacenarlos todos.

> [!NOTE]
Explicacion de base de datos existente

  Se utiliza actualmente para almacenar fecha de eventos junto con el nombre y fecha del evento 

  > [!TIP]
Estructura de repositorio

El repositorio viene conformado por una serie de modulacion que consiste en tres partes:

-la funcion.h que viene a ser el header

-cuerpo.cpp que viene a ser el cuerpo de la funcion

-llamada.coo que viene a ser la llamada a la funcion

-El a.exe que es el ejecutable para poder compilar el codigo


> [!IMPORTANT]
Descripcion de las funciones, estructuras


- bool date_valid(const string& date)

  La funcion de encarga de validar la informacion que recibe desde la entrada mediante verdadero o falso gracias a la variable bool

- void add(const string& date, const string& event)

  La funcion nos ayuda a poder añadir el dato introducido por la entrada y una vez pasado por la funcion bool date_valid(const string& date) poder guardar esa informacion que un map<vector>

- void delete_specific(const string& date, const string& event)

  La funcion nos permite borrar un evento en especifico que este guardado en el map<vector>, tiene que venir de la mano con la fecha del evento y el nombre del evento en especifico.

- void delete_all(const string& date)

  La funcion nos permite borrar todo los eventos guardados en el map<vector>.

- void find(const string& date)

  La funcion nos permite buscar el evento dentro de la base de datos map<vector> introduciendo la fecha y el nombre del evento.

- void print()

  La funcion nos permite imprimir todos los eventos ingresados en la base de datos map<vector> ya sea si hay o no hay eventos guardados.

- void show_menu()

  La funcion muestra al usuario un menu con todos los comandos para que el usuario pueda interactuar con la base de datos.

> [!TIP]
Diagrama de flujo


> [!WARNING]
Creditos/Personas que contribuyeron al proyecto

Estudiante: Sebastian Guarachi Aguilar

> [!IMPORTANT] 
Herramientas Utilizadas

- Youtube

- ChatGpt

- DevDocs

- Visual Studio Code

- Draw.io

- Copilot 

- Elicit.ia

- Reddit

- Yahoo 


 






