#include <iostream>

#include "current_conditions_display.h"

void CurrentConditionsDisplay::Update(float temperature, float humidity, float pressure)
{
    temperature_ = temperature;
    humidity_ = humidity;
    Display();
}

void CurrentConditionsDisplay::Display()
{
    std::cout << "Current conditions: " + std::to_string(temperature_) + "C degrees and " + std::to_string(humidity_) + "% humidity" << std::endl;
}