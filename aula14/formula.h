//super classe - Interface
#ifndef FORMULA_H
#define FORMULA_H

class Formula {
public:
    virtual void calcular() = 0;
    virtual ~Formula () {}
};

#endif