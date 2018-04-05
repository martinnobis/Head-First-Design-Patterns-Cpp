#include "beverage.h"

Beverage::Beverage(std::string desc) : description_(desc) { }

std::string Beverage::get_description(void) const {
    return description_;
}

void Beverage::set_size(Size size) {
    size_ = size;
}

Size Beverage::get_size(void) const {
    return size_;
}

const std::string get_name(Size size) {
  switch (size) {
  case Tall: return "Tall";
  case Grande: return "Grande";
  case Venti: return "Venti";
  }
}