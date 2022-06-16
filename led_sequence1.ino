int led1 = 13, led2 = 12, led3 = 11, led4 = 10, led5 = 9, led6 = 8, led7 = 7, led8 = 2,led9 = 4, r = 6, g = 5, b = 3;
  
int arr [] = { led1, led2, led3, led4, led5, led6, led7, led8, led9, r, g, b};
int rev [] = { b, g, r, led9, led8, led7, led6, led5, led4, led3, led2, led1};
int d = 500;

void setup()
{
  for (int i=0; i<sizeof arr/sizeof arr[0]; i++) {
    pinMode(arr[i], OUTPUT);
  }
}

void loop()
{
  primeiro();
  segundo();
  pisca();
  quarto();
  pisca(); 
}
void primeiro(){
  
  for (int i=0; i<sizeof arr/sizeof arr[0]; i++) {
  	if(i<i-3){
      	digitalWrite(arr[i], HIGH);
      	delay(d); 
      	digitalWrite(arr[i], LOW);
      	delay(d); 
    } 
    else{
      	analogWrite(arr[i], HIGH);
      	delay(d);
      	analogWrite(arr[i], LOW);
      	delay(d);
    }
  }
  
}

void segundo(){
	for (int i=0; i<sizeof arr/sizeof arr[0]; i++) {
      if(i<i-3){
          digitalWrite(arr[i], HIGH);
          delay(d); 
      } 
      else{
          analogWrite(arr[i], HIGH);
          delay(d);
      }
	}
  
  for (int i=0; i<sizeof arr/sizeof arr[0]; i++) {
      if(i<i-3){
          digitalWrite(arr[i], LOW); 
      } 
      else{
          analogWrite(arr[i], LOW);
      }
  	}
  delay(d);
}

void pisca(){
for (int i=0; i<3; i++){
    for (int i=0; i<sizeof arr/sizeof arr[0]; i++) {
      digitalWrite(arr[i], HIGH); 
	}
	delay(d); 
    for (int i=0; i<sizeof arr/sizeof arr[0]; i++) {
      digitalWrite(arr[i], LOW);
    }
    delay(d); 
  }
}
void quarto(){
  for (int i=0; i<sizeof arr/sizeof arr[0]; i++) {
      if(i<i-3){
        digitalWrite(arr[i], HIGH);
        delay(d); 
      } 
      else{
        analogWrite(arr[i], HIGH);
        delay(d);
      }
	}
  
  for (int i=0; i<sizeof rev/sizeof rev[0]; i++) {
      if(i<i-9){
        digitalWrite(rev[i], LOW); 
        delay(d);
      } 
      else{
        analogWrite(rev[i], LOW);
        delay(d);
      }
  	}
}
