const int EchoPin = 8; 
const int TriggerPin = 10;

void setup() {
   Serial.begin(9600);
   pinMode(TriggerPin, OUTPUT); //Trigger da señales de salida
   pinMode(EchoPin, INPUT); //Echo da señales de entrada
}

void loop() {
   int cm = ping(TriggerPin, EchoPin);
   Serial.print("Distancia: "); //Imprime la distancia
   Serial.println(cm); // La distancia se imprime en centimetros
   delay(1000);
}

int ping(int TriggerPin, int EchoPin) {
   long duration, distanceCm;
   
   digitalWrite(TriggerPin, LOW);  //para generar un pulso limpio ponemos a LOW 4us
   delayMicroseconds(4);
   digitalWrite(TriggerPin, HIGH);  //generamos Trigger (disparo) de 10us
   delayMicroseconds(10);
   digitalWrite(TriggerPin, LOW); 
   
   duration = pulseIn(EchoPin, HIGH);  //medimos el tiempo entre pulsos, en microsegundos
   
   distanceCm = duration * 10 / 292/ 2;   //convertimos a distancia, en cm
   return distanceCm;
}
