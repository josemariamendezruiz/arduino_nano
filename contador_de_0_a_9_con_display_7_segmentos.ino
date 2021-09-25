/*
    SENCILLO CONTADOR DE 0 A 9 CON DISPLAY DE 7 SEGMENTOS
    AUTOR : JOSE MARIA MENDEZ RUIZ

    CODIGO LIBRE PARA UTILIZAR COMO QUIERAS
*/
  // DECLARAMOS LAS VARIABLES QUE INDICAN LOS PINES QUE VAMOS A UTILIZAR
  int pin_a =  2;           // Para el pin que controlará el segmento a el display
  int pin_b =  3;           // Para el pin que controlará el segmento b el display
  int pin_c =  4;           // Para el pin que controlará el segmento c el display
  int pin_d =  5;           // Para el pin que controlará el segmento d el display
  int pin_e =  6;           // Para el pin que controlará el segmento e el display
  int pin_f =  7;           // Para el pin que controlará el segmento f el display
  int pin_g =  8;           // Para el pin que controlará el segmento g el display
  
  int esperar = 1000;      // Para indicar cuanto tiempo para el contador
  int contador = 0;        // Para el contador
void setup() {
  
  // Declaramos los pines que vamos a utilizar y el tipo que van a tener dichos pines
  pinMode(pin_a, OUTPUT);      // Para declarar el tipo de pin para el segmento a del display
  pinMode(pin_b, OUTPUT);      // Para declarar el tipo de pin para el segmento b del display
  pinMode(pin_c, OUTPUT);      // Para declarar el tipo de pin para el segmento c del display
  pinMode(pin_d, OUTPUT);      // Para declarar el tipo de pin para el segmento d del display
  pinMode(pin_e, OUTPUT);      // Para declarar el tipo de pin para el segmento e del display
  pinMode(pin_f, OUTPUT);      // Para declarar el tipo de pin para el segmento f del display
  pinMode(pin_g, OUTPUT);      // Para declarar el tipo de pin para el segmento g del display

  apagar_display();
  
}

void loop() {
  
   if (contador == 0 ) { // cuando contador es 0 llamamos a la funcion ver_cero
    ver_cero();
    delay(esperar);      // esperamos el tiempo indicado
    apagar_display();  // llamamos a la funcion apagar display para el siguiente numero
   }
   if (contador == 1 ) { // cuando contador es 1 llamamos a la funcion ver_uno
    ver_uno();
    delay(esperar);      // esperamos el tiempo indicado
    apagar_display();  // llamamos a la funcion apagar display para el siguiente numero
   }
   if (contador == 2 ) { // cuando contador es 2 llamamos a la funcion ver_dos
    ver_dos();
    delay(esperar);      // esperamos el tiempo indicado
    apagar_display();    // llamamos a la funcion apagar display para el siguiente numero
   }
   if (contador == 3 ) { // cuando contador es 3 llamamos a la funcion ver_tres
    ver_tres();
    delay(esperar);      // esperamos el tiempo indicado
    apagar_display();  // llamamos a la funcion apagar display para el siguiente numero
   }
   if (contador == 4 ) { // cuando contador es 4 llamamos a la funcion ver_cuatro
    ver_cuatro();
    delay(esperar);      // esperamos el tiempo indicado
    apagar_display();  // llamamos a la funcion apagar display para el siguiente numero
   }
   if (contador == 5 ) { // cuando contador es 5 llamamos a la funcion ver_cinco
    ver_cinco();
    delay(esperar);      // esperamos el tiempo indicado
    apagar_display();  // llamamos a la funcion apagar display para el siguiente numero
   }
   if (contador == 6 ) { // cuando contador es 6 llamamos a la funcion ver_seis
    ver_seis();
    delay(esperar);      // esperamos el tiempo indicado
    apagar_display();  // llamamos a la funcion apagar display para el siguiente numero
   }
   if (contador == 7 ) { // cuando contador es 7 llamamos a la funcion ver_siete
    ver_siete();
    delay(esperar);      // esperamos el tiempo indicado
    apagar_display();  // llamamos a la funcion apagar display para el siguiente numero
   }
   if (contador == 8 ) { // cuando contador es 8 llamamos a la funcion ver_ocho
    ver_ocho();
    delay(esperar);      // esperamos el tiempo indicado
    apagar_display();  // llamamos a la funcion apagar display para el siguiente numero
   }
   if (contador == 9 ) { // cuando contador es 9 llamamos a la funcion ver_nueve
    ver_nueve();
    delay(esperar);      // esperamos el tiempo indicado
    apagar_display();  // llamamos a la funcion apagar display para el siguiente numero
   }

   contador++;  // contamos aumentando el valor de la variable contador
   if (contador == 10 ) { // cuando la variable llega a 10 empieza de nuevo desde 0
    contador = 0;   
   }
   
}

 // *************** ESTA FUNCION ES PARA PONER A LOW TODO LOS PINES QUE CONTROLAN LOS SEGMENTOS DEL DISPLAY **************
