#include "disp.h"
char var1 = 'A';
byte var2 = 255;
int var3 = -32768;
unsigned int var4 = 65535;
long var5 =  -2147483648l;
unsigned long var6 = 4294967295ul;
float var7 = 1.23456;
String var8 = "Hello";

void setup() {

  Serial.begin(115200);
  disp(var1);
  disp(var2);
  disp(var3);
  disp(var4);
  disp(var5);
  disp(var6);
  disp(var7);
  disp(var8);

}

void loop() {

}
