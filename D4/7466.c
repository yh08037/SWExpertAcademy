#include <stdio.h>

int gcd(int, int);
int factorial(int);

int main(void) {

    int T; scanf("%d", &T);

    for ( int n = 1; n <= T; n++ ) {
        int N; scanf("%d", &N);
        int K; scanf("%d", &K);

        printf("#%d %d\n", n ,gcd(factorial(N), K));
    }

    return 0;

}

int gcd(int a, int b) {
    if ( a < b ) {
        int tmp = a; a = b; b = tmp;
    }
    while(b!=0){
		int r = a%b; a = b; b = r;
	}
	return a;
}

int factorial(int a) {
    int result = 1;
    for ( int i = 2; i <= a; i++) {
        result *= i;
    }
    return result;
}