void apagar_display(){
    digitalWrite(pin_a,LOW);       //apagamos las salida para inicializar el display
    digitalWrite(pin_b,LOW);       //apagamos las salida para inicializar el display
    digitalWrite(pin_c,LOW);       //apagamos las salida para inicializar el display
    digitalWrite(pin_d,LOW);       //apagamos las salida para inicializar el display
    digitalWrite(pin_e,LOW);       //apagamos las salida para inicializar el display
    digitalWrite(pin_f,LOW);       //apagamos las salida para inicializar el display
    digitalWrite(pin_g,LOW);       //apagamos las salida para inicializar el display
    
}


 // *************** ESTA FUNCION ES PARA PONER EL 0 EN EL DISPLAY                                   **************
 // *************** COMO YA VIMOS EN EL DIAGRAMA DEL DISPLAY EL 0 SON LOS SEGMENTOS A,B,C,D,E y F   **************
void ver_cero(){
   digitalWrite(pin_a,HIGH);    // encendemos el segmento a
   digitalWrite(pin_b,HIGH);    // encendemos el segmento b
   digitalWrite(pin_c,HIGH);    // encendemos el segmento c
   digitalWrite(pin_d,HIGH);    // encendemos el segmento d   
   digitalWrite(pin_e,HIGH);    // encendemos el segmento e  
   digitalWrite(pin_f,HIGH);    // encendemos el segmento f   
}

 // *************** ESTA FUNCION ES PARA PONER EL 1 EN EL DISPLAY                          **************
 // *************** COMO YA VIMOS EN EL DIAGRAMA DEL DISPLAY EL 2 SON LOS SEGMENTOS B y C  **************
void ver_uno(){
   digitalWrite(pin_b,HIGH);    // encendemos el segmento b
   digitalWrite(pin_c,HIGH);    // encendemos el segmento c
}

 // *************** ESTA FUNCION ES PARA PONER EL 2 EN EL DISPLAY                                 **************
 // *************** COMO YA VIMOS EN EL DIAGRAMA DEL DISPLAY EL 2 SON LOS SEGMENTOS A, B,D,E y G  **************
void ver_dos(){
   digitalWrite(pin_a,HIGH);    // encendemos el segmento a
   digitalWrite(pin_b,HIGH);    // encendemos el segmento b
   digitalWrite(pin_d,HIGH);    // encendemos el segmento d
   digitalWrite(pin_e,HIGH);    // encendemos el segmento e
   digitalWrite(pin_g,HIGH);    // encendemos el segmento g
}

 // *************** ESTA FUNCION ES PARA PONER EL 3 EN EL DISPLAY                                 **************
 // *************** COMO YA VIMOS EN EL DIAGRAMA DEL DISPLAY EL 3 SON LOS SEGMENTOS A,B,C,D,y G  **************
void ver_tres(){
   digitalWrite(pin_a,HIGH);    // encendemos el segmento a
   digitalWrite(pin_b,HIGH);    // encendemos el segmento b
   digitalWrite(pin_c,HIGH);    // encendemos el segmento c
   digitalWrite(pin_d,HIGH);    // encendemos el segmento d
   digitalWrite(pin_g,HIGH);    // encendemos el segmento g
}

 // *************** ESTA FUNCION ES PARA PONER EL 4 EN EL DISPLAY                               **************
 // *************** COMO YA VIMOS EN EL DIAGRAMA DEL DISPLAY EL 4 SON LOS SEGMENTOS B,C,F,y G   **************
