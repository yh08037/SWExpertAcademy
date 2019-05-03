#include <stdio.h>

int main(void)
{
    int test_case;
	int T;
    
	setbuf(stdout, NULL);
	scanf("%d", &T);
    
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N; scanf("%d", &N);
        
        int a = 0, m = 1;
        int cnt = 0;

        for ( int n = 1; m <= N; n++ ) {
            for ( int k = 1; n * k + a <= N; k++ ) {
                if ( n * k + a == N ) cnt++;
            }
            a += n;
            m = a + n + 1;
        }
        
        printf("#%d %d\n", test_case, cnt);
	}
    return 0;
}