/* declaración de variables */
int spk=11;                                           // altavoz a GND y pin 13
int c[5]={131,262,523,1046,2093};       // frecuencias 4 octavas de Do
int cs[5]={139,277,554,1108,2217};      // Do#
int d[5]={147,294,587,1175,2349};       // Re
int ds[5]={156,311,622,1244,2489};    // Re#
int e[5]={165,330,659,1319,2637};      // Mi
int f[5]={175,349,698,1397,2794};       // Fa
int fs[5]={185,370,740,1480,2960};     // Fa#
int g[5]={196,392,784,1568,3136};     // Sol
int gs[5]={208,415,831,1661,3322};   // Sol#
int a[5]={220,440,880,1760,3520};      // La
int as[5]={233,466,932,1866,3729};    // La#
int b[5]={247,494,988,1976,3951};      // Si
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
void nota(int a, int b);            // declaración de la función auxiliar. Recibe dos números enteros.

void setup() {
  
  for ( int i = 3 ; i <= 6 ; i++)
  {
    pinMode(i, OUTPUT);
  }
}
void nota(int frec, int t)
{
    tone(spk,frec);      // suena la nota frec recibida
    delay(t);                // para despues de un tiempo t
}
void loop() {

  
         /*******************/
/*     STAR WARS      */
/*******************/
/**** tema principal ****/
  
nota(d[1],150);noTone(spk);delay(50);
digitalWrite( pin3 , HIGH);
delay (200);
digitalWrite( pin3 , LOW);
nota(d[1],150);noTone(spk);delay(50);
digitalWrite( pin4 , HIGH);
delay (200);
digitalWrite( pin4 , LOW);
nota(d[1],150);noTone(spk);delay(50);
digitalWrite( pin5 , HIGH);
delay (200);
digitalWrite( pin5 , LOW);
nota(g[1],900);noTone(spk);delay(150);
digitalWrite( pin6 , HIGH);
delay (200);
digitalWrite( pin6 , LOW);
nota(d[2],900);noTone(spk);delay(50);
digitalWrite( pin3 , HIGH);
delay (200);
digitalWrite( pin6 , LOW);
digitalWrite( pin3 , LOW);
nota(c[2],150);noTone(spk);delay(50);
digitalWrite( pin4 , HIGH);
delay (200);
digitalWrite( pin4 , LOW);
nota(b[1],150);noTone(spk);delay(50);
digitalWrite( pin5 , HIGH);
delay (200);
digitalWrite( pin5 , LOW);
nota(a[1],150);noTone(spk);delay(50);
digitalWrite( pin6 , HIGH);
delay (200);
digitalWrite( pin6 , LOW);
nota(g[2],900);noTone(spk);delay(150);
digitalWrite( pin3 , HIGH);
delay (200);
digitalWrite( pin6 , LOW);
digitalWrite( pin3 , LOW);
nota(d[2],900);noTone(spk);delay(100);
digitalWrite( pin4 , HIGH);
delay (200);
digitalWrite( pin4 , LOW);
nota(c[2],150);noTone(spk);delay(50);
digitalWrite( pin5 , HIGH);
delay (200);
digitalWrite( pin5 , LOW);
nota(b[1],150);noTone(spk);delay(50);
digitalWrite( pin6 , HIGH);
delay (200);
digitalWrite( pin6 , LOW);
nota(a[1],150);noTone(spk);delay(50);
digitalWrite( pin3 , HIGH);
delay (200);
digitalWrite( pin6 , LOW);
digitalWrite( pin3 , LOW);
nota(g[2],900);noTone(spk);delay(150);
digitalWrite( pin4 , HIGH);
delay (200);
digitalWrite( pin4 , LOW);
nota(d[2],900);noTone(spk);delay(100);
digitalWrite( pin5 , HIGH);
delay (200);
digitalWrite( pin5 , LOW);
nota(c[2],150);noTone(spk);delay(50);
digitalWrite( pin6 , HIGH);
delay (200);
digitalWrite( pin6 , LOW);
nota(b[1],150);noTone(spk);delay(50);
nota(c[2],150);noTone(spk);delay(50);
nota(a[1],1200);noTone(spk);delay(2000);

       
  }

