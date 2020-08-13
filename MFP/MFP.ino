#include "MFNOTEDATA.h"
const int b1 = 9; // Use pin 3 for the first buzzer
//const int b2 = 10; // Use pin 5 for the second buzzer
//const int b3 = 11; // Use pin 6 for the third buzzer
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
// Paste Song Data Here
double song[] = {C[3}, Db[4], Eb[3]}; // Song Data from CMD here
int tempo = 60000 / 80; // Replace 80 with the tempo

int semiquaver = tempo / 4;
int dottedsemiquaver = tempo / 4.5;
int quaver = tempo / 2;
int dottedquaver = tempo / 2.5;
int crotchet = tempo;
int dottedcrotchet = tempo * 1.5;
int minum = tempo * 2;
int semibreve = tempo * 4;

double lenp[] = {Crotchet, Crotchet, Crotchet}; // Length Data From CMD here
int songlen = 3

void setup(){
    Serial.begin(9600);
    pinMode(b1, OUTPUT);
}

void loop(){
    int currentNote = 0;
    while (currentNote <= songlen - 1){
      tone(b1, song[currentNote]);
      delay(len[currentNote]);
      currentNote = currentNote + 1;
    }
    currentNote = 0;
}
