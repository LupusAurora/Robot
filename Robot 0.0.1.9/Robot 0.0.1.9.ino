#include "Motor.h"

//za MEGO potrebujes SERIAL1
Motor servo1(NEGATIVNO), servo2(NEGATIVNO), servo3(NEGATIVNO), servo4(POZITIVNO), servo5(POZITIVNO), servo6(POZITIVNO), servo7(POZITIVNO), servo8(NEGATIVNO);
Motor servo9(NEGATIVNO), servo10(POZITIVNO), servo11(NEGATIVNO), servo12(NEGATIVNO), servo13(POZITIVNO), servo14(POZITIVNO), servo15(POZITIVNO), servo16(POZITIVNO);

int hitrost = 20;
int hitrost1 = 8;
bool prvi = true;
float vrednostNapetosti;
int neki =0;
unsigned long time;
bool stop = false;
String isConnected;

//////////////////////////////////////////

void premik(int kot1, int kot2, int kot3, int kot4, int kot5, int kot6, int kot7, int kot8)
{
  int najvecji = 0;
  int tab[8];

  tab[0] = kot1;
  tab[1] = kot2;
  tab[2] = kot3;
  tab[3] = kot4;
  tab[4] = kot5;
  tab[5] = kot6;
  tab[6] = kot7;
  tab[7] = kot8;

  for (int i = 0; i < 8; i++) {
    if (abs(tab[i]) > najvecji && abs(tab[i]) <= 180)
      najvecji = abs(tab[i]);
  }
  for (int i = 0; i < najvecji; i++) {
    //1
    if (kot1 < 0) {
      if (i < kot1 * -1)
        servo1--;
    }
    else {
      if (i < kot1)
        servo1++;
    }

    //2
    if (kot2 < 0) {
      if (i < kot2 * -1)
        servo2--;
    }
    else {
      if (i < kot2)
        servo2++;
    }

    //3
    if (kot3 < 0) {
      if (i < kot3 * -1)
        servo3--;
    }
    else {
      if (i < kot3)
        servo3++;
    }

    //4
    if (kot4 < 0) {
      if (i < kot4 * -1)
        servo4--;
    }
    else {
      if (i < kot4)
        servo4++;
    }

    //5
    if (kot5 < 0) {
      if (i < kot5 * -1)
        servo5--;
    }
    else {
      if (i < kot5)
        servo5++;
    }

    //6
    if (kot6 < 0) {
      if (i < kot6 * -1)
        servo6--;
    }
    else {
      if (i < kot6)
        servo6++;
    }

    //7
    if (kot7 < 0) {
      if (i < kot7 * -1)
        servo7--;
    }
    else {
      if (i < kot7)
        servo7++;
    }

    //8
    if (kot8 < 0) {
      if (i < kot8 * -1)
        servo8--;
    }
    else {
      if (i < kot8)
        servo8++;
    }
    delay(hitrost);
  }
}

//////////////////////////////////////////



void premik2(int kot9, int kot10, int kot11, int kot12, int kot13, int kot14, int kot15, int kot16)
{
  int najvecji = 0;
  int tab[8];

  tab[0] = kot9;
  tab[1] = kot10;
  tab[2] = kot11;
  tab[3] = kot12;
  tab[4] = kot13;
  tab[5] = kot14;
  tab[6] = kot15;
  tab[7] = kot16;

  for (int i = 0; i < 8; i++) {
    if (abs(tab[i]) > najvecji && abs(tab[i]) <= 180)
      najvecji = abs(tab[i]);
  }
  for (int i = 0; i < najvecji; i++) {
    //1
    if (kot9 < 0) {
      if (i < kot9 * -1)
        servo9--;
    }
    else {
      if (i < kot9)
        servo9++;
    }

    //2
    if (kot10 < 0) {
      if (i < kot10 * -1)
        servo10--;
    }
    else {
      if (i < kot10)
        servo10++;
    }

    //3
    if (kot11 < 0) {
      if (i < kot11 * -1)
        servo11--;
    }
    else {
      if (i < kot11)
        servo11++;
    }

    //4
    if (kot12 < 0) {
      if (i < kot12 * -1)
        servo12--;
    }
    else {
      if (i < kot12)
        servo12++;
    }

    //5
    if (kot13 < 0) {
      if (i < kot13 * -1)
        servo13--;
    }
    else {
      if (i < kot13)
        servo13++;
    }

    //6
    if (kot14 < 0) {
      if (i < kot14 * -1)
        servo14--;
    }
    else {
      if (i < kot14)
        servo14++;
    }

    //7
    if (kot15 < 0) {
      if (i < kot15 * -1)
        servo15--;
    }
    else {
      if (i < kot15)
        servo15++;
    }

    //8
    if (kot16 < 0) {
      if (i < kot16 * -1)
        servo16--;
    }
    else {
      if (i < kot16)
        servo16++;
    }
    delay(hitrost1  );
  }
}





