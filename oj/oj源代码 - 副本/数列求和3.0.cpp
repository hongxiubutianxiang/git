#include <cstdio>
 
const int mod = 10000;
 
int power(int a, int n) {
    int s = 1, t = a;
    for (; n; n >>= 1) {
        if (n&1) s = s * t;
        t = t * t;
    }
    return s;
}
 
int main() {
    int T; scanf("%d", &T);
    while (T --) {
        int a, b; scanf("%d%d", &a, &b);
        int res = 0;
        for (int i = 1; i <= a; ++ i)
            (res += power(i, b)) %= mod;
        printf("%d\n", res);
    }
    return 0;
}
