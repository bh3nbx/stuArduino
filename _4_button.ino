//D2,D3,D4  LED +
//D10       LED -      PWM
//D2--D8   5611BS-6 -
//D9       5611BS-6 +  PWM
//D11      12864 SDA
//D12      12864 SCL
//A0       RIGHT BUTTON
//A1       LEFT  BUTTON
//leftbutton (up=510 down=768 left=682 right=0)
//rightbutton(start=510 select=681 a=767 b=819)
 int rButton = A0;  
 int lButton = A1; 
 int lbuttonint[]={0,510,682,768,1023};
 int rbuttonint[]={510,681,767,819,1023};
 
int rValue = 0;        
int lValue = 0;        
int deviation=5;
void setup() {
 
  Serial.begin(9600); 
}

void loop() {
 
  rValue = analogRead(rButton);            
  lValue = analogRead(lButton);
   
  for (int i=0;i<5;i++)
   {
   if (abs(rValue-rbuttonint[i])<deviation){rValue=i;} 
   }
   for (int i=0;i<5;i++)
   {
   if (abs(lValue-lbuttonint[i])<deviation){lValue=i;} 
   }
  // print the results to the serial monitor:
  Serial.print("rValue = " );                       
  Serial.print(rValue);      
  Serial.print("\t lValue = ");      
  Serial.println(lValue);   

 
  delay(200);                     
}
