#ifndef _WEATHER_DATA_H_
#define _WEATHER_DATA_H_

#include <vector>

#include "subject.h"
#include "observer.h"

class WeatherData : public Subject
{
  public:
    // From the subject interface
    void RegisterObserver(std::shared_ptr<Observer>);
    void RemoveObserver(std::shared_ptr<Observer>);
    void NotifyObservers(void) const;

    void MeasurementsChanged(void) const;
    void SetMeasurements(float, float, float);

  private:
    std::vector<std::shared_ptr<Observer>> observers_;
    float temperature_;
    float humidity_;
    float pressure_;
    ;
};

#endif
