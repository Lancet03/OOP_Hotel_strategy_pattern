#pragma once
#include "ViewFromWindow.h"

class ViewOnSea :
    public ViewFromWindow
{
    double coef = 1.15;
public:
    double GetCoef() override;
};

