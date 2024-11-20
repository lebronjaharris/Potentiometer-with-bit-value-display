const float referenceResistance = 1000.0; 

void setup() { 
  Serial.begin(9600); 
} 

void loop() { 
  int Val = analogRead(A0); 

  float volt = Val * (5.0 / 1023.0);
  
  float current = ((5.0 - volt) / referenceResistance);
  float R2 = volt / current;
  
  Serial.print("voltage = "); 
  Serial.print(volt);
  Serial.print("V");
  Serial.print("\t");  
  Serial.print("R2 = "); 
  Serial.print(R2);
  Serial.println("ohms");

  delay(500); 
}