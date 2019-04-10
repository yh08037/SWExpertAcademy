#include <stdio.h>

int countDiv(int, int);

int main(void){

    int T; scanf("%d", &T);

    for (int n=1; n<=T; n++) {

        int N; scanf("%d", &N);

        printf("#%d %d %d %d %d %d\n", n, countDiv(N, 2), countDiv(N, 3),
            countDiv(N, 5), countDiv(N, 7), countDiv(N, 11));

    }

    return 0;
}


int countDiv(int num, int div) {
    int count = 0;
    while ( num % div == 0 ) {
        num /= div;
        count++;
    }
    return count;
}
