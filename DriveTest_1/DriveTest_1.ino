

// declaring valiables
int drive_pin_right = 9;
int drive_pin_left = 10;
#define DRIVE 255;
#define HALT 0;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(drive_pin_left, OUTPUT);
  pinMode(drive_pin_right, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

    //turning the pins on
    analogWrite(drive_pin_right, DRIVE);
    analogWrite(drive_pin_left, DRIVE);

    // waiting 2 seconds before turning off
    delay(2000);

    //test for git hub

    // turning pins off
    analogWrite(drive_pin_right, HALT);
    analogWrite(drive_pin_left, HALT);


    // waiting 2 seconds before looping again
    delay(2000);


}
