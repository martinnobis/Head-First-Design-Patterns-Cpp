#ifndef _LIGHT_H_
#define _LIGHT_H_

#include <string>

class Light {
    public:
    Light(std::string name) : name_(name) { }
    void On(void) const;
    void Off(void) const;

    private:
    std::string name_;
};

#endif  // _LIGHT_H_
