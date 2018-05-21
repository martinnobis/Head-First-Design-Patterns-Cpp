#include <iostream>

#include "chocolate_boiler.h"

ChocolateBoiler &ChocolateBoiler::GetInstance()
{
    static ChocolateBoiler instance;
    return instance;
}

void ChocolateBoiler::Fill(void)
{
    if (IsEmpty())
    {
        std::cout << "Filled!" << std::endl;
        empty_ = false;
        boiled_ = false;
    }
}

void ChocolateBoiler::Drain(void)
{
    if (!IsEmpty() && IsBoiled())
    {
        std::cout << "Drained!" << std::endl;
        empty_ = true;
    }
}

void ChocolateBoiler::Boil(void)
{
    if (!IsEmpty() && !IsBoiled())
    {
        std::cout << "Boiled!" << std::endl;
        boiled_ = true;
    }
}

bool ChocolateBoiler::IsEmpty(void)
{
    return empty_;
}

bool ChocolateBoiler::IsBoiled(void)
{
    return boiled_;
}
