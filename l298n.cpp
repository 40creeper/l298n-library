#include "Arduino.h"
#include "L298N.h"

L298N::L298N(int enA, int enB, int in1, int in2, int in3, int in4) {
    _enA = enA;
    _enB = enB;
    _in1 = in1;
    _in2 = in2;
    _in3 = in3;
    _in4 = in4;

    pinMode(_enA, OUTPUT);
    pinMode(_enB, OUTPUT);
    pinMode(_in1, OUTPUT);
    pinMode(_in2, OUTPUT);
    pinMode(_in3, OUTPUT);
    pinMode(_in4, OUTPUT);
}

void L298N::setSpeed(int speedA, int speedB) {
    analogWrite(_enA, speedA);
    analogWrite(_enB, speedB);
}

void L298N::forward() {
    digitalWrite(_in1, HIGH);
    digitalWrite(_in2, LOW);
    digitalWrite(_in3, HIGH);
    digitalWrite(_in4, LOW);
}

void L298N::backward() {
    digitalWrite(_in1, LOW);
    digitalWrite(_in2, HIGH);
    digitalWrite(_in3, LOW);
    digitalWrite(_in4, HIGH);
}

void L298N::turnLeft() {
    digitalWrite(_in1, LOW);
    digitalWrite(_in2, HIGH);
    digitalWrite(_in3, HIGH);
    digitalWrite(_in4, LOW);
}

void L298N::turnRight() {
    digitalWrite(_in1, HIGH);
    digitalWrite(_in2, LOW);
    digitalWrite(_in3, LOW);
    digitalWrite(_in4, HIGH);
}

void L298N::stop() {
    digitalWrite(_in1, LOW);
    digitalWrite(_in2, LOW);
    digitalWrite(_in3, LOW);
    digitalWrite(_in4, LOW);
}
