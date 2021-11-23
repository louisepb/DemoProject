#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "LineLength.h"

float LineLength(struct point p1, struct point p2)
{
    float length;
    float dx = p2.x-p1.x;
    float dy = p2.y-p1.y;
    length = sqrt( dx*dx + dy*dy);
    return length;
}
