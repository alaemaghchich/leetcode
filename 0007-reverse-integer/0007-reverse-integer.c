int reverse(int x){
    long count = 0;
    int rev;
while (x != 0)
{
    rev = x % 10;
    count = count * 10 + rev;
    x /= 10;
    if (count > 2147483647 || count < -2147483648)
        return 0;
}
return count;
}