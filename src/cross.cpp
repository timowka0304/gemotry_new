#include "foo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void Cross(int x1, int y1, int r1, int x2, int y2, int r2)
{
    int dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    if (dis <= (r1 + r2))
        printf("1 and 2 circules are cross\n");
    else
        printf("1 and 2 circules are not cross\n");
}
