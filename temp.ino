void setup {
Serial.begin(9600)

}

void loop {
int temp1 = analog.read(A0);
int temp2 = analog.read(A1);
Serial.print("Temperatura sensor 1 i 2: ");
Serial.println(temp1);
Serial.println(temp2);
delay(100);





}
