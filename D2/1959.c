#include <stdio.h>
#include <stdlib.h>

int main(void){

    int T; scanf("%d", &T);

    for ( int n = 1; n <= T; n++ ) {

        int N, M; scanf("%d %d", &N, &M);

        int* A = (int*)malloc(sizeof(int)*N);
        int* B = (int*)malloc(sizeof(int)*M);

        for ( int i = 0; i < N; i++ ) {
            scanf("%d", A + i);
        }

        for ( int i = 0; i < M; i++ ) {
            scanf("%d", B + i);
        }

        if ( N > M ) {
            int* tmp; tmp = A; A = B; B = tmp;
            int tmp1; tmp1 = N; N = M; M = tmp1;
        }

        /* N <= M */
        int len = M - N + 1;
        int* arr = (int*)malloc(sizeof(int)*len);

        for ( int i = 0; i < len; i++ ) {
            int sumOfProduct = 0;
            for ( int j = 0; j < N; j++) {
                sumOfProduct += A[j] * B[i + j];
            }
            arr[i] = sumOfProduct;
        }

        int max = arr[0];
        for ( int i = 1; i < len; i++ ) {
            if ( arr[i] > max ) {
                max = arr[i];
            }
        }

        printf("#%d %d\n", n, max);

        free(A); free(B); free(arr);

    }
    return 0;
}
