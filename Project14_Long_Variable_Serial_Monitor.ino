double number = 0;
double exponent =0;
double a = 0;
void setup()
{
Serial.begin(9600);
}
void loop()
{
number = 0;
Serial.flush();
while (Serial.available() == 0)
{
}
while (Serial.available() > 0)
{
number = number * 10;
a = Serial.read() - '0';
number = number + a;
delay(5);
}
exponent = 0;
Serial.flush();
while (Serial.available() == 0)
{
}
while (Serial.available() > 0)
{
exponent = exponent * 10;
a = Serial.read() - '0';
exponent = exponent + a;
delay(5);
}

Serial.print("Your number is: ");
Serial.println(number);
Serial.print("Your exponent is: ");
Serial.println(exponent);
Serial.print(number);
Serial.print(" to the power of ");
Serial.print(exponent);
Serial.print(" is ");
number = pow(number, exponent);
Serial.println(number);
}