const int b1 = 2;
const int b2 = 3;
const int b3 = 4;
const int b4 = 5;
const int b5 = 6;

/*
 *    a(2)
* b(3) c(4) d(5)
*     e(6)
 */


int state1 = 0;
int state2 = 0; 
int state3 = 0; 
int state4 = 0; 
int state5 = 0;   

void setup(){
  Serial.begin(9600);
  
  pinMode(b1,INPUT_PULLUP);
  pinMode(b2,INPUT_PULLUP);
  pinMode(b3,INPUT_PULLUP);
  pinMode(b4,INPUT_PULLUP);
  pinMode(b5,INPUT_PULLUP);
}

void loop(){
  state1 = digitalRead(b1);
  state2 = digitalRead(b2);
  state3 = digitalRead(b3);
  state4 = digitalRead(b4);
  state5 = digitalRead(b5);

  if(state1 == LOW){
    Serial.println("a");
    delay(100);
  }
  if(state2 == LOW){
    Serial.println("b");
    delay(100);
  }
  if(state3 == LOW){
    Serial.println("c");
    delay(100);
  }
  if(state4 == LOW){
    Serial.println("d");
    delay(100);
  }
  if(state5 == LOW){
    Serial.println("e");
    delay(100);
  }
    delay(100);
}

