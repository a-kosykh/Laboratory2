#include <calc.hpp>
#include <catch.hpp>

SCENARIO ("calc sum", "[sum]"){
    int a = 3;
    int b = 4;

    int rv = sum ( x,y );
        REQUIRE ( rv == 7 );
}
SCENARIO ("calc div", "[div]"){
    int a = 16;
    int b = 4;

    int rv = div ( x,y );
        REQUIRE ( rv == 4 );
}
SCENARIO ("calc multi", "[multi]"){
    int a = 4;
    int b = 6;

    int rv = multi ( x,y );
        REQUIRE ( rv == 24 );
}
SCENARIO ("calc min", "[min]"){
    int a = 12;
    int b = 4;

    int rv = min ( x,y );
        REQUIRE ( rv == 8 );
}
SCENARIO ("calc pow", "[pow]"){
    int a = 2;
    int b = 3;

    int rv = pow ( x,y );
        REQUIRE ( rv == 8 );
}
SCENARIO ("calc sqrt", "[sqrt]"){
    int a = 16;
    int rv = sqrt (x);
        REQUIRE ( rv == 4 );
}
