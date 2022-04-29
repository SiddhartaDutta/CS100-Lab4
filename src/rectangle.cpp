#include "../header/rectangle.hpp"

Rectangle::Rectangle(){
	width = height = 10;
}

Rectangle::Rectangle(int w, int h){
    width= w;
    height = h;
}

void Rectangle::set_width(int w){
	width = w;
}

void Rectangle::set_height(int h){
	height = h;
}

int Rectangle::area(){
	return 100;
}

int Rectangle::perimeter(){
	return 100;

}
