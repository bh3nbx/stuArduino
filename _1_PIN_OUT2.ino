//D2,D3,D4  LED +
//D10       LED -      PWM
//D2--D8   5611BS-6 -
//D9       5611BS-6 +  PWM
//D11      12864 SDA
//D12      12864 SCL
//A0       RIGHT BUTTON
//A1       LEFT  BUTTON
int led[] = {2,3,4,10};
int gnd=10;

void setup() {                
  for (int i=0;i<4;i++)
    { pinMode(led[i], OUTPUT); }    
 
}

// the loop routine runs over and over again forever:
void loop() {
   digitalWrite(led[3], LOW);
   for (int i=0;i<3;i++){
      digitalWrite(led[i], HIGH);   
      delay(500);              
      digitalWrite(led[i], LOW);    
      delay(500);              
 }
}