//////////////////////////////////////////


void premik(int kot1, int kot2, int kot3, int kot4, int kot5, int kot6, int kot7, int kot8, int kot9, int kot10, int kot11, int kot12, int kot13, int kot14, int kot15, int kot16)
{
  int najvecji = 0;
  int tab[16];

  tab[0] = kot1;
  tab[1] = kot2;
  tab[2] = kot3;
  tab[3] = kot4;
  tab[4] = kot5;
  tab[5] = kot6;
  tab[6] = kot7;
  tab[7] = kot8;
  tab[8] = kot9;
  tab[9] = kot10;
  tab[10] = kot11;
  tab[11] = kot12;
  tab[12] = kot13;
  tab[13] = kot14;
  tab[14] = kot13;
  tab[15] = kot14;

  for (int i = 0; i < 16; i++) {
    if (abs(tab[i]) > najvecji && abs(tab[i]) <= 180)
      najvecji = abs(tab[i]);
  }
  for (int i = 0; i < najvecji; i++) {
    //1
    if (kot1 < 0) {
      if (i < kot1 * -1)
        servo1--;
    }
    else {
      if (i < kot1)
        servo1++;
    }

    //2
    if (kot2 < 0) {
      if (i < kot2 * -1)
        servo2--;
    }
    else {
      if (i < kot2)
        servo2++;
    }

    //3
    if (kot3 < 0) {
      if (i < kot3 * -1)
        servo3--;
    }
    else {
      if (i < kot3)
        servo3++;
    }

    //4
    if (kot4 < 0) {
      if (i < kot4 * -1)
        servo4--;
    }
    else {
      if (i < kot4)
        servo4++;
    }

    //5
    if (kot5 < 0) {
      if (i < kot5 * -1)
        servo5--;
    }
    else {
      if (i < kot5)
        servo5++;
    }

    //6
    if (kot6 < 0) {
      if (i < kot6 * -1)
        servo6--;
    }
    else {
      if (i < kot6)
        servo6++;
    }

    //7
    if (kot7 < 0) {
      if (i < kot7 * -1)
        servo7--;
    }
    else {
      if (i < kot7)
        servo7++;
    }

    //8
    if (kot8 < 0) {
      if (i < kot8 * -1)
        servo8--;
    }
    else {
      if (i < kot8)
        servo8++;
    }

    //9
    if (kot9 < 0) {
      if (i < kot9 * -1)
        servo9--;
    }
    else {
      if (i < kot9)
        servo9++;
    }

    //10
    if (kot10 < 0) {
      if (i < kot10 * -1)
        servo10--;
    }
    else {
      if (i < kot10)
        servo10++;
    }

    //11
    if (kot11 < 0) {
      if (i < kot11 * -1)
        servo11--;
    }
    else {
      if (i < kot11)
        servo11++;
    }

    //12
    if (kot12 < 0) {
      if (i < kot12 * -1)
        servo12--;
    }
    else {
      if (i < kot12)
        servo12++;
    }

    //13
    if (kot13 < 0) {
      if (i < kot13 * -1)
        servo13--;
    }
    else {
      if (i < kot13)
        servo13++;
    }

    //14
    if (kot14 < 0) {
      if (i < kot14 * -1)
        servo14--;
    }
    else {
      if (i < kot14)
        servo14++;
    }
    

  //15
    if (kot15 < 0) {
      if (i < kot15 * -1)
        servo15--;
    }
    else {
      if (i < kot15)
        servo15++;
    }
    //16
    if (kot16 < 0) {
      if (i < kot16 * -1)
        servo16--;
    }
    else {
      if (i < kot16)
        servo16++;
    }
    delay(hitrost);
  }
}


//////////////////////////////////////////

int prviKorak()
{
  premik(0,0,0,-40,0,0,0,15);
  premik(0,20,-20,40,0,0,0,0);
  premik(0,0,0,0,0,-20,20,0);
  premik(0,0,0,0,0,0,0,-15);
  premik(0,0,0,15,0,0,0,-40);
  premik(0,-20,20,0,0,40,-40,40);
  premik(0,-20,20,0,0,0,0,0);
  premik(0,0,0,-15,0,0,0,0);
}

