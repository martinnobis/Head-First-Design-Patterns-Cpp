#ifndef _STEREO_H_
#define _STEREO_H_

#include <string>

class Stereo {
    public:
    Stereo(std::string name) : name_(name) { }
    void On(void) const;
    void Off(void) const;
    void SetDvd(void) const;
    // And other identical methods...

    private:
    std::string name_;
};

#endif  // _STEREO_H_
