#pragma once
#include "SaleSeason.h"
class SaleNormalSeason :
    public SaleSeason
{
    double coef = 1.15;
public:
    double GetCoef() override { return this->coef; };
};