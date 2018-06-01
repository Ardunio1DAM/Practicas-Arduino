# Practica-02 Arduino LED 3

### Componentes necesarios:
* Placa Arduino x1
* BreadBoard x1
* Cable x7
* LED x3

### Explicacion:
Conectamos el la __placa arduino__ a la __BreadBoard__. Para esto cojemos un __cable__ rojo y lo sacamos desde la ranura 13 - 11 a los agujeros de la __BreadBoard__ que estan en la pata larga de los __LED__. Seguido a esto cojemos un __cable__ negro y lo sacamos desde GND al negativo de la __BreadBoard__.

### Código necesario: 

``` c
void setup()
{
  for ( int i = 11 ; i <= 13 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

void loop()
{
   for (int i=11 ; i <= 13 ; i++)
  {
       digitalWrite( i , HIGH) ;
       delay (500) ;
       digitalWrite( i , LOW);
       delay (500) ;
  }

}
```

### Explicación de código.
Este código hará que los __LED__ se enciendan y apaguen cada medio segundo uno seguido del otro.

# Imagenes
![](Proyecto2.PNG)