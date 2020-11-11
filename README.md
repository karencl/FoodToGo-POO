# Avance 1 - IMPORTANTE LEER
En este avance, cree 4 clases (dos de ellas son subclases de una), con sus respectivos métodos y atributos.
Así mismo, se crearon varios objetos en el "main" y se hace uso de estos a lo largo del programa.
En este avance también incluí herencias y polimorfismo.

-¿Qué se va a implementar para el próximo avance?

Como se puede ver, hay código que se repite bastante. Por ello, para el próximo avance, haré diversas funciones para   solucionar esto y una reestructura del código para tenerlo más ordenado y facilitar su lectura.


# Proyecto para la materia: pensamiento computacional orientado a objetos
Este trabajo es parte del proyecto para la materia "Pensamiento computacional orientado a objetos".

En este, se trabajarán conceptos nuevos de programación, utilizando c++ y se pondrán en práctica, con el fin de entender que es la programación orientada a objetos, el funcionamiento de esto y su utilidad.

# FoodToGo
Mi proyecto se llama "Food to go".

Este proyecto se llevará a cabo con el fin de resolver parte de una problemática que enfrentamos hoy en día. Esta es: la pandemia del covid-19.
Como sabemos, se requiere que la gente guarde distancia y confinamiento. Sin embargo, una de las cosas que más ha tomado popularidad durante la pandemia, ha sido el pedir cosas o comida en línea. Y cuando esto no es posible, la gente sale a comprar las cosas, poniendo en riesgo su salud y la de los demás.

Esta aplicación tiene como propósito, poner a la disposición de la gente una nueva opción de pedir alimentos en línea, con la finalidad de evitar una salida más y por ende, más contagios.
Para ello, se utilizarán varias clases para los usuarios y productos, junto sus respectivos atributos y métodos. Lo cual facilitará la construcción y funcionamiento de la misma. Finalmente, se buscará agregar la opción de archivos de tipo .txt, para una mejor experiencia del todo usuario que prueba la aplicación mientras está en desarrollo.

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
