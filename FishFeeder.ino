#include <Servo.h>

void balayement(void);
void decalage(void);

Servo servo1; //soulèvement
Servo servo2; //mouvement du bras

signed short pinservo1 = 3;
signed short pinservo2 = 7;
signed short angle1, angle2;

void setup() {

    servo1.attach(pinservo1);
    servo2.attach(pinservo2);
    
    servo1.write(90);
    servo2.write(0);

    angle2 = 170;


}

void loop() {

    balayement(angle2);
    delay(1000);
    decalage(angle2);
    delay(1000);
    
}

void balayement(signed short angle2)
{
    servo2.write(180);
    delay(1000);
    // servo2.write(angle2); useless
}

void decalage(signed short angle2)
{
    servo1.write(0);
    delay(500);
    angle2 = angle2 - 10;
    servo2.write(angle2);
    servo1.write(90);
}

