#include <stdio.h>

int main(void) {
    int T; scanf("%d", &T);

    for (int n=1; n <= T; n++) {
        int N; scanf("%d", &N);
        int sum = 0;

        for ( int i = 1; i <= N; i++ ) {
            sum += (i%2) ? i : (-i);
        }

        printf("#%d %d\n", n, sum);
    }

    return 0;
}
