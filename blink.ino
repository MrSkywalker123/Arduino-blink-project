#include<avr/io.h>
#include<util/delay.h>

int array[4] = {10,11,12,13};//set of numbers (IO pins) 

void setup() {
    for(int i=0;i<=3;i++){
        pinMode(array[i],OUTPUT);
    }

}


/*
for int i = 1 to i=4 i = i + 1 
i = 1 
pinMode(array[1],OUTPUT)

*/

void blink2(){

    digitalWrite(10,HIGH); 
    digitalWrite(13,HIGH);
    _delay_ms(100);
    digitalWrite(10,LOW);
    digitalWrite(13,LOW);
    _delay_ms(100);

    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    _delay_ms(100);
    digitalWrite(11,0);
    digitalWrite(12,0);
    _delay_ms(100);
}


void blink3(){
    digitalWrite(14,1);
    digitalWrite(13,1);


}
void blink4(){
    



}


void loop() {
    for(int k=1;k<=4;k++){
        digitalWrite(array[k],HIGH);
        _delay_ms(100); 
        digitalWrite(array[k],LOW);
        _delay_ms(100);
    }
    for(int k=4;k<=1;k--){
        digitalWrite(array[k],HIGH);
        _delay_ms(100);
        digitalWrite(array[k],LOW);
        _delay_ms(100);
    }
    blink2();
    blink3();
    blink4();
}
