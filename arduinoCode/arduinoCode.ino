#include <IRremote.h>
IRrecv irrecv(2);
decode_results results;
void setup(){
Serial.begin(9600);
irrecv.enableIRIn();
}
void loop(){
if(irrecv.decode(&results)){
Serial.print(results.value,HEX);
irrecv.resume();
}
delay(400);
}
