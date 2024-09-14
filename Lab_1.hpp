#pragma once

enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
struct Snake {
    int x, y;
    int tailX[100], tailY[100];
    int nTail;
    Direction dir;
};