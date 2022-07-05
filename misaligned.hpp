#include <iostream>
#include <assert.h>
namespace misaligned
{

    enum MajorColor
    {
        WHITE,
        RED,
        BLACK,
        YELLOW,
        VIOLET
    };
    enum MinorColor
    {
        BLUE,
        ORANGE,
        GREEN,
        BROWN,
        SLATE
    };

    class Misaligned
    {
    public:
        int printColorMap();
    };
}
