#include <stdio.h>
const int N = 100005, M = N * 2;
int dp[N]={0}, h[N]={0}, p[M]={0}, v[M]={0}, in[N]={0}, entry[N]={0}, cnt = 0;
void add(int a, int b) {
    p[++cnt] = h[a]; v[cnt] = b; h[a] = cnt; ++in[b];
}
void dfs(int x) {
    for (int i = h[x]; i; i = p[i]) {
        dp[v[i]] += dp[x]; --in[v[i]];
        if (!in[v[i]]) dfs(v[i]);
    }
}
int main() {
    int n, m, i, a, b, ans = 0;
    while(scanf("%d%d", &n, &m))
    {while (m--) scanf("%d%d", &a, &b), add(a, b);
    for (i = 1; i <= n; ++i)
        entry[i] = !in[i] && h[i];
    for (i = 1; i <= n; ++i)
        if (entry[i]) dp[i] = 1, dfs(i);
    for (i = 1; i <= n; ++i)
        if (!h[i]) ans += dp[i];
    printf("%d\n", ans);
    }
    return 0;
}