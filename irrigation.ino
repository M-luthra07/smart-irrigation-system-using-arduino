#define SENSOR_PIN A0
#define RELAY_PIN 7

int moistureValue = 0;
int dryThreshold = 350;   // Adjust after calibration

void setup() {
  Serial.begin(9600);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH); // Pump OFF initially
}

void loop() {
  moistureValue = analogRead(SENSOR_PIN);

  Serial.print("Soil Moisture: ");
  Serial.println(moistureValue);

  if (moistureValue < dryThreshold) {
    Serial.println("Soil is DRY → Pump ON");
    digitalWrite(RELAY_PIN, LOW); // Turn ON pump
  } 
  else {
    Serial.println("Soil is WET → Pump OFF");
    digitalWrite(RELAY_PIN, HIGH); // Turn OFF pump
  }

  delay(2000); // Read every 2 seconds
}
