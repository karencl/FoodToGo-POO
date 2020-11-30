# Avance 3 - IMPORTANTE LEER - abajo de esto están las correcciones :)
Reestructuré un poco el código, hice algunas correcciones y agregué los comentarios de manera correcta.

*LA CONTRASEÑA DEL ADMIN1 ES: 1234

# Correcciones

Para este programa, se hicieron las siguientes correcciones:

1. Se modificó el código para seguir con las normas y estándares de c++, ya que en mi documento de excel, se me marcó esto como una competencia faltante 

2. Se revisaron los getters y setters. Se corrigieron los parámetros que se les pasaban.

3. Se eliminaron los archivos de cada clase y se crearon solo tres (Tienda.hpp, Producto.hpp y Persona.hpp), con el fin de tener más orden y facilidad de revisar el código

4. Se agregaorn mis datos al programa y al diagrama UML

5. Se agregaron comentarios de forma correcta 

# Proyecto para la materia: pensamiento computacional orientado a objetos
Este trabajo es parte del proyecto para la materia "Pensamiento computacional orientado a objetos".

En este, se trabajarán conceptos nuevos de programación, utilizando c++ y se pondrán en práctica, con el fin de entender que es la programación orientada a objetos, el funcionamiento de esto y su utilidad.

# FoodToGo
Mi proyecto se llama "Food to go".

Este proyecto se llevará a cabo con el fin de resolver parte de una problemática que enfrentamos hoy en día. Esta es: la pandemia del covid-19.
Como sabemos, se requiere que la gente guarde distancia y confinamiento. Sin embargo, una de las cosas que más ha tomado popularidad durante la pandemia, ha sido el pedir cosas o comida en línea. Y cuando esto no es posible, la gente sale a comprar las cosas, poniendo en riesgo su salud y la de los demás.

Esta aplicación tiene como propósito, poner a la disposición de la gente una nueva opción de pedir alimentos en línea, con la finalidad de evitar una salida más y por ende, más contagios.
Para ello, se utilizarán varias clases para los usuarios y productos, junto sus respectivos atributos y métodos. Lo cual facilitará la construcción y funcionamiento de la misma.

# Funcionalidad del programa

- Iniciar desde el panel de administrador (tiene libertad de eliminar, agregar y ver a los usuarios y productos)

- Ingresar o registrarse como usuario (Permite checar perfil, ver a los demás usuarios, ver los productos disponibles y hacer compras)

- Indicar saldo en la cuenta para facilitar compras

- Realizar compras (en modo usuario)


# Ejemplo de un alogritmo del programa

Un "Switch, case" para ver si se quiere ingresar como usuario o administrador.

DESPUÉS DE HABER INGRESADO LOS DATOS DEL USUARIO (en caso de haber ingresado como tal)...

-Definir la opción temporal para entrar el ciclo (ejemplo: op = 1)

   1. Ciclo para el menú (while) --> (while (op != 0){})
   
   2. Opciones a elegir
      pedir al usuario la opción deseada (cin>>)
      
   3. Casos para cada opción (ver perfil/ ver productos/ ver a otros usuarios/ hacer compra) - condicionales (if/elif/else) --> (ejemplo:       else if (op == 1){}) 
   
   3.1 Código para cada opción
   
   4. Salir del ciclo (solo cuando "op" sea 0, por ejemplo)

CONTINUAR CON LO DEMÁS DEL CÓDIGO
