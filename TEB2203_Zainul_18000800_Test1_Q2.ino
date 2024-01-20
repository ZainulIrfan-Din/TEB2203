// C++ code
//

int H = HIGH;			//declaration variables
int L = LOW;
int s1, s2, s3, s4;
int inPin2 = 2;
int inPin3 = 3;
int inPin4 = 4;
int inPin5 = 5;
int dly = 250;

void setup()
{
  
    for(int i=8;i<12;i++){			//declare led as output
    pinMode(i, OUTPUT); 
	} 

    for(int i=8;i<12;i++){			//declare led to start as on
    digitalWrite(i, H); 
	} 

}

void loop()	//Question 2
{
  s1 = digitalRead(inPin2);		//declare switch to be input
  s2 = digitalRead(inPin3);
  s3 = digitalRead(inPin4);
  s4 = digitalRead(inPin5);
  
  if(s1 == L){    				//if switch 1 pressed, L
    digitalWrite(8, L);
    delay(dly);
    digitalWrite(8, H);
  }
  else if(s2 == L){
    for(int i=0;i<2;i++){
    delay(dly);
    digitalWrite(9, L);
    delay(dly);
    digitalWrite(9, H);
	}
  digitalWrite(9, H);
  }
  else if(s3 == L){
    for(int i=0;i<3;i++){
    delay(dly);
    digitalWrite(10, L);
    delay(dly);
    digitalWrite(10, H);
	}
  digitalWrite(10, H);
  }
  else if(s4 == L){
    for(int i=0;i<4;i++){
    delay(dly);
    digitalWrite(11, L);
    delay(dly);
    digitalWrite(11, H);
	}
  digitalWrite(11, H);
  }
}