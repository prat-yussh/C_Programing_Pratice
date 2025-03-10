#include <stdio.h>
#include <string.h>

void LCS(char *X, char *Y, int m, int n) {
    int c[m + 1][n + 1];
    char b[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                c[i][j] = 0;
                b[i][j] = '0';
            } else if (X[i - 1] == Y[j - 1]) {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = '\\';
            } else if (c[i - 1][j] >= c[i][j - 1]) {
                c[i][j] = c[i - 1][j];
                b[i][j] = '|';
            } else {
                c[i][j] = c[i][j - 1];
                b[i][j] = '-';
            }
        }
    }

    int i = m, j = n;
    int index = c[m][n];
    char lcs[index + 1];
    lcs[index] = '\0';
    while (i > 0 && j > 0) {
        if (b[i][j] == '\\') {
            lcs[--index] = X[i - 1];
            i--;
            j--;
        } else if (b[i][j] == '|') {
            i--;
        } else {
            j--;
        }
    }

    printf("LCS: %s\n", lcs);
}

int main() {
    char X[] = "ABCBDAB";
    char Y[] = "BDCABA";
    int m = strlen(X);
    int n = strlen(Y);

    LCS(X, Y, m, n);

    return 0;
}