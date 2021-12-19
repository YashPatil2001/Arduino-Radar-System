const int trigger = 8;
const int echo = 9;
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
     Serial.begin(9600);
     pinMode(trigger,OUTPUT);
     pinMode(echo,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(trigger,LOW);
   delayMicroseconds(2);
   digitalWrite(trigger,HIGH);
   delayMicroseconds(10);
   digitalWrite(trigger,LOW);
   duration = pulseIn(echo,HIGH);
   distance = duration * 0.034/2;
   Serial.print("distance between sensor and object");
   Serial.print(distance);
   Serial.print("cm");
//   if(distance <  20){
//    digitalWrite(9,HIGH);
//    delay(2000);
//   }
   
}
