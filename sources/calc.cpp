long double sum(float x, float y)
{
    return (x+y);
}
long double div(float x, float y)
{
    return (x/y);
}
long double multi(float x, float y)
{
    return (x*y);
}
long double min(float x, float y)
{
    return (x-y);
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
    double powi=1; double y;
    int i=0;
    while(1) {
        y=powi;
        powi=0.5*(powi+x/powi);
        if (powi>=y) {
            i++; if (i>1);
            break;
        }
    }
    return(powi);
}
