#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>

char auth[]="KR1vnSlLKIAEpXKNQPMtuG25Xca-IAYE";
char ssid[]= "ankan";
char pass[] = "nevergiveup1998";



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
}
