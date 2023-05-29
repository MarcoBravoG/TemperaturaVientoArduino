
//https://proyectoarduino.com/sensor-de-temperatura/
const int analogInPin = A0;  // Puerto analogico 0
int analogInPin1 = A1;  // Puerto analogico 1

double sensorViento = 0;  // Variable para alamacenar velocidad de viento
float sensorTemp = 0;  // variable para alamcenar temperatiura

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  Serial.print("Temperatura(C) Velocidad(Km/h)"); 
  delay(500);
}

void loop() {
  // lectura puerto analogico
  sensorViento = analogRead(analogInPin)* (5.0 / 1023.0);
  sensorTemp = (analogRead(analogInPin1)*(3.3 * 100.0/1024.0)-49.31)*-1+20;
 
  //Serial.print("Sensor Temperatura C°= ");
  Serial.print(sensorTemp);
  Serial.print(" ");
 // Serial.print("sensor Velocidad viento Km/H = ");
  Serial.println(sensorViento*3.6*6);

// adiquision de muestras cada 100ms
  delay(100);
}
