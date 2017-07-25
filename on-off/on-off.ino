/* =======================
 *  sufyan97.blogspot.co.id
 *  on-off LED
 ===========================*/
const int LEDH = 6;
const int LEDM = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDH,OUTPUT);
  pinMode(LEDM,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDH,HIGH);
  digitalWrite(LEDM,LOW);
  delay(500);
  digitalWrite(LEDH,LOW);
  digitalWrite(LEDM,HIGH);
  delay(500);
}
