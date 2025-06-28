#include <iostream>
#include <cstring>
#define MAX 100

int main(void){
    char X[] = "ABCABAAC";
    char Y[] = "BACCBCA";
    int m = strlen(X);
    int n = strlen(Y);

    int dp[MAX][MAX];  
	int i, j;

    for (i = 0; i <= m; i++) dp[i][0] = 0;
    for (j = 0; j <= n; j++) dp[0][j] = 0;

    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if (X[i-1] == Y[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = (dp[i-1][j] > dp[i][j-1]) ? dp[i-1][j] : dp[i][j-1];
        }
    }

    int index = dp[m][n];
    printf("Length of LCS: %d\n", index);

    char lcs[index + 1];
    lcs[index] = '\0'; 

    i = m;
    j = n;
    while (i > 0 && j > 0) {
        if (X[i-1] == Y[j-1]) {
            lcs[--index] = X[i-1];
            i--;
            j--;
        } else if (dp[i-1][j] > dp[i][j-1]) {
            i--;
        } else {
            j--;
        }
    }

    printf("Longest Common Subsequence: %s\n", lcs);

    return 0;
}
