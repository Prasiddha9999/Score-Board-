//Name: Prasiddha Regmi
//Student_ID: 2059789
//Date: 2021/08/22

int input[]{2,3,4,5};
int input2[]{6,7,8,9};
int dig2[]{A1,A2};
int dig[]{1,A0};
int puls[]{10,11,12,13,A5};
int y=0,x=0;
int y1=0,y2=0;
int x1=0,x2=0;

void setup(){
  for(int i=0;i<4;i++){
   pinMode(input[i],OUTPUT);
   pinMode(input2[i],OUTPUT);
  }
  for(int i=0;i<2;i++){
   pinMode(dig[i],OUTPUT);
   pinMode(dig2[i],OUTPUT);
  }
  for(int i=0;i<5;i++){
   pinMode(puls[i],INPUT);
  }
}

void loop(){
   if(digitalRead(puls[0])==HIGH){
   	y++;
    while(digitalRead(puls[0])==HIGH){}
    y1=y/10;
    y2=y%10;
    number2(y1,0);
    delay(10);
    number2(y2,1);
    delay(10);
    }
   else if(digitalRead(puls[1])==HIGH){
   	y--;
    if(y<0)
      y=0;
    while(digitalRead(puls[1])==HIGH){}
    y1=y/10;
    y2=y%10;
    number2(y1,0);
    delay(10);
    number2(y2,1);
    delay(10);
    }
    
    else if(digitalRead(puls[2])==HIGH){
   	x++;
    while(digitalRead(puls[2])==HIGH){}
    x1=x/10;
    x2=x%10;
    number(x1,0);
    delay(10);
    number(x2,1);
    delay(10);
    }
  else if(digitalRead(puls[3])==HIGH){
   	x--;
    if(x<0)
      x=0;
    while(digitalRead(puls[3])==HIGH){}
    x1=x/10;
    x2=x%10;
    number(x1,0);
    delay(10);
    number(x2,1);
    delay(10);
    }
  else if(digitalRead(puls[4])==HIGH){
   while(digitalRead(puls[4])==HIGH){}
    y=0;
    x=0;
    y1=y/10;
    y2=y%10;
    number2(y1,0);
    delay(20);
    number2(y2,1);
    delay(20);
    x1=x/10;
    x2=x%10;
    number(x1,0);
    delay(10);
    number(x2,1);
    delay(10);
    }
   else{
    number2(y1,0);
    delay(10);
    number2(y2,1);
    delay(10);
    number(x1,0);
    delay(50);
    number(x2,1);
    delay(10);
   }
 
 }
  
  

void number2(int n, int k){
  if(k==0){
  	digitalWrite(dig[0],HIGH);
    digitalWrite(dig[1],LOW);
  }
  if(k==1){
     digitalWrite(dig[0],LOW);
     digitalWrite(dig[1],HIGH);
  }
  if(n==0){
    for(int i=0;i<4;i++)
      digitalWrite(input2[i],LOW);
  }
  if(n==1){
    digitalWrite(input2[0],HIGH); 
    for(int i=1;i<4;i++)
      digitalWrite(input2[i],LOW);
  }
  if(n==2){
    digitalWrite(input2[0],LOW);
    digitalWrite(input2[1],HIGH);
    digitalWrite(input2[2],LOW);
    digitalWrite(input2[3],LOW);
  }
  if(n==3){
    digitalWrite(input2[0],HIGH);
    digitalWrite(input2[1],HIGH);
    digitalWrite(input2[2],LOW);
    digitalWrite(input2[3],LOW);  
  }
  if(n==4){
    digitalWrite(input2[0],LOW);
    digitalWrite(input2[1],LOW);
    digitalWrite(input2[2],HIGH);
    digitalWrite(input2[3],LOW);
  }
    if(n==5){
    digitalWrite(input2[0],HIGH);
    digitalWrite(input2[1],LOW);
    digitalWrite(input2[2],HIGH);
    digitalWrite(input2[3],LOW);
  }
    if(n==6){
    digitalWrite(input2[0],LOW);
    digitalWrite(input2[1],HIGH);
    digitalWrite(input2[2],HIGH);
    digitalWrite(input2[3],LOW);
  }
    if(n==7){
    digitalWrite(input2[0],HIGH);
    digitalWrite(input2[1],HIGH);
    digitalWrite(input2[2],HIGH);
    digitalWrite(input2[3],LOW);
  }
    if(n==8){
    digitalWrite(input2[0],LOW);
    digitalWrite(input2[1],LOW);
    digitalWrite(input2[2],LOW);
    digitalWrite(input2[3],HIGH);
  }
    if(n==9){
    digitalWrite(input2[0],HIGH);
    digitalWrite(input2[1],LOW);
    digitalWrite(input2[2],LOW);
    digitalWrite(input2[3],HIGH);
  }
}
  
  void number(int n, int k){
  if(k==0){
  	digitalWrite(dig2[0],HIGH);
    digitalWrite(dig2[1],LOW);
  }
  if(k==1){
     digitalWrite(dig2[0],LOW);
     digitalWrite(dig2[1],HIGH);
  }
  if(n==0){
    for(int i=0;i<4;i++)
      digitalWrite(input[i],LOW);
  }
  if(n==1){
    digitalWrite(input[0],HIGH); 
    for(int i=1;i<4;i++)
      digitalWrite(input[i],LOW);
  }
  if(n==2){
    digitalWrite(input[0],LOW);
    digitalWrite(input[1],HIGH);
    digitalWrite(input[2],LOW);
    digitalWrite(input[3],LOW);
  }
  if(n==3){
    digitalWrite(input[0],HIGH);
    digitalWrite(input[1],HIGH);
    digitalWrite(input[2],LOW);
    digitalWrite(input[3],LOW);  
  }
  if(n==4){
    digitalWrite(input[0],LOW);
    digitalWrite(input[1],LOW);
    digitalWrite(input[2],HIGH);
    digitalWrite(input[3],LOW);
  }
    if(n==5){
    digitalWrite(input[0],HIGH);
    digitalWrite(input[1],LOW);
    digitalWrite(input[2],HIGH);
    digitalWrite(input[3],LOW);
  }
    if(n==6){
    digitalWrite(input[0],LOW);
    digitalWrite(input[1],HIGH);
    digitalWrite(input[2],HIGH);
    digitalWrite(input[3],LOW);
  }
    if(n==7){
    digitalWrite(input[0],HIGH);
    digitalWrite(input[1],HIGH);
    digitalWrite(input[2],HIGH);
    digitalWrite(input[3],LOW);
  }
    if(n==8){
    digitalWrite(input[0],LOW);
    digitalWrite(input[1],LOW);
    digitalWrite(input[2],LOW);
    digitalWrite(input[3],HIGH);
  }
    if(n==9){
    digitalWrite(input[0],HIGH);
    digitalWrite(input[1],LOW);
    digitalWrite(input[2],LOW);
    digitalWrite(input[3],HIGH);
  }
}