//////////////////////////////////////////


void leviKorak()
{

  premik(0,0,0,-40,0,0,0,15);
  premik(0,40,-40,40,0,0,0,0);
  premik(0,0,0,0,0,-40,40,0);
  premik(0,0,0,0,0,0,0,-15);
    
}

//////////////////////////////////////////

void desniKorak()
{
  premik(0,0,0,15,0,0,0,-40);
  premik(0,-40,40,0,0,40,-40,40);
  premik(0,0,0,-15,0,0,0,0);
  
}

//////////////////////////////////////////

void zadnjiKorak()
{
  premik(0,0,0,-40,0,0,0,15);
  premik(0,20,-20,40,0,-20,20,0);
  premik(0,0,0,0,0,0,0,-15);
}


//////////////////////////////////////////


void prviKorakNazaj()
{
  premik(0,0,0,-40,0,0,0,15);
  premik(0,-20,20,40,0,0,0,0);
  premik(0,0,0,0,0,20,-20,0);
  premik(0,0,0,0,0,0,0,-15);
  //premik(0,-10,0,0,0,-10,0,0);
  premik(0,0,0,15,0,0,0,-40);
  premik(0,20,-20,0,0,-40,40,40);
  premik(0,20,-20,0,0,0,0,0);
  premik(0,0,0,-15,0,0,0,0);
}

//////////////////////////////////////////


void leviKorakNazaj()
{

  premik(0,0,0,-40,0,0,0,15);
  premik(0,-40,40,40,0,0,0,0);
  premik(0,0,0,0,0,40,-40,0);
  premik(0,0,0,0,0,0,0,-15);
    
}

//////////////////////////////////////////

void desniKorakNazaj()
{
  premik(0,0,0,15,0,0,0,-40);
  premik(0,40,-40,0,0,-40,40,40);
  premik(0,0,0,-15,0,0,0,0);
  
}


//////////////////////////////////////////


void zadnjiKorakNazaj()
{
  premik(0,0,0,-40,0,0,0,15);
  premik(0,-20,20,40,0,30,-20,0);
  premik(0,0,0,0,0,0,0,-15);
}

//////////////////////////////////////////

void obratLevo()
{
  premik(0,0,0,15,0,0,0,-40);
  premik(0,-15,0,0,0,-15,0,0);
  premik(-30,0,0,0,0,0,0,40);
  hitrost = 50;
  premik(0,0,0,-15,0,0,0,0);
  hitrost = 30;
  premik(0,0,0,-40,0,0,0,15);
  premik(30,0,0,40,0,0,0,0);
  hitrost = 50;
  premik(0,15,0,0,0,15,0,-15);
  hitrost = 30;
}

/////////////////////////////////////////

void obratDesno()
{
  premik(0,0,0,-40,0,0,0,15);
  premik(0,-15,0,0,0,-15,0,0);
  premik(0,0,0,40,-30,0,0,0);
  hitrost = 50;
  premik(0,0,0,0,0,0,0,-15);
  hitrost = 30;
  premik(0,0,0,15,0,0,0,-40);
  premik(0,0,0,0,30,0,0,40);
  hitrost = 50;
  premik(0,15,0,-15,0,15,0,0);
  hitrost = 30;
}



/////////////////////////////////////////////

void korak()
{
  premik(0,0,0,-40,0,0,0,15);
  premik(0,20,-20,40,0,0,0,0);
  premik(0,0,0,0,0,-20,20,0);
  premik(0,0,0,0,0,0,0,-15);
  premik(0,0,0,15,0,0,0,-40);
  premik(0,-20,20,0,0,40,-40,40);
  premik(0,-20,20,0,0,0,0,0);
  premik(0,0,0,-15,0,0,0,0);
  premik(0,0,0,-40,0,0,0,15);
  premik(0,20,-20,40,0,0,0,0);
  premik(0,0,0,0,0,-20,20,0);
  premik(0,0,0,0,0,0,0,-15);  
}

//////////////////////////////////////////

