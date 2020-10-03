#include "Rectangle.hpp"

Rectangle::Rectangle(int width_, int height_){
    width = width_;
    height = height_;
}

int const Rectangle::getPerimeter( /**< [in] Here you CAN'T find any parameter. */ ) {
    return (2*width) + (2*height);
}

int const Rectangle::getArea(/**< [in] Here you can't find any parameter. */) { 
    return (width * height); 
}