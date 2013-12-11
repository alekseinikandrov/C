int max (int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int min (int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int det (int q, int w)
{
    return q / w;
}

int main(int argc, char *argv[])
{
    int c = 12;

    {
        printf("%d ja 6 >=%d %d ja 5 <=%d %d\n", c, max(c, 6), c, min(c, 5), det(max, min));
    }
    return 0;
}
