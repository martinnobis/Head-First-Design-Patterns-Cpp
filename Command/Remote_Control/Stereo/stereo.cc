#include <iostream>

#include "stereo.h"

void Stereo::On(void) const {
    std::cout << name_ << " stereo is on" << std::endl;
}

void Stereo::Off(void) const {
    std::cout << name_ << " stereo is off" << std::endl;
}

void Stereo::SetDvd(void) const {
    std::cout << name_ << " stereo DVD is set" << std::endl;
}
