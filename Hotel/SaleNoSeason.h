#pragma once
#include "SaleSeason.h"
class SaleNoSeason :
    public SaleSeason
{
    double coef = 1;
public:
    double GetCoef() override { return this->coef; };
};

