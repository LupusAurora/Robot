/*


  Zadnja stran
  _________
  |       |
  |       |
  |_     _|
  |3|___|0|

   4     1

  +5-   +2-


  Desna stran

  ---->

   |
   |
  _|
  | |
  -0+

  +1-

  2

*/



#include <Servo.h>



int defaultHitrost = 15;

struct ServoMotor {
  Servo servo;
  int kot = 90;
};


ServoMotor servo;
ServoMotor servo1;
ServoMotor servo2;
ServoMotor servo3;
ServoMotor servo4;
ServoMotor servo5;

void setup() {
  servo.servo.attach(3);
  servo1.servo.attach(5);
  servo2.servo.attach(6);
  servo3.servo.attach(9);
  servo4.servo.attach(10);
  servo5.servo.attach(11);
  reset();

  // se nagne levo
  premik(servo5, 25, 0);
  
  // dvigne desno nogo
  premikDveh(servo, 45, servo1, 30, 0);

  //se nagne naprej z levo nogo
  premik(servo4, 15, 0);

  // se nagne na sredino
  premik(servo5, -25, 0);

  // se nagne desno z drugo nogo
  premik(servo2, -25, 0);

  // zravna desno nogo
  premikDveh(servo, -45, servo1, -30, 0);

  // zravna levo nogo
  premik(servo4, -15, 0);



  // dvigne levo nogo
  premikDveh(servo3, -45, servo4, -30, 0);

  //se nagne naprej z desno nogo
  premik(servo1, -15, 0);

  // se nagne na sredino
  premik(servo2, 25, 0);

  // se nagne levo z drugo nogo
  premik(servo5, 25, 0);

  // zravna levo nogo
  premikDveh(servo3, 45, servo4, 30, 0);

  // zravna desno nogo
  premik(servo1, 15, 0);          
}



void reset ()
{
  servo.servo.write(90);
  servo1.servo.write(90);
  servo2.servo.write(90);
  servo3.servo.write(90);
  servo4.servo.write(90);
  servo5.servo.write(90);
}



void premik (ServoMotor &kateri, int kot, int hitrost)      // hitrost = delay v ms (default 30)
{
  int i = 0;
  if (hitrost == 0)
    hitrost = defaultHitrost;

  if (kot > 0) {
    for (int pos = kateri.kot; i <= kot; pos++, i++) {
      kateri.servo.write(pos);
      delay(hitrost);
    }
  }

  else {
    for (int pos = kateri.kot; i >= kot; pos--, i--) {
      kateri.servo.write(pos);
      delay(hitrost);
    }
  }
  
   kateri.kot += kot;
   
}



void premikDveh (ServoMotor &kateri1, int kot1, ServoMotor &kateri2, int kot2, int hitrost)      // hitrost = delay v ms (default 30)
{
  int vecjiKot;

  if (hitrost == 0)
    hitrost = defaultHitrost;



  if (kot1 > 0 && kot2 > 0){
    if (kot1 < kot2)
      vecjiKot = kot2;
  
    else
      vecjiKot = kot1;  
  }
  
  else if (kot1 < 0 && kot2 > 0){
    if (kot1 * -1 < kot2)
      vecjiKot = kot2;
  
    else
      vecjiKot = kot1 * -1;  
  }

  else if (kot1 > 0 && kot2 < 0){
    if (kot1 < kot2 * -1)
      vecjiKot = kot2 * -1;
  
    else
      vecjiKot = kot1;  
  }

  if (kot1 < 0 && kot2 < 0){
    if (kot1 * -1 < kot2 * -1)
      vecjiKot = kot2 * -1;
  
    else
      vecjiKot = kot1 * -1;
  }


  int pos1 = kateri1.kot;
  int pos2 = kateri2.kot;

  if (kot1 > 0 && kot2 > 0) {
    for (int i = 0; i <= vecjiKot; pos1++, pos2++, i++) {
      if (i <= kot1)
        kateri1.servo.write(pos1);
      if (i <= kot2)
        kateri2.servo.write(pos2);

      delay(hitrost);
    }
  }


  else if (kot1 < 0 && kot2 < 0) {
    for (int i = 0; i <= vecjiKot; pos1--, pos2--, i++) {
      if (i <= kot1 * -1)
        kateri1.servo.write(pos1);
      if (i <= kot2 * -1)
        kateri2.servo.write(pos2);

      delay(hitrost);
    }
  }

  else if (kot1 > 0 && kot2 < 0) {
    for (int i = 0; i <= vecjiKot; pos1++, pos2--, i++) {
      if (i <= kot1)
        kateri1.servo.write(pos1);
      if (i <= kot2 * -1)
        kateri2.servo.write(pos2);

      delay(hitrost);
    }
  }

  else if (kot1 < 0 && kot2 > 0) {
    for (int i = 0; i <= vecjiKot; pos1--, pos2++, i++) {
      if (i <= kot1 * -1)
        kateri1.servo.write(pos1);
      if (i <= kot2)
        kateri2.servo.write(pos2);

      delay(hitrost);
    }
  }


  kateri1.kot += kot1;

  kateri2.kot += kot2;

}



void desnaNoga ()
{
  // dvigne desno nogo
  premikDveh(servo, 45, servo1, 30, 0);

  //se nagne naprej z levo nogo
  premik(servo4, 15, 0);

  // se nagne na sredino
  premik(servo5, -25, 0);

  // se nagne desno z drugo nogo
  premik(servo2, -25, 0);

  // zravna desno nogo
  premikDveh(servo, -45, servo1, -30, 0);

  // zravna levo nogo
  premik(servo4, -15, 0);

}



void levaNoga ()
{
  // dvigne levo nogo
  premikDveh(servo3, -45, servo4, -30, 0);

  //se nagne naprej z desno nogo
  premik(servo1, -15, 0);

  // se nagne na sredino
  premik(servo2, 25, 0);

  // se nagne levo z drugo nogo
  premik(servo5, 25, 0);

  // zravna levo nogo
  premikDveh(servo3, 45, servo4, 30, 0);

  // zravna desno nogo
  premik(servo1, 15, 0); 

}



void loop() {

  desnaNoga();
  levaNoga();
}



