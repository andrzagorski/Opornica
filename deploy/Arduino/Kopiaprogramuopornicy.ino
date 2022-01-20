 #include <LiquidCrystal_I2C.h>
String TOP;
String BOTTOM;
double I;
double U;
String Napiecie="U= ";
String JednNapiecie=" mV";
String Natezenie="I= ";
String JednNatezenie=" mA";
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display

const int StepX =2;
const int DirX=5;

bool feed_left_stop=LOW;
bool feed_right_stop=LOW;

void setup() {  
Serial.begin(115200);

  lcd.init();
  lcd.clear();         
  lcd.backlight();      // Make sure backlight is on

pinMode(StepX,OUTPUT);
pinMode(DirX,OUTPUT);

pinMode(9,INPUT_PULLUP);  // axis x  - feed to left
pinMode(10,INPUT_PULLUP); // axis y - feed to right

pinMode(A0, INPUT);  // voltage meter
pinMode(A1, INPUT);   // voltage meter
} 

void loop() {

//U=(analogRead(A0));
U=(analogRead(A0)*5000.0/1024,4);

TOP=Napiecie+U+JednNapiecie;
    for(int T=0;T<TOP.length();T++) {
       lcd.setCursor(T,0);   //Set cursor to character 2 on line 0
         lcd.print(TOP[T]);
    }

//I= ((analogRead(A1)-512)*5000.0/134);
I= ((analogRead(A1)-512)*5000.0/134);

BOTTOM=Natezenie+I+JednNatezenie;

      for(int B=0;B<BOTTOM.length();B++) {
  lcd.setCursor(B,1);   //Move cursor to character 2 on line 1
         lcd.print(BOTTOM[B]);
    }
    
  if(Serial.available()){
  
          if(Serial.read()=='l'){
                         Serial.end();

             obrot('l');
          }
          if(Serial.read()=='p'){
                         Serial.end();

             obrot('p');
          }

  }

 feed_left_stop=digitalRead(9);
 feed_right_stop=digitalRead(10);

Serial.print("L");//lewa krancowa
Serial.print(feed_left_stop);//lewa krancowa
Serial.print("P");
Serial.print(feed_right_stop);//prawa krancowa 
Serial.print("V5");//VOLTAGE
 }
void obrot(char m_skret){
    if(m_skret == 'p'){
      digitalWrite(DirX,HIGH); // Enables the motor to move in a particular direction
        for(int x = 0; x < 500; x++) {
          digitalWrite(StepX,HIGH); 
          delayMicroseconds(1000); 
          digitalWrite(StepX,LOW); 
          delayMicroseconds(1000);
        }

    }
    
    if(m_skret == 'l'){
      digitalWrite(DirX,LOW); //Changes the rotations direction
         for(int x = 0; x < 500; x++) {
           digitalWrite(StepX,HIGH);
           delayMicroseconds(1000);
           digitalWrite(StepX,LOW);
           delayMicroseconds(1000);
         }

    }
                           Serial.begin(115200);

}

 
