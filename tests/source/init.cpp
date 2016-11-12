#include <calc.hpp>
#include <catch.hpp>
#

SCENARIO ("calc sum", "[sum]"){
    float x = 3;
    float y = 4;

    double long rv = sum ( x,y );
        REQUIRE ( rv == 7 );
}
SCENARIO ("calc div", "[div]"){
    float x = 16;
    float y = 4;

    double long rv = *div ( x,y );
        REQUIRE ( rv == 4 );
}
SCENARIO ("calc multi", "[multi]"){
    float x = 4;
    float y = 6;

    double long rv = multi ( x,y );
        REQUIRE ( rv == 24 );
}
SCENARIO ("calc sub", "[sub]"){
    float x = 12;
    float y = 4;

    double long rv = sub ( x,y );
        REQUIRE ( rv == 8 );
}
SCENARIO ("calc pow1", "[pow1]"){
    float x = 2;
    float y = 3;

    double long rv = pow1 ( x,y );
        REQUIRE ( rv == 8 );
}
 SCENARIO ("calc sqrt1", "[sqrt1]"){
    float x = 0.25;
    double long rv = sqrt1 (x);
        REQUIRE ( rv == 0.5 );
}
SCENARIO ("calc div2", "[div]"){
    float x = 16;
    float y = 0;
    bool result = *div;
    REQUIRE ( (x,y) == result);
}
