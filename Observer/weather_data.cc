#include <algorithm>

#include "weather_data.h"

void WeatherData::RegisterObserver(std::shared_ptr<Observer> o)
{
    observers_.push_back(o);
}

void WeatherData::RemoveObserver(std::shared_ptr<Observer> o)
{
    auto it = std::find(observers_.begin(), observers_.end(), o);
    if (it != observers_.end())
    {
        observers_.erase(it);
    }
}
void WeatherData::NotifyObservers(void) const
{
    for (auto it = observers_.begin(); it != observers_.end(); ++it)
    {
        (*it)->Update(temperature_, humidity_, pressure_);
    }
}

void WeatherData::MeasurementsChanged(void) const
{
    NotifyObservers();
}

void WeatherData::SetMeasurements(float temperature, float humidity, float pressure)
{
    temperature_ = temperature;
    humidity_ = humidity;
    pressure_ = pressure;
}