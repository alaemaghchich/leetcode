int mySqrt(int x) {
    long i = 1;
    while (x >= i * i)
    {
        if(x == i * i)
        {
            return (i);
        }
        i++;
    }
    return i - 1;
}