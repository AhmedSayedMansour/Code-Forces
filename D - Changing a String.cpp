#include <bits/stdc++.h>

using namespace std;
const int N = 1002;
int lenA, lenB, mem[N][N];
char a[N], b[N];
int go(int i, int j) {
    if (i == lenA && j == lenB)
        return 0;
    if (i > lenA || j > lenB)
        return 1e9;
    int &ret = mem[i][j];
    if (~ret)
        return ret;
    ret = go(i, j + 1) + 1; // insert
    ret = min(ret, go(i + 1, j) + 1); // delete
    ret = min(ret, go(i + 1, j + 1) + (a[i] != b[j])); // replace
    return ret;
}

void build(int i, int j, int cur = 1) {
    if (i == lenA && j == lenB)
        return;
    if (go(i + 1, j + 1) + (a[i] != b[j]) == go(i, j)) {
        if (a[i] != b[j])
            printf("REPLACE %d %c\n", cur, b[j]);
        build(i + 1, j + 1, cur + 1);
        return;
    }
    if (go(i, j + 1) + 1 == go(i, j)) {
        printf("INSERT %d %c\n", cur, b[j]);
        build(i, j + 1, cur + 1);
        return;
    }
    printf("DELETE %d\n", cur);
    build(i + 1, j, cur);
}
/**
C
CAA
*/

int main() {
    memset(mem,-1, sizeof mem);
    scanf("%s %s", a, b);
    lenA = strlen(a), lenB = strlen(b);
    printf("%d\n", go(0, 0));
    build(0, 0);
    return 0;
}
