///array holds {input pin, output one, output two}
int magnet9[] = {54, 3, 11};
int magnet8[] = {55, 4, 11};
int magnet7[] = {56, 5, 11};
int magnet6[] = {57, 3, 10};
int magnet5[] = {58, 4, 10};
int magnet4[] = {59, 5, 10};
int magnet3[] = {60, 3, 9};
int magnet2[] = {61, 4, 9};
int magnet1[] = {62, 5, 9};
 

void setup() {
  Serial.begin(9600);
  ///Output pins to switch mosfets
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  ///input pins coming from buttons
  pinMode(magnet1[0], INPUT);
  pinMode(magnet2[0], INPUT);
  pinMode(magnet3[0], INPUT);
  pinMode(magnet4[0], INPUT);
  pinMode(magnet5[0], INPUT);
  pinMode(magnet6[0], INPUT);
  pinMode(magnet7[0], INPUT);
  pinMode(magnet8[0], INPUT);
  pinMode(magnet9[0], INPUT);

  ///LED pin 
  pinMode(13, OUTPUT);
 
}

void loop() {
  ///LED off
 /// Serial.println("LED on");
  digitalWrite(13, LOW);
  ///set all outputs LOW
  Serial.println("LOW");
  for (int writePin=0; writePin<=11; writePin++){
    digitalWrite(writePin, LOW);
  }
  ///Check each input pin, if HIGH activate magnet
  for (int readPin=magnet9[0]; readPin<=magnet1[0]; readPin++){ 
    Serial.println(readPin);
    while (digitalRead(readPin)==HIGH){
      ///LED on
      digitalWrite(13, HIGH);
      if (magnet1[0]==readPin){
        Serial.println(readPin);
        digitalWrite(magnet1[1], HIGH);
        digitalWrite(magnet1[2], HIGH);
      }
      else if (magnet2[0]==readPin){
        Serial.println(readPin);
        digitalWrite(magnet2[1], HIGH);
        digitalWrite(magnet2[2], HIGH);
      }
       else if (magnet3[0]==readPin){
        Serial.println(readPin);
        digitalWrite(magnet3[1], HIGH);
        digitalWrite(magnet3[2], HIGH);
      }
       else if (magnet4[0]==readPin){
        Serial.println(readPin);
        digitalWrite(magnet4[1], HIGH);
        digitalWrite(magnet4[2], HIGH);
      }
       else if (magnet5[0]==readPin){
        Serial.println(readPin);
        digitalWrite(magnet5[1], HIGH);
        digitalWrite(magnet5[2], HIGH);
      }
       else if (magnet6[0]==readPin){
        Serial.println(readPin);
        digitalWrite(magnet6[1], HIGH);
        digitalWrite(magnet6[2], HIGH);
      }
       else if (magnet7[0]==readPin){
        Serial.println(readPin);
        digitalWrite(magnet7[1], HIGH);
        digitalWrite(magnet7[2], HIGH);
      }
       else if (magnet8[0]==readPin){
        Serial.println(readPin);
        digitalWrite(magnet8[1], HIGH);
        digitalWrite(magnet8[2], HIGH);
      }
       else if (magnet9[0]==readPin){
        Serial.println(readPin);
        digitalWrite(magnet9[1], HIGH);
        digitalWrite(magnet9[2], HIGH);
      }
    }
  }
}
