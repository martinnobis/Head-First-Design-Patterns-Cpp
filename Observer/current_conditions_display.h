#ifndef _CURRENT_CONDITIONS_DISPLAY_H_
#define _CURRENT_CONDITIONS_DISPLAY_H_

#include <vector>

#include "observer.h"
#include "display_element.h"
#include "subject.h"

class CurrentConditionsDisplay : public Observer, DisplayElement {
    public:
    CurrentConditionsDisplay(std::shared_ptr<Subject>);
    // From the Display interface
    void Display(void);
    // From the Observer interface
    void Update(float, float, float);

    private:
    float temperature_;
    float humidity_;
    std::shared_ptr<Subject> weather_data_;
};

#endif  // _CURRENT_CONDITIONS_DISPLAY_H_