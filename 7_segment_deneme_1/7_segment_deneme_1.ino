#include <ShiftRegister74HC595.h>


#define SDI 7
#define SCLK 6
#define LOAD 5
#define DIGITS 2

ShiftRegister74HC595 <DIGITS>sr( SDI, SCLK, LOAD);

int value,digit1,digit2,digit3,digit4;
uint8_t digits[] = {B11000000,//0
                    B11111001,//1
                    B10100100,//2
                    B10110000,//3
                    B10011001,//4
                    B10010010,//5
                    B10000010,//6
                    B11111000,//7
                    B10000000,//8
                    B10010000 //9
                    };
                    
void setup() {




}

void loop() {


  int hiz=33;
  showNumber(hiz);
  


}//loop


void showNumber(int num)
{
    digit2=num % 10;
    digit1=(num / 10) % 10;

    uint8_t numberToPrint[]= {digits[digit1],digits[digit2]};
    sr.setAll(numberToPrint);
}
