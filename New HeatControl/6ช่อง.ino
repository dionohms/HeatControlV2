#define BLYNK_TEMPLATE_ID "TMPLG7UX1V2X"
#define BLYNK_DEVICE_NAME "Heat Control"

#define BLYNK_FIRMWARE_VERSION "0.1.0"

#define BLYNK_PRINT Serial

//#define BLYNK_DEBUG
#define APP_DEBUG
#define USE_WROVER_BOARD
#include "BlynkEdgent.h"

const int relay1 = 33;
const int relay2 = 25;
const int relay3 = 26;
const int relay4 = 27;
const int relay5 = 16;
const int relay6 = 17;


void setup()
{
  Serial.begin(115200);
  delay(100);
  BlynkEdgent.begin();
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  pinMode(relay5, OUTPUT);
  pinMode(relay6, OUTPUT);

 
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
  digitalWrite(relay5, HIGH);
  digitalWrite(relay6, HIGH);

}

void loop() {
BlynkEdgent.run();
}

BLYNK_WRITE(V1) {
  // Read the value of the virtual pin (0 or 1):
  int butValue = param.asInt();
  // Turn the corresponding relay on or off based on the value of the virtual pin:
  if (butValue == 0) {
  digitalWrite(relay1, HIGH);
  } else {
  digitalWrite(relay1, LOW);
  }
}

BLYNK_WRITE(V2) {
  int butValue = param.asInt();
  if (butValue == 0) {
  digitalWrite(relay2, HIGH);
  } else {
  digitalWrite(relay2, LOW);
  }
}

BLYNK_WRITE(V3) {
  int butValue = param.asInt();
  if (butValue == 0) {
  digitalWrite(relay3, HIGH);
  } else {
  digitalWrite(relay3, LOW);
  }
}

BLYNK_WRITE(V4) {
  int butValue = param.asInt();
  if (butValue == 0) {
  digitalWrite(relay4, HIGH);
  } else {
  digitalWrite(relay4, LOW);
  }
}

BLYNK_WRITE(V5) {
  int butValue = param.asInt();
  if (butValue == 0) {
  digitalWrite(relay5, HIGH);
  } else {
  digitalWrite(relay5, LOW);
  }
}

BLYNK_WRITE(V6) {
  int butValue = param.asInt();
  if (butValue == 0) {
  digitalWrite(relay6, HIGH);
  } else {
  digitalWrite(relay6, LOW);
  }
}