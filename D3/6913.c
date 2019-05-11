#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int T;  scanf("%d", &T);

    for ( int test_case = 1; test_case <= T; test_case++ )
    {
        int N, M;   scanf("%d %d", &M, &N);

        int* score = (int*) malloc( sizeof(int) * N );

        int max = 0;

        for ( int i = 0; i < N; i++ )
        {
            int sum = 0;
            for ( int j = 0; j < M; j++ )
            {
                int tmp; scanf("%d", &tmp);
                sum += tmp;
            }
            score[i] = sum;

            if ( sum > max ) max = sum;
        }

        int cnt = 0;

        for ( int i = 0; i < N; i++ ) {
            if ( score[i] == max ) cnt++;
        }

        printf("#%d %d\n", cnt, max);

        free(score);
    }

    return 0;
}
