int ledRed1 = 13;
int ledGreen1 = 12;
int ledBlue1 = 11;

int ledRed2 = 10;
int ledGreen2 = 9;
int ledBlue2 = 8;

int ledRed3 = 7;
int ledGreen3 = 6;
int ledBlue3 = 5;

int buttonPin = 4;

int red1;
int green1;
int blue1;

int red2;
int green2;
int blue2;

int red3;
int green3;
int blue3;

int button = 0;

int changed1 = random(1, 7);
int changed2 = random(1, 7);
int changed3 = random(1, 7);

void setup() {
  pinMode(ledRed1, OUTPUT);
  pinMode(ledGreen1, OUTPUT);
  pinMode(ledBlue1, OUTPUT);

  pinMode(ledRed2, OUTPUT);
  pinMode(ledGreen2, OUTPUT);
  pinMode(ledBlue2, OUTPUT);

  pinMode(ledRed3, OUTPUT);
  pinMode(ledGreen3, OUTPUT);
  pinMode(ledBlue3, OUTPUT);

  pinMode(buttonPin, INPUT);
}

void loop() {

  button = digitalRead(buttonPin);

  if (button == HIGH and changed1 == 1)
  {
    //pink
    red1 = 0;
    green1 = 255;
    blue1 = 0;
    changed1 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and changed1 == 2)
  {
    //yellow
    red1 = 0;
    green1 = 0;
    blue1 = 255;
    changed1 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and changed1 == 3)
  {
    //Light blue
    red1 = 255;
    green1 = 0;
    blue1 = 0;
    changed1 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and changed1 == 4)
  {
    //green
    red1 = 255;
    green1 = 0;
    blue1 = 255;
    changed1 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and changed1 == 5)
  {
    //red
    red1 = 0;
    green1 = 255;
    blue1 = 255;
    changed1 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and changed1 == 6)
  {
    //blue
    red1 = 255;
    green1 = 255;
    blue1 = 0;
    changed1 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);

  }

  if (button == HIGH and changed2 == 1)
  {
    //pink
    red2 = 0;
    green2 = 255;
    blue2 = 0;
    changed2 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and changed2 == 2)
  {
    //yellow
    red2 = 0;
    green2 = 0;
    blue2 = 255;
    changed2 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and changed2 == 3)
  {
    //Light blue
    red2 = 255;
    green2 = 0;
    blue2 = 0;
    changed2 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and changed2 == 4)
  {
    //green
    red2 = 255;
    green2 = 0;
    blue2 = 255;
    changed2 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and  changed2 == 5)
  {
    //red
    red2 = 0;
    green2 = 255;
    blue2 = 255;
    changed2 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and changed2 == 6)
  {
    //blue
    red2 = 255;
    green2 = 255;
    blue2 = 0;
    changed2 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);

  }

  if (button == HIGH and changed3 == 1)
  {
    //pink
    red3 = 0;
    green3 = 255;
    blue3 = 0;
    changed3 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and changed3 == 2)
  {
    //yellow
    red3 = 0;
    green3 = 0;
    blue3 = 255;
    changed3 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and changed3 == 3)
  {
    //Light blue
    red3 = 255;
    green3 = 0;
    blue3 = 0;
    changed3 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and changed3 == 4)
  {
    //green
    red3 = 255;
    green3 = 0;
    blue3 = 255;
    changed3 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and changed3 == 5)
  {
    //red
    red3 = 0;
    green3 = 255;
    blue3 = 255;
    changed3 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }

  if (button == HIGH and changed3 == 6)
  {
    //blue
    red3 = 255;
    green3 = 255;
    blue3 = 0;
    changed3 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);

  }

  if (button == LOW and changed1 == 0)
  {
    changed1 = random(1, 7);
    red1 = 0;
    green1 = 0;
    blue1 = 0;

    changed2 = random(1, 7);
    red2 = 0;
    green2 = 0;
    blue2 = 0;

    changed3 = random(1, 7);
    red3 = 0;
    green3 = 0;
    blue3 = 0;
    color(red1, green1, blue1, red2, green2, blue2, red3, green3, blue3);
  }
}

void color(int red1, int green1, int blue1, int red2, int green2, int blue2, int red3, int green3, int blue3) {
  analogWrite(ledRed1, red1);
  analogWrite(ledGreen1, green1);
  analogWrite(ledBlue1, blue1);

  analogWrite(ledRed2, red2);
  analogWrite(ledGreen2, green2);
  analogWrite(ledBlue2, blue2);

  analogWrite(ledRed3, red3);
  analogWrite(ledGreen3, green3);
  analogWrite(ledBlue3, blue3);
}
