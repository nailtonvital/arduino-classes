
bool estadoLed = 0;
int estadoBtn = 0;

int led1 = 12;
int led2 = 11;
int led3 = 10;
int num = 0;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(num,OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{  
  switch (estadoBtn) {
  case 0:
    // se botao apertado acenderá todos os leds
   if (digitalRead(2)==HIGH){
  	digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
     digitalWrite(led3,HIGH);
     delay(100);
    estadoBtn=1;
  }
    break;
 case 1:
    /* se botão apertado
    inicia-se um loop que acenderá os botoes
    e só irá parar quando o botão for apertado novamente*/
    
  if (digitalRead(2)==HIGH){
    
    while(estadoBtn==1){
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      delay(500);
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      delay(500);
      if(digitalRead(2)==HIGH){
      	estadoBtn=2;
        
      }
    }
 
  }
  break;
 case 2:
    /* se botão apertado
    inicia-se um loop que irá escolher
    uma porta aleatoriamente
    e acendera o led daquela porta*/
    
     if (digitalRead(2)==HIGH){
   		while(estadoBtn==2){
          int num = random(10, 13);
          digitalWrite(num,HIGH);
          delay(1000);
          digitalWrite(num,LOW);
          delay(1000);
          if(digitalRead(2)==HIGH){
            estadoBtn=3;
        	break;
          }
        }
     }
    break;
  case 3: 
    //desliga todos os leds
   if (digitalRead(2)==HIGH){
  	digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
     digitalWrite(led3,LOW);
     delay(1000);
    estadoBtn=0;
  }
    break;
}
  
}