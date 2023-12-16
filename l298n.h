#ifndef L298N_h
#define L298N_h

#include "Arduino.h"

class L298N {
public:
    L298N(int enA, int enB, int in1, int in2, int in3, int in4);
    void setSpeed(int speedA, int speedB);
    void forward();
    void backward();
    void turnLeft();
    void turnRight();
    void stop();

private:
    int _enA;
    int _enB;
    int _in1;
    int _in2;
    int _in3;
    int _in4;
};

#endif
