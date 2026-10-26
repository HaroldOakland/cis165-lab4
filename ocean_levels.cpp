#include <iostream>

const float X = 1.5;

float a = 5;
float b = 7;
float c = 10;

float five = a * X;
float seven = b * X;
float ten = c * X;

int main()
{
    std::cout<< "Ocean levels have increased " << five << " milimeters after five years, " << seven << " milimeters after seven years, "<< ten << " and milimeters after ten years.";

    return 0;
}