int vr_pin=A0;
int led_r=3;
int led_y=5;
int led_g=6;
int led_w=9;
void setup() {
  pinMode(vr_pin,INPUT);
  pinMode(led_r,INPUT);
  pinMode(led_y,INPUT);
  pinMode(led_g,INPUT);
  pinMode(led_w,INPUT);
  Serial.begin(9600);
}

void loop() {
  int vr=analogRead(vr_pin);
  int vrl=map(vr,0,1023,0,5);
  Serial.println(vrl);
  if(vrl==1){
    analogWrite(led_r,255);
    analogWrite(led_y,0);
    analogWrite(led_g,0);
    analogWrite(led_w,0);
  }else if(vrl==2){
    analogWrite(led_r,0);
    analogWrite(led_y,255);
    analogWrite(led_g,0);
    analogWrite(led_w,0);
  }
  else if(vrl==3){
    analogWrite(led_r,0);
    analogWrite(led_y,0);
    analogWrite(led_g,255);
    analogWrite(led_w,0);
  }
  else if(vrl==4){
    analogWrite(led_r,0);
    analogWrite(led_y,0);
    analogWrite(led_g,0);
    analogWrite(led_w,255);
  }else{
    analogWrite(led_r,0);
    analogWrite(led_y,0);
    analogWrite(led_g,0);
    analogWrite(led_w,0);
  }
  delay(500);
}
