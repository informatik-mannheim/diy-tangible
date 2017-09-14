// -----------------------------------------------
// Controlling the tangible over the internet
// -----------------------------------------------


int dig0 = D0;    // relais on digital out  
int dig2 = D2; 
int dig5 = D5;
int dig7 = D7;

void setup()
{
   // Pin configuration
   pinMode(dig0, OUTPUT);
   pinMode(dig2, OUTPUT);
   pinMode(dig5, OUTPUT);
   pinMode(dig7, OUTPUT);
 
  // This is saying that when we ask the cloud for the function "led", it will employ the function relaisToggle() from this app.
   Particle.function("led",relaisToggle);
   
   // Set Pins to LOW when it starts 
   digitalWrite(dig0, LOW);
   digitalWrite(dig2, LOW);
   digitalWrite(dig5, LOW);
   digitalWrite(dig7, LOW);

}

int relaisToggle(String command) {

    if (command=="Set Touchcode 1") {
        digitalWrite(dig0,LOW);
        digitalWrite(dig2,LOW);
        digitalWrite(dig5,LOW);
        digitalWrite(dig7,HIGH);
        return 1;
    }
    if (command=="Set Touchcode 2") {
        digitalWrite(dig0,LOW);
        digitalWrite(dig2,HIGH);
        digitalWrite(dig5,LOW);
        digitalWrite(dig7,LOW);
        return 2;
    }
    if (command=="Set Touchcode 3") {
        digitalWrite(dig0,LOW);
        digitalWrite(dig2,LOW);
        digitalWrite(dig5,HIGH);
        digitalWrite(dig7,LOW);
        return 3;
    }    
    if (command=="Set Touchcode 4") {
        digitalWrite(dig0,HIGH);
        digitalWrite(dig2,LOW);
        digitalWrite(dig5,LOW);
        digitalWrite(dig7,LOW);
        return 4;
    }
    if (command=="Set Touchcode 5") {
        digitalWrite(dig0,LOW);
        digitalWrite(dig2,HIGH);
        digitalWrite(dig5,LOW);
        digitalWrite(dig7,HIGH);
        return 5;
    }
    if (command=="Set Touchcode 6") {
        digitalWrite(dig0,LOW);
        digitalWrite(dig2,LOW);
        digitalWrite(dig5,HIGH);
        digitalWrite(dig7,HIGH);
        return 6;
    }
    if (command=="Set Touchcode 7") {
        digitalWrite(dig0,HIGH);
        digitalWrite(dig2,LOW);
        digitalWrite(dig5,HIGH);
        digitalWrite(dig7,LOW);
        return 7;
    }
    if (command=="Set Touchcode 8") {
        digitalWrite(dig0,HIGH);
        digitalWrite(dig2,HIGH);
        digitalWrite(dig5,LOW);
        digitalWrite(dig7,LOW);
        return 8;
    }
    if (command=="Set Touchcode 9") {
        digitalWrite(dig0,HIGH);
        digitalWrite(dig2,LOW);
        digitalWrite(dig5,LOW);
        digitalWrite(dig7,HIGH);
        return 9;
    }    
    if (command=="Set Touchcode 10") {
        digitalWrite(dig0,LOW);
        digitalWrite(dig2,HIGH);
        digitalWrite(dig5,HIGH);
        digitalWrite(dig7,LOW);
        return 10;
    }
    if (command=="Set Touchcode 11") {
        digitalWrite(dig0,LOW);
        digitalWrite(dig2,HIGH);
        digitalWrite(dig5,HIGH);
        digitalWrite(dig7,HIGH);
        return 11;
    }
    if (command=="Set Touchcode 12") {
        digitalWrite(dig0,HIGH);
        digitalWrite(dig2,HIGH);
        digitalWrite(dig5,LOW);
        digitalWrite(dig7,HIGH);
        return 12;
    }
    if (command=="Set Touchcode 13") {
        digitalWrite(dig0,HIGH);
        digitalWrite(dig2,HIGH);
        digitalWrite(dig5,HIGH);
        digitalWrite(dig7,LOW);
        return 13;
    }
    if (command=="Set Touchcode 14") {
        digitalWrite(dig0,HIGH);
        digitalWrite(dig2,LOW);
        digitalWrite(dig5,HIGH);
        digitalWrite(dig7,HIGH);
        return 14;
    }
    if (command=="Set Touchcode 15") {
        digitalWrite(dig0,HIGH);
        digitalWrite(dig2,HIGH);
        digitalWrite(dig5,HIGH);
        digitalWrite(dig7,HIGH);
        return 15;
    }
    if (command=="Set Touchcode 16") {
        digitalWrite(dig0,LOW);
        digitalWrite(dig2,LOW);
        digitalWrite(dig5,LOW);
        digitalWrite(dig7,LOW);
        return 16;
    }
    else {
        return -2;
    }
}