void korakNazaj()
{
  premik(0,0,0,-40,0,0,0,15);
  premik(0,-20,20,40,0,0,0,0);
  premik(0,0,0,0,0,20,-20,0);
  premik(0,0,0,0,0,0,0,-15);
  premik(0,-10,0,0,0,-10,0,0);
  premik(0,0,0,15,0,0,0,-40);
  premik(0,20,-20,0,0,-40,40,40);
  premik(0,20,-20,0,0,0,0,0);
  premik(0,0,0,-15,0,0,0,0);
  premik(0,0,0,-40,0,0,0,15);
  premik(0,-20,20,40,0,0,0,0);
  premik(0,0,0,0,0,20,-20,0);
  premik(0,0,0,0,0,0,0,-15);  
}

//////////////////////////////////////////

void reset()
{
  //Desna noga
  servo1.setKot(99);
  servo2.setKot(89);
  servo3.setKot(86);
  servo4.setKot(84);

  //Leva noga
  servo5.setKot(80);  
  servo6.setKot(97);
  servo7.setKot(84);
  servo8.setKot(89);

   //Desna roka
  servo9.setKot(90);  
  servo10.setKot(90);
  servo11.setKot(90);
  servo12.setKot(90); 
  
   //Leva roka
  servo13.setKot(90);  
  servo14.setKot(90);
  servo15.setKot(90);
  servo16.setKot(90); 
}

//////////////////////////////////////////

void reset90()
{
  //Desna noga
  servo1.setKot(91);
  servo2.setKot(96);
  servo3.setKot(85);
  servo4.setKot(90);

  //Leva noga
  servo5.setKot(95);  
  servo6.setKot(88);
  servo7.setKot(88);
  servo8.setKot(87);


   //Desna roka
  servo9.setKot(90);  
  servo10.setKot(90);
  servo11.setKot(93);
  servo12.setKot(90); 
  
   //Leva roka
  servo13.setKot(98);  
  servo14.setKot(90);
  servo15.setKot(90);
  servo16.setKot(100); 
}




//////////////////////////////////////////

void bluetooth()
{  
  if (Serial.available() > 0){
      neki=Serial.read();
      Serial.write("ACK \n");
      digitalWrite(13,HIGH);
      delay(100);
      digitalWrite(13,LOW);
    if(neki == (int)'w' || neki == (int)'W'){
      korak();  
    /*  
     prviKorak();
     leviKorak();
     desniKorak();
     zadnjiKorak();*/
    }
  
    if(neki == (int)'s' || neki == (int)'S'){
      korakNazaj();
      
     /* prviKorakNazaj();
      leviKorakNazaj();
      desniKorakNazaj();
      zadnjiKorakNazaj();*/
    }
  
    if(neki == (int)'a' || neki == (int)'A')
    {
      obratLevo();
    }
  
    if(neki == (int)'d' || neki == (int)'D')
    {
      obratDesno();
    }
}
 
/*  if(neki == (int)'a' || neki == (int)'A')
  {
    obratLevo();
  }

  if(neki == (int)'d' || neki == (int)'D')
  {
    obratDesno();
  }
  
  if(neki == (int)'c' || neki == (int)'C')
  {
    //dodaj za crouch oziroma kaj podobnega recimo spaga
  }
  
  if(neki == (int)'space' || neki == (int)'space')
  {
    //dodaj za jump xD
  }
  
  if(stop){
    prvi = true;
    stop = false;
 //   reset();
  }

  */
}

//////////////////////////////////////////

float povpVrednost[30]; //tabela ki vsebuje zadnjih 5 vrednosti prebranih iz vhoda A6 s pomocjo katere bomo izracunali povp vrednost napetosti
short int povpSt = 0; // stevec ki ga bomo uporabili za sprehajanje po tabeli
float sestevekPovp = 0; // z pomocjo tega stevca bomo dobili vrednost vseh 5 vrednosti v tableli

void batteryCheck()
{
  povpVrednost[povpSt] = analogRead(A6)*(8.4/1023); //preberemo vrednost iz vhoda A6 in ga zapisemo v tabelo
  povpSt++;

  if(povpSt == 30)
  {
    for(int i=0;i<30;i++)
    sestevekPovp += povpVrednost[i];
    
    vrednostNapetosti = sestevekPovp / 30;

    povpSt = 0;

    //Serial.println(vrednostNapetosti);
    
    if(vrednostNapetosti <= 7.2)
      digitalWrite(13,HIGH);
    else
      digitalWrite(13,LOW);
  }  
}

//////////////////////////////////////////

