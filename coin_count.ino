include <Wire.h> 

void setup() {
  // set up the LCD's number of columns and rows:
  Serial.begin(9600);
} 
int f1=0;
int c1=0,c2=0,c3=0;
void loop() 
{
  float s1=analogRead(A0);
  if(s1>=30 && s1<=70 && f1==0){
    f1=1;
    c1++;
  }
  if(s1>=71 && s1<110 && f1==0){
    f1=1;
    c2++;
  }
  if(s1>=111 && s1<250 && f1==0){
    f1=1;
    c3++;
  }
  if(s1==0){
    f1=0;
  }
/*Serial.print("Force : ");
Serial.println(s1);*/
  Serial.println(c1);
  Serial.print("|");
  Serial.println(c2);
  Serial.print("|");
  Serial.println(c3);
  Serial.print("|");
  Serial.print(c1 + 2*c2 + 5*c3);
  Serial.println("₹");
  Serial.print("|");

  delay(1000);
}
