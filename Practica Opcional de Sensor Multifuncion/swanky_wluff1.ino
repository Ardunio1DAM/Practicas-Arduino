#define MIN_DISTANCIA 50
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
 
int echo = 9;     // Pin para echo                          
int trigger = 10; // Pin para trigger                               
int speaker = 11; // Pin para el buzzer
unsigned long tiempoRespuesta;
unsigned long distancia;
float freqRad;
int tono;

void setup() {
  pinMode(speaker, OUTPUT);                  
  pinMode(trigger, OUTPUT); 
  pinMode(echo, INPUT); 
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);                    
                     
 } 

void loop() {
  digitalWrite(trigger, HIGH);            // Enviamos pulso de 10 microsegundos
  delayMicroseconds(10);                        
  digitalWrite(trigger, LOW);                   
  tiempoRespuesta = pulseIn(echo, HIGH);  // Y esperamos pulso de vuelta
  distancia = tiempoRespuesta/58;         // Calculo de distancia en cm

  if (distancia < MIN_DISTANCIA) {
    freqRad = sin(distancia*(3.14/180)); // Pasamos frecuencia a radianes
    tono = 2000+(int(freqRad*1000));     // calculamos el tono        
    tone(speaker, tono, 500);
    if (distancia <20){
      digitalWrite(pin3, HIGH);
      digitalWrite(pin4, LOW);
      digitalWrite(pin5, LOW);
      digitalWrite(pin6, LOW);
      
    }else if(distancia <30){
      digitalWrite(pin4, HIGH);
      digitalWrite(pin5, LOW);
      digitalWrite(pin3, LOW);
     digitalWrite(pin6, LOW);
    }else if(distancia <40){
      digitalWrite(pin5, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin6, LOW);
      digitalWrite(pin4, LOW);
    }else if(distancia <50){
      digitalWrite(pin6, HIGH);
      digitalWrite(pin4, LOW);
      digitalWrite(pin5, LOW);
      digitalWrite(pin3, LOW);
    }
  
  } 
}
