#define cellPin A1
float counts=0;
float miliVolts=0;
const float mvToCount=4.8828125;   //  (5V/1024)=0.0048828125
const int StepX =2;
const int DirX=5;
int stepsPerRevolution=2048;
int motSpeed=10;

bool feed_left_stop=LOW;
bool feed_right_stop=LOW;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
pinMode(StepX,OUTPUT);
pinMode(DirX,OUTPUT);

pinMode(9,INPUT_PULLUP);  // axis x  - feed to left
pinMode(10,INPUT_PULLUP); // axis y - feed to right
} 

void loop() {


 feed_left_stop=digitalRead(9);
  feed_right_stop=digitalRead(10);

Serial.print("L");//lewa krancowa
Serial.print(feed_left_stop);//lewa krancowa
Serial.print("P");
Serial.print(feed_right_stop);//prawa krancowa 
Serial.print("V5");//VOLTAGE
  if(Serial.available()){
    char skret=Serial.read();
    obrot(skret);
    
    }

 
 }
void obrot(char m_skret){
  if(m_skret == 'p'){
      digitalWrite(DirX,HIGH); // Enables the motor to move in a particular direction
      for(int x = 0; x < 500; x++) {
       // if(feed_right_stop==HIGH) {
     digitalWrite(StepX,HIGH); 
      delayMicroseconds(1000); 
      digitalWrite(StepX,LOW); 
      delayMicroseconds(1000);
       // }
      }
    }
    else if(m_skret == 'l'){
      
              digitalWrite(DirX,LOW); //Changes the rotations direction
              for(int x = 0; x < 500; x++) {
                //if(feed_left_stop==HIGH) {
                  digitalWrite(StepX,HIGH);
                  delayMicroseconds(1000);
                  digitalWrite(StepX,LOW);
                  delayMicroseconds(1000);
                  //}
       
        }
      }
  }
 