void premikRoke()
{

  premik2(0,-70,0,0,0,70,0,0);
  premik2(0,0,-60,50,0,0,60,-50);
  premik2(0,0,120,-100,0,0,-120,100);
  premik2(0,0,-120,100,0,0,120,-100);
  premik2(0,0,120,-100,0,0,-120,100);
  premik2(0,0,-120,100,0,0,120,-100);
  premik2(0,0,120,-100,0,0,-120,100);
  premik2(0,0,-120,100,0,0,120,-100);
  premik2(0,70,60,-50,0,-70,-60,50);
  
  
}

//////////////////////////////////////////

//CENTRIRANJE

int neki2 = 0;
bool kateri = false,  start = false;
void centriraje()
{
  if (Serial.available() > 0){

    if(kateri  == false)
    {
      start = false;
      neki=Serial.read();
      kateri = true;
    }
    else 
    {
      neki2 = Serial.read(); 
      kateri = false;
      start = true;
    }

    
  }

  Serial.println((int)neki);
  Serial.println((int)neki2);
  
      
  if(start == true)
    {
      if(neki == '1')
      {
        servo1.setKot((int)neki2);
      }else 
      if(neki == 2)
      {
        servo2.setKot((int)neki2);
      }else if(neki == 3)
      {
        servo3.setKot(neki2);
      }else if(neki == 4)
      {
        servo4.setKot(neki2);
      }else if(neki == 5)
      {
        servo5.setKot(neki2);
      }else if(neki == 54)
      {
        servo6.setKot((int)neki2);
      }else if(neki == 7)
      {
        servo7.setKot(neki2);
      }else if(neki == 8)
      {
        servo8.setKot(neki2);
      }else if(neki == 9)
      {
        servo9.setKot(neki2);
      }else if(neki == 10)
      {
        servo10.setKot(neki2);
      }else if(neki == 11)
      {
        servo11.setKot(neki2);
      }else if(neki == 12)
      {
        servo12.setKot(neki2);
      }else if(neki == 13)
      {
        servo13.setKot(neki2);
      }else if(neki == 14)
      {
        servo14.setKot(neki2);
      }else if(neki == 15)
      {
        servo15.setKot(neki2);
      }else if(neki == 16)
      {
        servo16.setKot(neki2);
      }
      }
}

//////////////////////////////////////////

void sedenje()
{
  premik2(-40,0,0,0,-40,0,0,0);
  premik(0,-10,0,0,0,-10,0,0);
  premik(0,-50,55,0,0,-50,55,0);
  //premik(0,0,15,0,0,0,15,0);
}

//////////////////////////////////////////

void squat()
{
  premik(0,60,-60,0,0,-60,60,0,45,0,0,0,-45,0,0,0);
  premik(0,-60,60,0,0,60,-60,0,-45,0,0,0,45,0,0,0);

  premik(0,-60,60,0,0,60,-60,0,-45,0,0,0,45,0,0,0);
  premik(0,60,-60,0,0,-60,60,0,45,0,0,0,-45,0,0,0);
}

//////////////////////////////////////////

void setup(){ 
/*
 4 5 6   5   1   9 8 7
         6   2
         7   3
         8   4
*/
  Serial.begin(9600);
  
  pinMode(13,OUTPUT); // LED
  pinMode(A6,INPUT); // Branje napetosti na bateriji
  
  //Desna noga
  servo4.setPin(32);    
  servo3.setPin(30);
  servo2.setPin(28);
  servo1.setPin(26);

  //Leva noga  
  servo5.setPin(52);
  servo6.setPin(50);
  servo7.setPin(48);
  servo8.setPin(46);

   //Desna roka  
  servo9.setPin(3);
  servo10.setPin(4);
  servo11.setPin(5);
  servo12.setPin(6);

   //Leva roka  
  servo13.setPin(44);
  servo14.setPin(42);
  servo15.setPin(36);
  servo16.setPin(38);
  
  reset90();

  digitalWrite(13,HIGH);
  delay(1500);
  digitalWrite(13,LOW);

  squat();


  //sedenje();

  
  
  /*prviKorak();
  leviKorak();
  desniKorak();
  zadnjiKorak();
  //hoja naprej
*/

/*
  prviKorakNazaj();
  leviKorakNazaj();
  desniKorakNazaj();
  zadnjiKorakNazaj();

 /* obratDesno(); */

  //premikRoke();

 

 //servo4.setKot(180);
 // servo4.setKot(90);
}

//////////////////////////////////////////

void loop()
{  


  //korak();
  // centriraje();
  //batteryCheck();

 
}


