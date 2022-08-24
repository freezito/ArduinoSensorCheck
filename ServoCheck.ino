# include <Servo.h>

Servo kyotto;

int kyottopin = A0;
int pulsomin = 700;
int pulsomax = 2550;

void setup()
{
  kyotto.attach(kyottopin, pulsomin, pulsomax);
}

void loop()
{
  kyotto.write(0);
  delay(1000);
  kyotto.write(90);
  delay(1000);
  kyotto.write(180);
  delay(1000);
}
