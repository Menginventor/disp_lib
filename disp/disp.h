#define VAR_NAME(Variable) (#Variable)
#define disp(VAR) disp_var(#VAR,VAR)
/*
 * based on VAR_NAME(Variable) (#Variable)
Varible display library
Support
char
byte
int
unsigned int
long
unsigned long
float
String
*/

void disp_var(String var_name,char var){
  Serial.print("<char> ");
  Serial.print(var_name);
  Serial.print(" = ");
  Serial.println(var);
}
void disp_var(String var_name,byte var){
  Serial.print("<byte> ");
  Serial.print(var_name);
  Serial.print(" = ");
  Serial.println(var);
}
void disp_var(String var_name,int var){
  Serial.print("<int> ");
  Serial.print(var_name);
  Serial.print(" = ");
  Serial.println(var);
}
void disp_var(String var_name,unsigned int var){
  Serial.print("<unsigned int> ");
  Serial.print(var_name);
  Serial.print(" = ");
  Serial.println(var);
}
void disp_var(String var_name,long var){
  Serial.print("<long> ");
  Serial.print(var_name);
  Serial.print(" = ");
  Serial.println(var);
}
void disp_var(String var_name,unsigned long var){
  Serial.print("<unsigned long> ");
  Serial.print(var_name);
  Serial.print(" = ");
  Serial.println(var);
}
void disp_var(String var_name,float var){
  Serial.print("<float> ");
  Serial.print(var_name);
  Serial.print(" = ");
  Serial.println(var);
}
void disp_var(String var_name,String var){
  Serial.print("<String> ");
  Serial.print(var_name);
  Serial.print(" = ");
  Serial.println(var);
}
