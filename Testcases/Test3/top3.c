int top(int a, int b, int d, int m, int n, int p, int y) {
    int c = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int x = 0;
    if (a > 10) {
       c = a + b;
       e = d * c;
       f = m * n;
       g = f * p;
       x = e + g + y;
    }else{
       c = a * b;
       h = m + n;
       x = h + c;
    }

    return x;
}
