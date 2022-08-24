int digitalPin = 5; // KY-026 entrada digital del sensor de flama en el pin 5
int analogPin = A1; // KY-026 Salida análoga del sensor de flama en el pin A0 
int digitalVal; // lectura digital 
int analogVal; // lectura análoga 

void setup()
{
  pinMode(analogPin, OUTPUT); //Definimos analogPin en salida para imprimir los valores en el monitor serial
  Serial.begin(9600); //Velocidad de transmisión en baudios
}  
void loop()
{
  analogVal = analogRead(analogPin); 
  Serial.println(analogVal); // imprime valor analogico que se puede observar en el monitor serial 
}
