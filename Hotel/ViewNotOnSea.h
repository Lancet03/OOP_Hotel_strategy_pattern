#pragma once
#include "ViewFromWindow.h"
class ViewNotOnSea :
    public ViewFromWindow
{
    double coef = 1;
public:
    double GetCoef() override { return this->coef;  };
};

