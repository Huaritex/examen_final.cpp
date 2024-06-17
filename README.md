
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

Se utiliza actualmente para almacenar futuros eventos junto con el nombre y fecha del evento, para tener todos los eventos ordenados o incluso la posibilidad de eliminar algun evento erroneo.

> [!NOTE]
 Comparativa con diferentes SQL mas populares de C++

### Oracle

Oracle es uno de los sistemas de gestión de bases de datos (SGBD) más antiguos y es conocido por su robustez y escalabilidad. Es ampliamente utilizado en entornos empresariales grandes.

- Alto rendimiento y disponibilidad.

- Amplias capacidades de recuperacion ante desastres.

- Soporte para SQL y PL/SQL.

- Gran cantidad de herramientas de administracion.

  *Usada en empresas grandes, sistemas financieros, ERP.*

### Microsoft SQL server

Es un SGBD desarrollado por Microsoft, conocido por su integración con otros productos de Microsoft como Azure y Power BI.

- Integracion nativa con aplicaciones Microsoft.

- Funcionalidades de analisis y reportes avanzados.

- Soporte para T-SQL.

- Escalabilidad y Seguridad

  *Usada oara aplicaciones empresariales, BI, analisis de datos*

### MySQL

Es uno de los motores de bases de datos más populares para aplicaciones web, conocido por su velocidad y fiabilidad.

- Codigo abierto y gratuito.

- Amplio soporte comunatario.

- Compatible con una variedad de lenguajes de programacion.

- Escalabilidad adecuada para aplicaciones web.

  *Usada para aplicaciones web, CMS como WordPress, Drupal, Joomia.*
### SQlite

Es una base de datos embebida en programas, utilizada principalmente en aplicaciones móviles y de escritorio.

- Ligera y de facil implementacion.

- No requiere un servidor separado.

- Buena para aplicaciones de baja a moderada complejidad.

  *Usada para aplicaciones moviles, aplicaciones de escritorio, dispositivos loT.*

### MariaDB

Fork de MySQL desarrollado después de la adquisición de MySQL por Oracle, mantiene compatibilidad con MySQL.

- Codigo abierto y gratuito

- Mejoras en rendimiento y caracteristicas adicionales respecto a MySQL.

- Soporte para motores de almacenamiento adicionales.

  *Usada para aplicaciones web, sustitucion de My SQL en proyectos existentes.*

### PostgreSQL

Es un SGBD objeto-relacional conocido por su robustez y extensibilidad.

- Codigo abierto y gratuito

- Soporte para funciones avanzadas como JSON, XML y busqueda de texto completo.

- Capacidades avanzadas de transacciones y replicacion.

  *Usada para aplicaciones empresariales, analisis de datos, aplicaciones geoespaciales*

### COMPARATIVA Y JUSTIFICACION PARA IMPLEMENTACION ###
![image](https://github.com/Huaritex/examen_final.cpp/assets/159574524/96143b16-44c9-4340-82e7-6f3793a6f31b)

- Oracle y MS SQL Server 

Son ideales para grandes empresas que necesitan bases de datos robustas y escalables con soporte empresarial.

- My SQL y MariaDB

Son opciones excelentes para aplicaciones web y startups que necesitan bases de datos rápidas y escalables con costos reducidos.

- SQlite

Es adecuado para aplicaciones móviles y de escritorio que requieren una base de datos embebida ligera.

- PostgreSQL

Es ideal para aplicaciones que requieren capacidades avanzadas de análisis y almacenamiento de datos complejos.

> [!CAUTION]
 Base de datos "Eventos"

 la base de datos *Eventos* se justifica a su bajo costo a comparacion de los SQL y tambien al ser codigo abierto y su amplia flexibilidad para poder implementarse a otros servidores gracias a que es un codigo modulado y con opcion a mejorar de manera ordenada y eficiente, si bien es un SQL bastante simple, lo compensa su compatibilidad y diversidad a la hora de modificar.

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

![image](https://github.com/Huaritex/examen_final.cpp/assets/159574524/efe807c3-064a-41fa-b1e2-f994c8c33863)


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


 






