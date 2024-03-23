
int sumXminusOne(int digits) {
    int sum = 0;
    for (int i = 1;i <= digits;i++) {
        sum = sum * 10 + 45 * pow(10, i - 1);
    }
    return sum;
}

int sumDigits(int n)  {
    if (n < 10)
        return n * (n + 1) / 2;

    int d;
    d = log10(n);

    int X = pow(10, d);
    int left = n / X;
    int sum = left * sumXminusOne(d) +
        ((left * (left - 1)) / 2) * X +
        left * (n % X + 1) +
        sumDigits(n % X);
    return sum;
}

## credits to https://www.sanfoundry.com/dynamic-programming-solutions-sum-of-digits-problem/