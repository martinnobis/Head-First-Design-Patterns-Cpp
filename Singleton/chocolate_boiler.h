#ifndef _CHOCOLATE_BOILER_H_
#define _CHOCOLATE_BOILER_H_

class ChocolateBoiler {
    public:
    static ChocolateBoiler& GetInstance(void);
    void Fill(void);
    void Drain(void);
    void Boil(void);
    bool IsEmpty(void);
    bool IsBoiled(void);

    private:
    ChocolateBoiler() : empty_(true), boiled_(false) { }

    private:
    bool empty_;
    bool boiled_;
};

#endif
