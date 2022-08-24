int sensor = A0;
int lectura = 0;

void setup()
{
  Serial.begin(9600);
  delay(100);
}

void loop()
{
  lectura=digitalRead(sensor);
  Serial.println("Sensor de linea");
  Serial.print(lectura);
  delay(50);
}
