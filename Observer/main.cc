#include <iostream>
#include <memory>

#include "weather_data.h"
#include "current_conditions_display.h"

int main() {
    std::cout << "Hello world!" << std::endl;

    std::shared_ptr<WeatherData> wd_ptr = std::shared_ptr<WeatherData>(new WeatherData());
    wd_ptr->SetMeasurements(24.1, 66.5, 1002.20);
    std::shared_ptr<Observer> display = std::make_shared<CurrentConditionsDisplay>(wd_ptr);

    wd_ptr->RegisterObserver(display);
    wd_ptr->NotifyObservers();

    wd_ptr->SetMeasurements(34.1, 58.5, 1001.44);
    wd_ptr->NotifyObservers();
    wd_ptr->RemoveObserver(display);
}