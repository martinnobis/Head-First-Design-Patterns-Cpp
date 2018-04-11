#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <memory>

#include "observer.h"

class Subject {
    public:
    virtual ~Subject() { }
    virtual void RegisterObserver(std::shared_ptr<Observer>) = 0;
    virtual void RemoveObserver(std::shared_ptr<Observer>) = 0;
    virtual void NotifyObservers(void) const = 0;
};

#endif