#include <Arduino.h>
#include <LedControl.h>


#pragma region ones

byte one[] = {
  B00001111,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000
};

byte two[] = {
  B00001000,
  B00001000,
  B00001111,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000
};

byte three[] = {
  B00001100,
  B00001010,
  B00001001,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000
};

byte four[] = {
  B00001001,
  B00001010,
  B00001100,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000
};

byte five[] = {
  B00001111,
  B00001010,
  B00001100,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000
};

byte six[] = {
  B00001001,
  B00001001,
  B00001001,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000
};

byte seven[] = {
  B00001111,
  B00001001,
  B00001001,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000
};

byte eight[] = {
  B00001001,
  B00001001,
  B00001111,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000
};

byte nine[] = {
  B00001111,
  B00001001,
  B00001111,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000
};

#pragma endregion ones

#pragma region tens
byte ten[] = {
  B11110000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000
};

byte twenty[] = {
  B00010000,
  B00010000,
  B11110000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000
};


byte thirty[] = {
  B00110000,
  B01010000,
  B10010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000
};

byte forty[] = {
  B10010000,
  B01010000,
  B00110000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000
};

byte fifty[] = {
  B11110000,
  B01010000,
  B00110000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000
};

byte sixty[] = {
  B10010000,
  B10010000,
  B10010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000
};

byte seventy[] = {
  B11110000,
  B10010000,
  B10010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000
};

byte eighty[] = {
  B10010000,
  B10010000,
  B11110000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000
};

byte ninety[] = {
  B11110000,
  B10010000,
  B11110000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000
};

#pragma endregion tens

#pragma region hundreds
byte oneHnd[] = {
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001111
};

byte twoHnd[] = {
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001111,
  B00001000,
  B00001000
};

byte threeHnd[] = {
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001001,
  B00001010,
  B00001100
};

byte fourHnd[] = {
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00001100,
  B00001010,
  B00001001
};
#pragma endregion hundreds

byte oneTh[] = {
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B11110000
};

byte twoTh[] = {
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B11110000,
  B00010000,
  B00010000
};

byte nineteenthirtyeight[] {
  B00111001,
  B01011001,
  B10011111,
  B00011000,
  B00011000,
  B00011111,
  B00011001,
  B11111111
};


LedControl ldc = LedControl(11, 13, 10, 1);

void printNumber(byte *num) {
  for (int i = 0; i < 8; i++) {
    ldc.setRow(0, i, num[i]);
  }
}

void printTens(byte *num) {
   for (int i = 0; i < 4; i++) {
    ldc.setRow(0, i, num[i]);
  }
}

void printOnes(byte *num) {
   for (int i = 0, j = 4; i < 4 && j < 8; i++, j++) {
    ldc.setRow(0, i, num[i]);
  }
}


void printOness() {
  printNumber(one);
  Serial.println("One");
  delay(2000);

  printNumber(two);
  Serial.println("two");
  delay(2000);

  printNumber(three);
  Serial.println("three");
  delay(2000);
  
  printNumber(four);
  Serial.println("four");
  delay(2000);

  printNumber(five);
  Serial.println("five");
  delay(2000);

  printNumber(six);
  Serial.println("six");
  delay(2000);

  printNumber(seven);
  Serial.println("seven");
  delay(2000);

  printNumber(eight);
  Serial.println("eight");
  delay(2000);

  printNumber(nine);
  Serial.println("nine");
  delay(2000);
}

void setup() {
  ldc.shutdown(0, false);
  ldc.setIntensity(0, 8);   //set brightness to medium
  ldc.clearDisplay(0);
  Serial.begin(9600);
  printNumber(nineteenthirtyeight);
}

void loop() {
  // draw glyphs
}