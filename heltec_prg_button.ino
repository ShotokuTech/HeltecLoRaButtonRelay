int PRGButton = 0;
int x = 0;
//#define BUFFER_SIZE                                 30 
//char txpacket[BUFFER_SIZE];
 
String txpacket = "RelayOneOff";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
delay(500);
pinMode(PRGButton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int PRGbuttonState = digitalRead(PRGButton);
if(PRGbuttonState == 0){
  x = 1 - x;

if(x == 1)
{
  txpacket = "RelayOneOn";
}
if(x == 0)
{
  txpacket = "RelayOneOff";
}
  Serial.println(txpacket);
delay(1000);
}
}