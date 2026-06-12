#ifndef FISICA_H //Verifica se fisica_h ainda nao foi definido
#define FISICA_H 

#include "formula.h"

class Fisica : public Formula {
public:
    void calcular () override;
};

#endif 