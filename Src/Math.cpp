#include <Tempest/Game.hpp>

Vector2::Vector2(float _x, float _y) {
    Vector2::X = _x;
    Vector2::Y = _y;
}

Rectangle::Rectangle(float _x, float _y, float _width, float _height) {
    Rectangle::X = _x;
    Rectangle::Y = _y;
    Rectangle::width = _width;
    Rectangle::height = _height;
}