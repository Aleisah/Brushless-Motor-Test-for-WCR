int sensor = 3;  // IR sensor signal pin
volatile int REV = 0;  // Revolution counter
unsigned long PREVIOUS_TIME = 0;  // Previous time in milliseconds
int RPM_VALUE = 0;  // Calculated RPM
int wave;  // Current sensor signal state

// Interrupt Service Routine
void countRevolution() {
  REV++;
}

void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  attachInterrupt(digitalPinToInterrupt(sensor), countRevolution, RISING);
}

void loop() {
  // Display the current signal state
  wave = digitalRead(sensor);
  Serial.print("Signal: ");
  Serial.println(wave);

  // Calculate RPM every second
  unsigned long currentTime = millis();
  if (currentTime - PREVIOUS_TIME >= 1000) {  // Check if 1 second has passed
    RPM_VALUE = REV * 60;  // Calculate RPM (REV per second * 60 seconds per minute)
    PREVIOUS_TIME = currentTime;  // Update previous time
    REV = 0;  // Reset revolution count

    // Display RPM
    Serial.print("RPM: ");
    Serial.println(RPM_VALUE);
  }

  delay(1);  // Small delay to avoid overwhelming the Serial output
}
