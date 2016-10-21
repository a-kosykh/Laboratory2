#include <calc.hpp>
#include <catch.hpp>

SCENARIO ("calc sum", "[sum]"){
    float x = 3;
    float y = 4;

    double long rv = sum ( x,y );
        REQUIRE ( rv == 7 );
}
SCENARIO ("calc div", "[div]"){
    float x = 16;
    float y = 4;

    double long rv = div ( x,y );
        REQUIRE ( rv == 4 );
}
SCENARIO ("calc multi", "[multi]"){
    float x = 4;
    float y = 6;

    double long rv = multi ( x,y );
        REQUIRE ( rv == 24 );
}
SCENARIO ("calc min", "[min]"){
    float x = 12;
    float y = 4;

    double long rv = min ( x,y );
        REQUIRE ( rv == 8 );
}
SCENARIO ("calc pow", "[pow]"){
    float x = 2;
    float y = 3;

    double long rv = pow ( x,y );
        REQUIRE ( rv == 8 );
}
SCENARIO ("calc sqrt", "[sqrt]"){
    float x = 16;
    double long rv = sqrt (x);
        REQUIRE ( rv == 4 );
}
