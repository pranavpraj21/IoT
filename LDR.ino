int LDR = A0;

void setup() 
{
Serial.begin(9600);
pinMode(LDR, INPUT);
}

void loop() {
int LDRValue = analogRead(LDR);
Serial.print("sensor = ");
Serial.print(LDRValue);
  }
