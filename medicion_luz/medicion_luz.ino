//Valores que salen de ajustar en la hoja de datos la grafica en escala logaritmica
const float base_resistance = 150e3;      //resistencia del LDR a 1lux
const float decay_rate = -1.0/0.7;        //potencia del decay del LDR.

const int analogInPin = A0;         // Analog input pin
const float maxReading = 1024.0;    // maximo valor del conversor A/D
const float R0 = 10e3;              // Resistencia en serie con el LDR.

int sensorValue = 0;                // lectura del A/D
float resistencia;
float lux;

void setup() {
  Serial.begin(115200);
}

void loop() {

 // leo el valor
  sensorValue = analogRead(analogInPin);
  resistencia = ldr_resistance(sensorValue);
  lux = lux_from_resistance(resistencia);

  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print(",\t resistance= ");
  Serial.print(resistencia);
  Serial.print(",\t lux= ");
  Serial.println(lux);

  // wait 200 milliseconds
  delay(1000);
}

float ldr_resistance(int reading) {

  return R0 * reading/(maxReading-reading);
  
}

float lux_from_resistance(float resistance) {

  return pow(resistance/base_resistance,decay_rate);
}

