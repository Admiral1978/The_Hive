#include <DS1307RTC.h>






#include <Wire.h>

#include "DHT.h" //DHT Bibliothek laden


#define anzahl 20

#define DHTPIN1 4 //Der Sensor wird an PIN 2 angeschlossen
#define DHTTYPE DHT11

#define DHTPIN2 7 //Der Sensor wird an PIN 2 angeschlossen
#define DHTTYPE DHT11

#define DHTPIN3 8 //Der Sensor wird an PIN 2 angeschlossen
#define DHTTYPE DHT11    // Es handelt sich um den DHT11 Sensor



DHT dht1(DHTPIN1 , DHTTYPE) ;//Der Sensor wird ab jetzt mit „dth1“ angesprochen
DHT dht2(DHTPIN2 , DHTTYPE) ;//Der Sensor wird ab jetzt mit „dth2“ angesprochen
DHT dht3(DHTPIN3 , DHTTYPE) ;//Der Sensor wird ab jetzt mit „dth3“ angesprochen

struct t_daten
{
  int temperatur1;
  int temperatur2;
  int temperatur3;
  int luftfeuchtigkeit1;
  int luftfeuchtigkeit2;
  int luftfeuchtigkeit3;
  
};


  t_daten klima [anzahl]; 

  int temperatur1 = 0;
  int temperatur2 = 0;
  int temperatur3 = 0;
  int luftfeuchtigkeit1 = 0;
  int luftfeuchtigkeit2 = 0;
  int luftfeuchtigkeit3 = 0;
 
 
