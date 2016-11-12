long double sum(float x, float y)
{
    return x+y;
}
long double *div(double x, double y) {
    if (y != 0){
        long double *res = new long double;
        *res = x/y;
        return res;
    }
    else
        return nullptr;
    }
long double multi(float x, float y)
{
    return x*y;
}
long double sub(float x, float y)
{
    return x-y;
}
long double pow1(float x, float y) {
    float power;
    int i;
    power = 1;
    for (i = 1; i <= y; i++) {
        power = power * x;
    }
    return power;
}
long double sqrt1(float x) {
    float an = 1.0;
    float an1 = 2.0;
    if ( x != 1 && x != 0 )
    {
        while ( (an1 - an) > 0.000001 || (an1 - an) < -0.000001  )
        {
            an = an1;
            an1 = (float)(an + (float)x/an)/2;
        }
    }
    else if ( x == 1 ) an1 = 1;
    else if ( x == 0 ) an1 = 0;


    return an1;
}
