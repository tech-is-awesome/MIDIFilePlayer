const int b1 = 9; // Use pin 3 for the first buzzer
const int b2 = 10; // Use pin 5 for the second buzzer
const int b3 = 11; // Use pin 6 for the third buzzer

void setup(){
    pinMode(b1, OUTPUT);
    pinMode(b2, OUTPUT);
    pinMode(b3, OUTPUT);
}

void loop(){
    tone(b1, 392.00); // Play C4 on buzzer 1
    tone(b2, 329.63); // Play E4 on buzzer 2
    tone(b3, 392.00); // Play G4 on buzzer 3
}
