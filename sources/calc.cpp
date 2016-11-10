long double sum(float x, float y)
{
    return x+y;
}
long double div(float x, float y)
{
    return x/y;
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
    double temp=1; double y;
    int i=0;
    while(1) {
        y=temp;
        temp=0.5*(temp+x/temp);
        if (temp>=y) {
            i++; if (i>1);
            break;
        }
    }
    return(temp);
}
