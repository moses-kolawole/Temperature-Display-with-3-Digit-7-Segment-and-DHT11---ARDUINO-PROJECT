#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
float temp_reading;
int delay_time = 500;

int total_temperature;
int last_digit;
int second_last_digit;
int third_last_digit;

int segment_led[] = {3, 4, 5, 6, 7, 8, 9};
int display1 = 10;
int display2 = 11;
int display3 = 12;
int decimal_point = 13;

int zero[] = {1, 1, 1, 1, 1, 1, 0};
int one[] = {0, 1, 1, 0, 0, 0, 0};
int two[] = {1, 1, 0, 1, 1, 0, 1};
int three[]= {1, 1, 1, 1, 0, 0, 1};
int four[] ={0, 1, 1, 0, 0, 1, 1};
int five[] = {1, 0, 1, 1, 0, 1, 1};
int six[] ={1, 0, 1, 1, 1, 1, 1};
int seven[] = {1, 1, 1, 0, 0, 0, 0};
int eight[] ={1, 1, 1, 1, 1, 1, 1};
int nine[] = {1, 1, 1, 0, 0, 1, 1};

void display_led(int display, int n){
  digitalWrite(display, LOW);

  switch(n){
    case 0: for(int i = 0; i < 7; i++){
      digitalWrite(segment_led[i], zero[i]);
    }
    break;

     case 1: for(int i = 0; i < 7; i++){
      digitalWrite(segment_led[i], one[i]);
    }
    break;

 case 2: for(int i = 0; i < 7; i++){
      digitalWrite(segment_led[i], two[i]);
    }
    break;


 case 3: for(int i = 0; i < 7; i++){
      digitalWrite(segment_led[i], three[i]);
    }
    break;


 case 4: for(int i = 0; i < 7; i++){
      digitalWrite(segment_led[i], four[i]);
    }
    break;

 case 5: for(int i = 0; i < 7; i++){
      digitalWrite(segment_led[i], five[i]);
    }
    break;

 case 6: for(int i = 0; i < 7; i++){
      digitalWrite(segment_led[i], six[i]);
    }
    break;


 case 7: for(int i = 0; i < 7; i++){
      digitalWrite(segment_led[i], seven[i]);
    }
    break;


 case 8: for(int i = 0; i < 7; i++){
      digitalWrite(segment_led[i], eight[i]);
    }
    break;

 case 9: for(int i = 0; i < 7; i++){
      digitalWrite(segment_led[i], nine[i]);
    }ssss
    break;
  }

  
    if(display == display2){
  digitalWrite(decimal_point, HIGH);
  delay(2);
  digitalWrite(decimal_point, LOW);
  }
}
void setup() {
  // put your setup code here, to run once:
for(int i = 3; i < 14; i++){
  pinMode(i, OUTPUT);
}
Serial.begin(9600);
dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

temp_reading = dht.readTemperature();

total_temperature = int(temp_reading * 10);
last_digit = (total_temperature % 10);
second_last_digit = (int(total_temperature/10) % 10);
third_last_digit = (int(total_temperature/100) % 10);


display_led(display1, last_digit);
delay(2);
digitalWrite(display1, HIGH);

display_led(display2, second_last_digit);
delay(2);
digitalWrite(display2, HIGH);

display_led(display3, third_last_digit);
delay(2);
digitalWrite(display3, HIGH);

Serial.print("The current temperature reading is: \t ");
Serial.print(temp_reading);
Serial.print(" ");
Serial.print(last_digit);
Serial.print(" ");
Serial.print(second_last_digit);
Serial.print(" ");
Serial.println(third_last_digit);


}
