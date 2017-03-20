#include <Servo.h>
int x = 0;
int button = 0;
Servo myservo;
void setup() {
  myservo.attach(11);

}
void loop() {

  myservo.write(0);
}

for (x = 0;
     x <= 180;
     x += 1) {
  myservo.write(pos);
  delay(15);
     }
     
for (x = 180; x >= 0; x -= 1) {
  myservo.write(pos);
  delay(15);
}
}
