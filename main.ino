/*

This is a great algorithm performance to control a bar graph in arduino with a potentiometer.

*/

#define potentiometer_pin A0
int potentiometer_value;
int led[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

void setup() {
  
  pinMode(potentiometer_pin, INPUT);

  for (int i = 0; i < 10; i++){
    pinMode(led[i], OUTPUT); // Setting the 10 leds of bar graph
  }
}

void loop() {

  potentiometer_value = analogRead(potentiometer_pin);

  if (potentiometer_value > 93) {
    if (potentiometer_value > 186) {
      if (potentiometer_value > 279) {
        if (potentiometer_value > 372) {
          if (potentiometer_value > 465) {
            if (potentiometer_value > 558) {
              if (potentiometer_value > 651) {
                if (potentiometer_value > 744) {
                  if (potentiometer_value > 837) {
                    if (potentiometer_value > 930) {
                      digitalWrite(led[9], HIGH);
                    } else {
                      digitalWrite(led[9], LOW);
                      digitalWrite(led[8], HIGH);
                    }
                  } else {
                    digitalWrite(led[8], LOW);
                    digitalWrite(led[7], HIGH);
                  }
                } else {
                  digitalWrite(led[7], LOW);
                  digitalWrite(led[6], HIGH);
                }
              } else {
                digitalWrite(led[6], LOW);
                digitalWrite(led[5], HIGH);
              }
            } else {
              digitalWrite(led[5], LOW);
              digitalWrite(led[4], HIGH);
            }
          } else {
            digitalWrite(led[4], LOW);
            digitalWrite(led[3], HIGH);
          }
        } else {
          digitalWrite(led[3], LOW);
          digitalWrite(led[2], HIGH);
        }
      } else {
        digitalWrite(led[2], LOW);
        digitalWrite(led[1], HIGH);
      }
    } else {
      digitalWrite(led[1], LOW);
      digitalWrite(led[0], HIGH);
    }
  } else {
    digitalWrite(led[0], LOW);
  }
}
