#include <stdio.h>
#include <stdlib.h>

#include "LineLength.h"

int main()
{
    struct point point1, point2;
    point1.x = 0;
    point1.y = 0;
    point2.x = 3;
    point2.y = 4;

    float Length = LineLength(point1, point2);
    return 0;
}
