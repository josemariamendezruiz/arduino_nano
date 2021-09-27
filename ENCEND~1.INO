/*
    SENCILLO SENSOR DE MOVIMIENTO CON SENSOR RC-SR501
    AUTOR : JOSE MARIA MENDEZ RUIZ

    CODIGO LIBRE PARA UTILIZAR COMO QUIERAS
*/
  
 // DECLARAMOS LAS VARIABLES QUE INDICAN LOS PINES QUE VAMOS A UTILIZAR
 
int sensorpir = 5;              // Pin del salida del sensor que está como salida.
int led = 2;                    // Puedes conectar un LED en el 13 para ver el efecto visual cuando se activa al detectar presencia
int led_calibrado  = 3;         // Este led parpadeará mientras el sensor se está calibrando
int tiempo_calibracion = 30;    // Este tiempo es el que necesia el sensor cuando se enciende por primera vez, este valor está en el datasheet ( hoja de especificacione del fabricante )
int j;                          // variable para bucles

void setup()
{
  // Declaramos los pines que vamos a utilizar y el tipo que van a tener dichos pines

  pinMode(sensorpir, INPUT); 
  pinMode(led, OUTPUT); 
  pinMode(led_calibrado, OUTPUT); 

  // ENCENDEMOS EL LED DE ESTA CALIBRANDO Y ESPERAMOS EL TIEMPO INDICADO POR EL FABRICANTE
  digitalWrite(led_calibrado, HIGH);
  for(j=0; j<tiempo_calibracion; j++){
    delay(1000);
  }
  digitalWrite(led_calibrado, LOW); // Apago el led de calibracion y ya se puede usar el sensor
}
void loop()
 {
 if(digitalRead(sensorpir)== HIGH)
  { 
   digitalWrite(led, HIGH);
   delay(1000);
   digitalWrite(led , LOW);
  }
}
