#include <stdio.h>

int gcd(int a, int b) {
    if ( a < b ) {
        int tmp = a; a = b; b = tmp;
    }
    while(b!=0){
		int r = a%b; a = b; b = r;
	}
	return a;
}

int main(void) {
    printf("%d\n", gcd(17, 28));

    return 0;
}
