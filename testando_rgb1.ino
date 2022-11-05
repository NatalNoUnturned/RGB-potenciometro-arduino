const int Giradores = A1;
int BlayBlade;
int i;

void setup(){
  for (i = 11; i <= 13; i++){pinMode(i, OUTPUT);}
  pinMode(Giradores, INPUT);
  Serial.begin(9600);
}
//0 - 1023
//11 verde
//12 azul
//13 vermelho
void loop(){
  BlayBlade = map(analogRead(Giradores), 0, 1023, 0, 1000);
  Serial.println(BlayBlade);
  if(BlayBlade >= 0 && BlayBlade < 250){
    analogWrite(13, 255);
    analogWrite(11, 20);
    analogWrite(12, 147);
  }
  if(BlayBlade >= 250 && BlayBlade < 500){
    analogWrite(13, 255);
    analogWrite(11, 215);
    analogWrite(12, 0);
  }
  if(BlayBlade >= 500 && BlayBlade < 750){
    analogWrite(13, 255);
    analogWrite(11, 239);
    analogWrite(12, 213);
  }
  if(BlayBlade >= 750 && BlayBlade < 1000){
    analogWrite(13, 75);
    analogWrite(11, 0);
    analogWrite(12, 130);
  }
}
  