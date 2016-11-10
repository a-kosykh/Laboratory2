long double sum(float x, float y)
{
    return x+y;
}
long double *div(double x, double y) {
    if (y != 0){
        long double res = x/y;
        long double *p = &res;
        return p;
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
    float xn = 1.0;
    float xn1 = 2.0;
    if ( a != 1 && a != 0 )
    {
        while ( (xn1 - xn) > 0.000001 || (xn1 - xn) < -0.000001  )
        {
            xn = xn1;
            xn1 = (float)(xn + (float)a/xn)/2;
        }
    }
    else if ( a == 1 ) xn1 = 1;
    else if ( a == 0 ) xn1 = 0;


    return xn1;
}
