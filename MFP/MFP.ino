const int b1 = 9; // Use pin 3 for the first buzzer
const int b2 = 10; // Use pin 5 for the second buzzer
const int b3 = 11; // Use pin 6 for the third buzzer

// Note to frequency
float C[9] = {16.35, 32.70, 65.41, 130.81, 261.63, 523.25, 1046.50, 2093.00, 4186.01};
float Db[9] = {17.32, 34.65, 69.30, 138.59, 277.18, 554.37, 1108.73, 2217.46, 4434.92};
float D[9] = {18.35, 36.71, 73.42, 146.83, 293.66, 587.33, 1174.66, 2349.32, 4698.64};
float Eb[9] = {19.45, 38.89, 77.78, 155.56, 311.13, 622.25, 1244.51, 2489.02, 4978.03};
float E[9] = {20.60, 41.20, 82.41, 164.81, 329.63, 659.26, 1318.51, 2637.02};
float F[9] = {21.83, 43.65, 87.31, 174.61, 349.23, 698.46, 1396.91, 2793.83};
float Gb[9] = {23.12, 46.25, 92.50, 185.00, 369.99, 739.99, 1479.98, 2959.96};
float G[9] = {24.50, 49.00, 98.00, 196.00, 392.00, 783.99, 1567.98, 3135.96};
float Ab[9] = {25.96, 51.91, 103.83, 207.65, 415.30, 830.61, 1661.22, 3322.44};
float A[9] = {27.50, 55.00, 110.00, 220.00, 440.00, 880.00, 1760.00, 3520.00};
float Bb[9] = {29.14, 58.27, 116.54, 233.08, 466.16, 932.33, 1864.66, 3729.31};
float B[9] = {30.87, 61.74, 123.47, 246.94, 493.88, 987.77, 1975.53, 3951.07};
// double[] Song = {};
void testSpeaker(int sPin){
  int currentOct = 0;
  while (currentOct <= 8){
    tone(sPin, C[currentOct]);
    delay(1000);
    tone(sPin, Db[currentOct]);
    delay(1000);
    tone(sPin, D[currentOct]);
    delay(1000);
    tone(sPin, Eb[currentOct]);
    delay(1000);
    tone(sPin, E[currentOct]);
    delay(1000);
    tone(sPin, F[currentOct]);
    delay(1000);
    tone(sPin, Gb[currentOct]);
    delay(1000);
    tone(sPin, G[currentOct]);
    delay(1000);
    tone(sPin, Ab[currentOct]);
    delay(1000);
    tone(sPin, A[currentOct]);
    delay(1000);
    tone(sPin, Bb[currentOct]);
    delay(1000);
    tone(sPin, B[currentOct]);
    delay(1000);
    currentOct = currentOct + 1;
  }
}



void setup(){
    pinMode(b1, OUTPUT);
    pinMode(b2, OUTPUT);
    pinMode(b3, OUTPUT);
    testSpeaker(b1);
    testSpeaker(b2);
    testSpeaker(b3);
}

void loop(){
    
}
