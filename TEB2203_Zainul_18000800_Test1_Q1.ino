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

    for(int i=8;i<12;i++){		//declare led to start as off
    digitalWrite(i, L); 
	}
}

void loop()		//Question 1
{
  s1 = digitalRead(inPin2);		//declare switch to be input
  s2 = digitalRead(inPin3);
  s3 = digitalRead(inPin4);
  s4 = digitalRead(inPin5);
  
  if(s1 == L){					//if switch 1 pressed, LED 8 lit
    digitalWrite(8, H);
  }
  else if(s2 ==L){
    digitalWrite(9, H);
  }
  else if(s3 == L){
    digitalWrite(10, H);
  }
  else if(s4 == L){
    digitalWrite(11, H);
  }
  else
    for(int i=8;i<12;i++){		//if no switch pressed, no LED lit
    digitalWrite(i, L); 
	}
}