const int motionpin=A0;
const int motion=A1;
const int ledpin_1=4;
const int ledpin_2=7;
const int ledpin_3=13;
int motionsensvalue_1=0;
int motionsensvalue_2=0;
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledpin_1, OUTPUT);
pinMode(ledpin_2, OUTPUT);
pinMode(ledpin_3, OUTPUT);
pinMode(motionpin,INPUT);
pinMode(motion,INPUT);
}

void loop() {
// put your main code here, to run repeatedly:
motionsensvalue_1=analogRead(motionpin); // reads analog data from motion sensor
motionsensvalue_2=analogRead(motion); // reads analog data from motion sensor

  if (motionsensvalue_1>=200){
    Serial.println(motionsensvalue_1);
    Serial.println("motionsensvalue_1");
    digitalWrite(ledpin_2,HIGH);
    digitalWrite(ledpin_1,HIGH);
  }
  else if (motionsensvalue_2>=200){
    Serial.println(motionsensvalue_2);
    Serial.println("motionsensvalue_2");
    digitalWrite(ledpin_2,HIGH);
    digitalWrite(ledpin_3,HIGH);
    delay(2000);
  
  }
  else {
    Serial.println("none");
    digitalWrite(ledpin_2,HIGH);
    digitalWrite(ledpin_1,LOW); //turns led off led and buzzer
    digitalWrite(ledpin_3,LOW);
  }
}
