//D2,D3,D4  LED +
//D10       LED -      PWM
//D2--D8   5611BS-6 -
//D9       5611BS-6 +  PWM
//D11      12864 SDA
//D12      12864 SCL
//A0       RIGHT BUTTON
//A1       LEFT  BUTTON
int ledr = 2;
int ledg = 3;
int ledy = 4;
int gnd = 10;

void setup() {                
 
     pinMode(ledr, OUTPUT); 
     pinMode(ledg, OUTPUT); 
     pinMode(ledy, OUTPUT); 
     pinMode(gnd, OUTPUT);     
 
}


void loop() {
      digitalWrite(gnd, LOW);
      digitalWrite(ledr, HIGH);   
      delay(500);              
      digitalWrite(ledr, LOW);    
      delay(500);              
      digitalWrite(ledg, HIGH);   
      delay(500);              
      digitalWrite(ledg, LOW);    
      delay(500);      
      digitalWrite(ledy, HIGH);   
      delay(500);              
      digitalWrite(ledy, LOW);    
      delay(500); 
}
