#pragma once
#include <Tempest/Game.hpp>

// Vector 2
class Vector2 {
public:
    Vector2(float _x = 1, float _y = 1);
    float X = 1;
    float Y = 1;
};

class Rectangle {
public:
    Rectangle(float _x = 1, float _y = 1, float _width = 1, float _height = 1);
    float X = 1;
    float Y = 1;
    float width = 1;
    float height = 1;
};