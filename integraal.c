double Y(double c)
{
    return c * c;
}
 
 
int main (int argc, char *argv[])
{
    const double X0 = 2, X1 = 12;
    int n = 4, i = 0;
    double a = 0, b = 0, S = 0, segS = 0, step = (X1 - X0) / 4, c= 0;
 
    while (i < n)
    {
        a = i * step + X0;
        b = a + step;
        c = a + step / 2;
        segS = Y(c) * (b - a);
        S += segS;
        ++i;
        printf("i = %d a = %f b = %f c = %f y = %f S = %f\n", i, a, b, c, Y(c), segS);
    }
    printf("\n***Kogupindala S = %f ***\n\n", S);
 
    return 0;
}
