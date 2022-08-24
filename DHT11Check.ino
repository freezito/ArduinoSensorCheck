# include <DHT.h>
# include <DHT_U.h>

DHT dht(D0, DHT11);

float temp, hume, hi;

void setup() 
{
  Serial.begin(115200);
  dht.begin();  
}

void loop() 
{
  hume = dht.readHumidity();
  temp = dht.readTemperature();
  hi = dht.computeHeatIndex(temp, hume);

  Serial.println("temperatura: " + String (temp)+ "ºC" + " Humedad: " + String (hume) + "%rel"+" Sensacion termica: "+String (hi)+ "ºC"+"\n\n");
}