void ver_cuatro(){
   digitalWrite(pin_b,HIGH);    // encendemos el segmento b
   digitalWrite(pin_c,HIGH);    // encendemos el segmento c
   digitalWrite(pin_f,HIGH);    // encendemos el segmento f
   digitalWrite(pin_g,HIGH);    // encendemos el segmento g
}

 // *************** ESTA FUNCION ES PARA PONER EL 5 EN EL DISPLAY                                 **************
 // *************** COMO YA VIMOS EN EL DIAGRAMA DEL DISPLAY EL 5 SON LOS SEGMENTOS A,C,D,F,y G   **************
void ver_cinco(){
   digitalWrite(pin_a,HIGH);    // encendemos el segmento b
   digitalWrite(pin_c,HIGH);    // encendemos el segmento c
   digitalWrite(pin_d,HIGH);    // encendemos el segmento d
   digitalWrite(pin_f,HIGH);    // encendemos el segmento f
   digitalWrite(pin_g,HIGH);    // encendemos el segmento g
}

 // *************** ESTA FUNCION ES PARA PONER EL 6 EN EL DISPLAY                                 **************
 // *************** COMO YA VIMOS EN EL DIAGRAMA DEL DISPLAY EL 6 SON LOS SEGMENTOS C,D,F,y G     **************
void ver_seis(){
   digitalWrite(pin_c,HIGH);    // encendemos el segmento c
   digitalWrite(pin_d,HIGH);    // encendemos el segmento d
   digitalWrite(pin_e,HIGH);    // encendemos el segmento e
   digitalWrite(pin_f,HIGH);    // encendemos el segmento f
   digitalWrite(pin_g,HIGH);    // encendemos el segmento g
}

 // *************** ESTA FUNCION ES PARA PONER EL 7 EN EL DISPLAY                                 **************
 // *************** COMO YA VIMOS EN EL DIAGRAMA DEL DISPLAY EL 7 SON LOS SEGMENTOS A,B y C       **************
void ver_siete(){
   digitalWrite(pin_a,HIGH);    // encendemos el segmento a
   digitalWrite(pin_b,HIGH);    // encendemos el segmento b
   digitalWrite(pin_c,HIGH);    // encendemos el segmento c   
}

 // *************** ESTA FUNCION ES PARA PONER EL 8 EN EL DISPLAY                                     **************
 // *************** COMO YA VIMOS EN EL DIAGRAMA DEL DISPLAY EL 8 SON LOS SEGMENTOS A,B,C,D,E,F y G   **************
void ver_ocho(){
   digitalWrite(pin_a,HIGH);    // encendemos el segmento a
   digitalWrite(pin_b,HIGH);    // encendemos el segmento b
   digitalWrite(pin_c,HIGH);    // encendemos el segmento c
   digitalWrite(pin_d,HIGH);    // encendemos el segmento d   
   digitalWrite(pin_e,HIGH);    // encendemos el segmento e   
   digitalWrite(pin_f,HIGH);    // encendemos el segmento f   
   digitalWrite(pin_g,HIGH);    // encendemos el segmento g   
}

 // *************** ESTA FUNCION ES PARA PONER EL 9 EN EL DISPLAY                                 **************
 // *************** COMO YA VIMOS EN EL DIAGRAMA DEL DISPLAY EL 9 SON LOS SEGMENTOS A,B,C,F y G   **************
void ver_nueve(){
   digitalWrite(pin_a,HIGH);    // encendemos el segmento a
   digitalWrite(pin_b,HIGH);    // encendemos el segmento b
   digitalWrite(pin_c,HIGH);    // encendemos el segmento c
   digitalWrite(pin_f,HIGH);    // encendemos el segmento f   
   digitalWrite(pin_g,HIGH);    // encendemos el segmento g   
}
