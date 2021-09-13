#include <Arduino.h>
#include "Motor.h"

int hitrost = 30;
Motor servo1(NEGATIVNO), servo2(NEGATIVNO), servo3(NEGATIVNO), servo4(POZITIVNO), servo5(POZITIVNO), servo6(POZITIVNO), servo7(POZITIVNO), servo8(NEGATIVNO);
Motor servo9(POZITIVNO), servo10(POZITIVNO), servo11(NEGATIVNO), servo12(NEGATIVNO), servo13(POZITIVNO), servo14(POZITIVNO);

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

void premik(int kot1, int kot2, int kot3, int kot4, int kot5, int kot6)
{
	int najvecji = 0;
	int tab[6];

	tab[0] = kot1;
	tab[1] = kot2;
	tab[2] = kot3;
	tab[3] = kot4;
	tab[4] = kot5;
	tab[5] = kot6;

	for (int i = 0; i < 6; i++) {
		if (abs(tab[i]) > najvecji && abs(tab[i]) <= 180)
			najvecji = abs(tab[i]);
	}

	for (int i = 0; i < najvecji; i++) {
		//1
		if (kot1 < 0) {
			if (i < kot1 * -1)
				servo9--;
		}
		else {
			if (i < kot1)
				servo9++;
		}

		//2
		if (kot2 < 0) {
			if (i < kot2 * -1)
				servo10--;
		}
		else {
			if (i < kot2)
				servo11++;
		}

		//3
		if (kot3 < 0) {
			if (i < kot3 * -1)
				servo12--;
		}
		else {
			if (i < kot3)
				servo12++;
		}

		//4
		if (kot4 < 0) {
			if (i < kot4 * -1)
				servo13--;
		}
		else {
			if (i < kot4)
				servo13++;
		}

		//5
		if (kot5 < 0) {
			if (i < kot5 * -1)
				servo14--;
		}
		else {
			if (i < kot5)
				servo14++;
		}
		delay(hitrost);
	}
}


//////////////////////////////////////////

void premik(int kot1, int kot2, int kot3, int kot4, int kot5, int kot6, int kot7, int kot8, int kot9, int kot10, int kot11, int kot12, int kot13, int kot14)
{
	int najvecji = 0;
	int tab[14];

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

	for (int i = 0; i < 14; i++) {
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
		delay(hitrost);
	}
}
