
/*
 * UNIVERSIDAD TECNICA DEL NORTE
 * FACULTAD DE INGENIERIA EN CIENCIAS APLICADAS
 * SISTEMAS EMBEBIDOS
 * STEVEN FLORES
 * 5to Nivel;
 * CAP III: 
 * Deber 3: Juego de preguntas
 *          random(a,b)         Crea un numero aleatorio entre a y b
 *          LiquidCrystal.h
 *          LiquidCrystal (objeto)          Inicializa Objeto
 *          objeto.begin(col,fil)           Configura LCD
 *                .print(mensaje/variable)  Envío Mensajes
 *                .setCursor(col,fil)       Ubicación en matriz dentro de LCD
 *          Serial.begin(9600)              Inicia la terminal
 *                .println(mensaje/vasriable) Imprime mensaje en teminal
 *                .available              Verifica que haya mensaje en la terminal               
 *          variable.readString             Lee el mensaje de terminal 
 *                  .toLowerCase();       Convierte a minusculas
 *                  toCharArray;          Convierte en vector lo obtenido
 */
 #include<LiquidCrystal.h>
 LiquidCrystal lcd(13,12,11,10,9,8); //RS,E,D4,D5,D6,D7 
 
 String dato;       //Inicializa la variable para entrada de datos
 int tam ;          //Inicializa variable para creacion del vector
 int aux=0;         //Variable auxiliar para condición
 int a=0;           //Conidicion para ingresar valores en terminal
 int cont=0;        //Variable opciones correctas
 long randomNumber; //Variable creacion de numero random
 
void setup() {
  lcd.begin(16,2);      //Inicializa el objeto lcd
 Serial.begin(9600);    //Inicializa la terminal
 Serial.println("Juego de preguntas, responda SI o NO");    //Mensaje Inicial
}
void loop() {
   if(aux<5){
     randomSeed(millis());    //Valor para numero random
    randomNumber = random(1,9);   //Escoge un valor aleatorio entre 1 y 8
      switch(randomNumber){       //Preguntas según el valor aleatorio 
        case 1:
              Serial.println("100cm equivale a 1 metro?");    //Pregunta 1
              while(a==0){              //Ciclo para obtención de datos por terminal
                if(Serial.available()>0){
                  dato=Serial.readString();     //Obtención dato mediante terminal
                  dato.toLowerCase();         //LLevar todas las letras a minusculas
                  tam=dato.length()+1;        //Obtención del tamaño del vector
                  char vector[tam];           //Creación del vector
                  dato.toCharArray(vector,tam);   //Almacena los datos en el vector
                  if(String(vector)=="si"){       //Verificación respuesta correcta
                    Serial.println("Respuesta Correcta");  //Mensaje de confirmación
                    cont++;                 //Aumento de variable para respuestas correctas
                    a=1;                    //Salida de espera de terminal
                  }else{
                    Serial.println("Respuesta Incorrecta");   //Verificación respuesta incorrecta
                    a=1;                  //Salida de espera de terminal
                  }
                }
              }
         break;
         case 2:
              Serial.println("Las aranas son insectos?");
              while(a==0){
                if(Serial.available()>0){
                  dato=Serial.readString();
                  dato.toLowerCase();
                  tam=dato.length()+1;
                  char vector[tam];
                  dato.toCharArray(vector,tam);
                  if(String(vector)=="no"){
                    Serial.println("Respuesta Correcta");
                
                    a=1;
                    cont++;
                  }else{
                    Serial.println("Respuesta Incorrecta");
                
                    a=1;
                  }
                }
              }
         break;
         case 3:
              Serial.println("La flor es un organo reproducto de las plantas?");
              while(a==0){
                if(Serial.available()>0){
                  dato=Serial.readString();
                  dato.toLowerCase();
                  tam=dato.length()+1;
                  char vector[tam];
                  dato.toCharArray(vector,tam);
                  if(String(vector)=="si"){
                    Serial.println("Respuesta Correcta");
           
                    a=1;
                    cont++;
                  }else{
                    Serial.println("Respuesta Incorrecta");
            
                    a=1;
                  }
                }
              }
         break;
         case 4:
              Serial.println("El koala es un oso.");
              while(a==0){
                if(Serial.available()>0){
                  dato=Serial.readString();
                  dato.toLowerCase();
                  tam=dato.length()+1;
                  char vector[tam];
                  dato.toCharArray(vector,tam);
                  if(String(vector)=="no"){
                    Serial.println("Respuesta Correcta");
       
                    a=1;
                    cont++;
                  }else{
                    Serial.println("Respuesta Incorrecta");
             
                    a=1;
                  }
                }
              }
         break;
         case 5:
              Serial.println("CO2 es dioxido de carbono.");
              while(a==0){
                if(Serial.available()>0){
                  dato=Serial.readString();
                  dato.toLowerCase();
                  tam=dato.length()+1;
                  char vector[tam];
                  dato.toCharArray(vector,tam);
                  if(String(vector)=="si"){
                    Serial.println("Respuesta Correcta");
        
                    a=1;
                    cont++;
                  }else{
                    Serial.println("Respuesta Incorrecta");
               
                    a=1;
                  }
                }
              }
         break;
         case 6:
              Serial.println("Egipto se encuentra al Noreste de Africa.");
              while(a==0){
                if(Serial.available()>0){
                  dato=Serial.readString();
                  dato.toLowerCase();
                  tam=dato.length()+1;
                  char vector[tam];
                  dato.toCharArray(vector,tam);
                  if(String(vector)=="si"){
                    Serial.println("Respuesta Correcta");
     
                    a=1;
                    cont++;
                  }else{
                    Serial.println("Respuesta Incorrecta");
              
                    a=1;
                  }
                }
              }
         break;
         case 7:
              Serial.println("Todas las palabras agudas llevan tilde.");
              while(a==0){
                if(Serial.available()>0){
                  dato=Serial.readString();
                  dato.toLowerCase();
                  tam=dato.length()+1;
                  char vector[tam];
                  dato.toCharArray(vector,tam);
                  if(String(vector)=="no"){
                    Serial.println("Respuesta Correcta");
      
                    a=1;
                    cont++;
                  }else{
                    Serial.println("Respuesta Incorrecta");

                    a=1;
                  }
                }
              }
         break;
         case 8:
              Serial.println("Las palabras esdrujulas siempre llevan tilde");
              while(a==0){
                if(Serial.available()>0){
                  dato=Serial.readString();
                  dato.toLowerCase();
                  tam=dato.length()+1;
                  char vector[tam];
                  dato.toCharArray(vector,tam);
                  if(String(vector)=="si"){
                    Serial.println("Respuesta Correcta");
                    a=1;
                    cont++;
                  }else{
                    Serial.println("Respuesta Incorrecta");
                    a=1;
                  }
                }
              }
         break;         
      }
      a=0;      //reinicia la variable para nuevas verificaciones
      aux++;    //Aumenta el numero de preguntas realizadas
   }
   if(aux==5){                    //Muestra el mensaje cuando se realiza un determinado número de preguntas
   lcd.setCursor(0,0);            //Ubicación en pantalla LCD
   lcd.print("RESPUESTAS ");      //Muestra de mensaje 
   lcd.setCursor(0,1);            //Ubicación en pantalla LCD
   lcd.print("CORRECTAS: ");      //Muestra de mensaje 
   lcd.setCursor(10,1);           //Ubicación en pantalla LCD
   lcd.print(cont);               //Muestra de variable 
   }
}
