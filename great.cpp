#include "great.h"
#include <cmath>
#include <iostream>

great::great()
{

}

great :: circle ()
{
      guess = (min + max) / 2;
      count = (int) ceil(log2(max - min));
}
