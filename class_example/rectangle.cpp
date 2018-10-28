#include <iostream>

#include "rectangle.h"

namespace Shapes {

    // Default constructor
    Rectangle::Rectangle() {}

    // Overloaded constructor
    Rectangle::Rectangle(int x0, int y0, int x1, int y1)
        : x0_(x0), y0_(y0), x1_(x1), y1_(y1) { }

    // Destructor
    Rectangle::~Rectangle() {}

    // Return the area of the rectangle
    int Rectangle::GetArea() {
        return (x1_ - x0_) * (y1_ - y0_);
    }

    // Move the rectangle by dx dy
    void Rectangle::Move(int dx, int dy) {
        x0_ += dx;
        y0_ += dy;
        x1_ += dx;
        y1_ += dy;
    }
}

