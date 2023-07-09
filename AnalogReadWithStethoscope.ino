const int STETHOSCOPE_PIN = 36;

void setup() {
   // put your setup code here, to run once:
   Serial.begin(115200);
   analogReadResolution(10); //default is 12. Can be set between 9-12.
}
void loop() {
   
   int STETHOSCOPE_Reading = analogRead(STETHOSCOPE_PIN);
   Serial.print("Reading: ");Serial.print(STETHOSCOPE_Reading);
}
