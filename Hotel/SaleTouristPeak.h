#pragma once
#include "SaleSeason.h"
class SaleTouristPeak :
    public SaleSeason
{
    double coef = 1.5;
public:
    double GetCoef() override { return this->coef; };
};

