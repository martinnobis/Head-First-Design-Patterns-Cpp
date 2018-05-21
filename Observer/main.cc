#include <iostream>
#include <memory>

#include "weather_data.h"
#include "current_conditions_display.h"

int main()
{
    WeatherData wd;
    Subject &subject = wd;
    wd.SetMeasurements(24.1, 66.5, 1002.20);
    // Has to be a pointer so that Subject can store it in a container.
    std::shared_ptr<Observer> display = std::make_shared<CurrentConditionsDisplay>(wd);

    wd.RegisterObserver(display);
    wd.NotifyObservers();

    wd.SetMeasurements(34.1, 58.5, 1001.44);
    wd.NotifyObservers();
    wd.RemoveObserver(display);
}