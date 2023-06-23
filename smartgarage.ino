#include <Servo.h>
Servo motor;

#define i1 A0
#define i2 A1
#define i3 A2
#define i4 A3
#define a 13
#define b 3
#define c 2
#define d 4
#define e 7
#define f 8
#define g 5
#define buzzer 9
#define temp A4
#define LED1 11
#define ldr A5
#define i5 12
#define b1 10


void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(i1, INPUT);
 pinMode(i2, INPUT);
  pinMode(i3, INPUT);
  pinMode(i4, INPUT);
  Serial.begin(9600);
  pinMode(buzzer , OUTPUT);
   pinMode(LED1, OUTPUT);
  
  pinMode(ldr, INPUT);
pinMode(i5, INPUT);
pinMode(b1, INPUT);
motor.attach(6);
  
  
}
 void zero()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
   digitalWrite(c,LOW);
  digitalWrite(d,LOW);
   digitalWrite(e,LOW);
  digitalWrite(f,LOW);
   digitalWrite(g,HIGH);
  
}
void one(){
 digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
   digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
  }
void two()
{
 digitalWrite(a,LOW);
  digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
   digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
   digitalWrite(g,LOW);
  
}
void three()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
   digitalWrite(c,LOW);
  digitalWrite(d,LOW);
   digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
   digitalWrite(g,LOW);
  
}
void four()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
   digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
   digitalWrite(g,LOW);
  
}

void loop()
{
  int r11=digitalRead(i1);
   int r21=digitalRead(i2);
   int r31=digitalRead(i3);
   int r41=digitalRead(i4);
  int S1=digitalRead(i1);
   int S2=digitalRead(i2);
   int S3=digitalRead(i3);
   int S4=digitalRead(i4);
  int sum=S1+S2+S3+S4;
 
if(sum==4)//print 0 av places
{
   zero();
}
  else if(sum==3){ one(); }
  else if (sum==2){ two(); }
  else if (sum==1){ three();}

  else if(sum==0){four();};
//FIRE CASE
  float reading;
  float temp_vol;
  reading=analogRead(temp);
  temp_vol=(reading / 965.0) * 5;
  temp_vol=(temp_vol - 0.5) * 100;
  delay(300);
  Serial.println(temp_vol);
  if(temp_vol>13)
  {
    
  tone(buzzer,800,1000);
    delay(500);
  tone(buzzer,200,1000);
    delay(500);}
//night case
int old=analogRead(ldr);
  
  int NEW = map(old,30,460,0,255);
  analogWrite(LED1,NEW);
  
  //gating
  if (sum!=0){
    
delay(50);
int r22=digitalRead(i2);
if(r21==1&&r22==0)
{
for(int i=0;i<=90;i=i+5)
{motor.write(i);
delay(100);}
delay(5000);
for(int i=90;i>=0;i=i-5)
{motor.write(i);
delay(100);}
}


delay(50);
int r32=digitalRead(i3);
if(r31==1&&r32==0)
{
for(int i=0;i<=90;i=i+5)
{motor.write(i);
delay(100);}
delay(5000);
for(int i=90;i>=0;i=i-5)
{motor.write(i);
delay(100);}
}


delay(50);
int r42=digitalRead(i4);
if(r41==1&&r42==0)
{
for(int i=0;i<=90;i=i+5)
{motor.write(i);
delay(100);}
delay(5000);
for(int i=90;i>=0;i=i-5)
{motor.write(i);
delay(100);}
}


delay(50);
int r12=digitalRead(i1);
if(r11==1&&r12==0)
{
for(int i=0;i<=90;i=i+5)
{motor.write(i);
delay(100);}
delay(5000);
for(int i=90;i>=0;i=i-5)
{motor.write(i);
delay(100);}
}


  else{motor.write(0);}
  }
  int a1=digitalRead(i5);
if(i5==0)
{
for(int i=0;i<=90;i=i+5)
{motor.write(i);
delay(100);}
delay(5000);
for(int i=90;i>=0;i=i-5)
{motor.write(i);
delay(100);}
}
if (a1==0)
{
for(int i=0;i<=90;i=i+5)
{motor.write(i);
delay(100);}
delay(5000);
for(int i=90;i>=0;i=i-5)
{motor.write(i);
delay(100);}
}

}













