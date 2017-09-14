// -----------------------------------------------
// Controlling the tangible over the internet
// -----------------------------------------------


int dig0 = D0;    // relais on digital out  
int dig1 = D1;
int dig2 = D2;       
int dig3 = D3;
int dig4 = D4;
int dig5 = D5;
int dig6 = D7;

void setup()
{
   // Pin configuration
   pinMode(dig0, OUTPUT);
   pinMode(dig1, OUTPUT);
   pinMode(dig2, OUTPUT);
   pinMode(dig3, OUTPUT);
   pinMode(dig4, OUTPUT);
   pinMode(dig5, OUTPUT);
   pinMode(dig6, OUTPUT);
 
  // This is saying that when we ask the cloud for the function "led", it will employ the function relaisToggle() from this app.
   Particle.function("led",relaisToggle);
   
   // Set Pins to LOW when it starts 
   digitalWrite(dig0, LOW);
   digitalWrite(dig1, LOW);
   digitalWrite(dig2, LOW);
   digitalWrite(dig3, LOW);
   digitalWrite(dig4, LOW);
   digitalWrite(dig5, LOW);
   digitalWrite(dig6, LOW);

}

int relaisToggle(String command) {

    if (command=="D2") {
        digitalWrite(dig2,HIGH);
        return 2;
        }
        
    if(command=="D2LOW"){
        digitalWrite(dig2, LOW);
        return 22;
        }

    if(command=="D0"){
        digitalWrite(dig0, HIGH);
        return 0;
        }
        
    if(command=="D0LOW"){
        digitalWrite(dig0, LOW);
        return 00;
    }
    
       if(command=="D1"){
        digitalWrite(dig1, HIGH);
        return 1;
        }
        
    if(command=="D1LOW"){
        digitalWrite(dig1, LOW);
        return 11;
    }
      if(command=="D3"){
        digitalWrite(dig3, HIGH);
        return 3;
        }
        
    if(command=="D3LOW"){
        digitalWrite(dig3, LOW);
        return 33;
    }
        
    if(command=="D4"){
        digitalWrite(dig4, HIGH);
        return 4;
        }
    
    if(command=="D4LOW"){
        digitalWrite(dig4, LOW);
        return 44;
    }
        if(command=="D5"){
        digitalWrite(dig5, HIGH);
        return 5;
        }
    
    if(command=="D5LOW"){
        digitalWrite(dig5, LOW);
        return 55;
    }  
          if(command=="D6"){
        digitalWrite(dig6, HIGH);
        return 6;
        }
    
    if(command=="D6LOW"){
        digitalWrite(dig6, LOW);
        return 66;
    } 
        
    if (command=="None") {
        digitalWrite(dig0,LOW);
        digitalWrite(dig1,LOW);
        digitalWrite(dig2,LOW);
        digitalWrite(dig3,LOW);
        digitalWrite(dig4,LOW);
        digitalWrite(dig5,LOW);
        digitalWrite(dig6,LOW);
        return 000;
        }
    else {
        return -2;
    }
}
