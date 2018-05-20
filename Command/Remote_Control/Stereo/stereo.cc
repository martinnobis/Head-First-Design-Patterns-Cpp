#include <iostream>

#include "stereo.h"

void Stereo::On(void) const {
    std::cout << "Stereo is on" << std::endl;
}

void Stereo::Off(void) const {
    std::cout << "Stereo is off" << std::endl;
}

void Stereo::SetCd(void) const {
    std::cout << "CD is set" << std::endl;
}

void Stereo::SetDvd(void) const {
    std::cout << "DVD is set" << std::endl;
}

void Stereo::SetRadio(void) const {
    std::cout << "Radio is set" << std::endl;
}

void Stereo::SetVolume(void) const {
    std::cout << "Volume is set" << std::endl;
}
