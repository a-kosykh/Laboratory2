#include <calc.hpp>
#include <catch.hpp>

SCENARIO ("calc sum", "[sum]"){
    int x = 3;
    int y = 4;

    int rv = sum ( x,y );
        REQUIRE ( rv == 7 );
}
SCENARIO ("calc div", "[div]"){
    int x = 16;
    int y = 4;

    int rv = div ( x,y );
        REQUIRE ( rv == 4 );
}
SCENARIO ("calc multi", "[multi]"){
    int x = 4;
    int y = 6;

    int rv = multi ( x,y );
        REQUIRE ( rv == 24 );
}
SCENARIO ("calc min", "[min]"){
    int x = 12;
    int y = 4;

    int rv = min ( x,y );
        REQUIRE ( rv == 8 );
}
SCENARIO ("calc pow", "[pow]"){
    int x = 2;
    int y = 3;

    int rv = pow ( x,y );
        REQUIRE ( rv == 8 );
}
SCENARIO ("calc sqrt", "[sqrt]"){
    int x = 16;
    int rv = sqrt (x);
        REQUIRE ( rv == 4 );
}
