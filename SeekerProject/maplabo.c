#include "maplabo.h"

NodeStruct Map[11];

// | ----------------------------- |
// | N = 0 | O = 1 | Z = 2 | W = 3 |
// | ----------------------------- |

NodeStruct* instantiateMap()
{
//Punt 0
    Map[0].Neighbours[0] = -1;
    Map[0].Neighbours[1] = 4;
    Map[0].Neighbours[2] = -1;
    Map[0].Neighbours[3] = -1;

    Map[0].Distance[0] = -1;
    Map[0].Distance[1] = 7;
    Map[0].Distance[2] = -1;
    Map[0].Distance[3] = -1;

    Map[0].Visited = 0;
    Map[0].Previous = -1;
    Map[0].DV = INT_MAX; // Maakt gebruik van <limits.h> - library

//Punt 1 -- Punt niet gespecificieerd op schema, dus overal -1
    Map[1].Neighbours[0] = -1;
    Map[1].Neighbours[1] = -1;
    Map[1].Neighbours[2] = -1;
    Map[1].Neighbours[3] = -1;

    Map[1].Distance[0] = -1;
    Map[1].Distance[1] = -1;
    Map[1].Distance[2] = -1;
    Map[1].Distance[3] = -1;

    Map[1].Visited = 0;
    Map[1].Previous = -1;
    Map[1].DV = INT_MAX; // Maakt gebruik van <limits.h> - library

//Punt 2
    Map[2].Neighbours[0] = -1;
    Map[2].Neighbours[1] = 3;
    Map[2].Neighbours[2] = -1;
    Map[2].Neighbours[3] = -1;

    Map[2].Distance[0] = -1;
    Map[2].Distance[1] = 4;
    Map[2].Distance[2] = -1;
    Map[2].Distance[3] = -1;

    Map[2].Visited = 0;
    Map[2].Previous = -1;
    Map[2].DV = INT_MAX; // Maakt gebruik van <limits.h> - library

//Punt 3
    Map[3].Neighbours[0] = -1;
    Map[3].Neighbours[1] = 4;
    Map[3].Neighbours[2] = 7;
    Map[3].Neighbours[3] = 2;

    Map[3].Distance[0] = -1;
    Map[3].Distance[1] = 1;
    Map[3].Distance[2] = 3;
    Map[3].Distance[3] = 4;

    Map[3].Visited = 0;
    Map[3].Previous = -1;
    Map[3].DV = INT_MAX; // Maakt gebruik van <limits.h> - library

//Punt 4
    Map[4].Neighbours[0] = 0;
    Map[4].Neighbours[1] = 5;
    Map[4].Neighbours[2] = -1;
    Map[4].Neighbours[3] = 3;

    Map[4].Distance[0] = 7;
    Map[4].Distance[1] = 1;
    Map[4].Distance[2] = -1;
    Map[4].Distance[3] = -1;

    Map[4].Visited = 0;
    Map[4].Previous = -1;
    Map[4].DV = INT_MAX; // Maakt gebruik van <limits.h> - library

//Punt 5
    Map[5].Neighbours[0] = 11;
    Map[5].Neighbours[1] = 9;
    Map[5].Neighbours[2] = 7;
    Map[5].Neighbours[3] = 4;

    Map[5].Distance[0] = 2;
    Map[5].Distance[1] = 1;
    Map[5].Distance[2] = 8;
    Map[5].Distance[3] = 1;

    Map[5].Visited = 0;
    Map[5].Previous = -1;
    Map[5].DV = INT_MAX; // Maakt gebruik van <limits.h> - library

//Punt 6
    Map[6].Neighbours[0] = -1;
    Map[6].Neighbours[1] = 7;
    Map[6].Neighbours[2] = -1;
    Map[6].Neighbours[3] = -1;

    Map[6].Distance[0] = -1;
    Map[6].Distance[1] = 4;
    Map[6].Distance[2] = -1;
    Map[6].Distance[3] = -1;

    Map[6].Visited = 0;
    Map[6].Previous = -1;
    Map[6].DV = INT_MAX; // Maakt gebruik van <limits.h> - library

//Punt 7
    Map[7].Neighbours[0] = 3;
    Map[7].Neighbours[1] = 5;
    Map[7].Neighbours[2] = -1;
    Map[7].Neighbours[3] = 6;

    Map[7].Distance[0] = 3;
    Map[7].Distance[1] = 8;
    Map[7].Distance[2] = -1;
    Map[7].Distance[3] = 4;

    Map[7].Visited = 0;
    Map[7].Previous = -1;
    Map[7].DV = INT_MAX; // Maakt gebruik van <limits.h> - library

//Punt 8
    Map[8].Neighbours[0] = 9;
    Map[8].Neighbours[1] = -1;
    Map[8].Neighbours[2] = -1;
    Map[8].Neighbours[3] = -1;

    Map[8].Distance[0] = 4;
    Map[8].Distance[1] = -1;
    Map[8].Distance[2] = -1;
    Map[8].Distance[3] = -1;

    Map[8].Visited = 0;
    Map[8].Previous = -1;
    Map[8].DV = INT_MAX; // Maakt gebruik van <limits.h> - library

//Punt 9
    Map[9].Neighbours[0] = 11;
    Map[9].Neighbours[1] = -1;
    Map[9].Neighbours[2] = 8;
    Map[9].Neighbours[3] = 5;

    Map[9].Distance[0] = 1;
    Map[9].Distance[1] = -1;
    Map[9].Distance[2] = 4;
    Map[9].Distance[3] = 1;

    Map[9].Visited = 0;
    Map[9].Previous = -1;
    Map[9].DV = INT_MAX; // Maakt gebruik van <limits.h> - library

//Punt 10
    Map[10].Neighbours[0] = 11;
    Map[10].Neighbours[1] = -1;
    Map[10].Neighbours[2] = -1;
    Map[10].Neighbours[3] = -1;

    Map[10].Distance[0] = 7;
    Map[10].Distance[1] = -1;
    Map[10].Distance[2] = -1;
    Map[10].Distance[3] = -1;

    Map[10].Visited = 0;
    Map[10].Previous = -1;
    Map[10].DV = INT_MAX; // Maakt gebruik van <limits.h> - library

//Punt 11
    Map[11].Neighbours[0] = -1;
    Map[11].Neighbours[1] = 10;
    Map[11].Neighbours[2] = 9;
    Map[11].Neighbours[3] = 5;

    Map[11].Distance[0] = -1;
    Map[11].Distance[1] = 7;
    Map[11].Distance[2] = 1;
    Map[11].Distance[3] = 2;

    Map[11].Visited = 0;
    Map[11].Previous = -1;
    Map[11].DV = INT_MAX; // Maakt gebruik van <limits.h> - library

    return Map;
}
