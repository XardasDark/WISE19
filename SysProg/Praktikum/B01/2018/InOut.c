/*
 * In- and output
 */
#include <stdio.h>

void line(int);
void leftPyr(int);
void centralPyr(int);

int main() {
	int n = 0;
	int boo = 0;
	
	while(!boo) {
		printf("Please enter a positive number: ");
		scanf("%d", &n);
		if(n < 1) {
			printf("The number '%d' is not greater than 0!\n", n);
		}
		else {
			boo++;
		}
	}
	printf("\nFirst output (line):\n");
	line(n);
	printf("\nSecond output (left pyramid):\n");
	leftPyr(n);
	printf("\nThird output (central pyramid):\n");
	centralPyr(n);
	return 0;
}

void line(int n) {
	int i = 0;
	while(i < n) {
		printf("*");
		i++;
	}
}

void leftPyr(int n) {
	int i, j;
	int nLittle = n;
	nLittle--;
	for(i = 0; i < n; i++) {
		for(j = 0; j <= i; j++) {
			printf("*");
		}
		if(i != nLittle) {
			printf("\n");
		}
	}
}

void centralPyr(int n) {
	int i, j, o, line, p = 1;
	int nIf = n;
	int l = n;
	l /= 2;
	int m = l;
	line = 1;
	
	/* Check if odd */
	if(nIf % 2) {
		for(i = 0; i <= l; i++) {
			
			/* Number of spaces: FLOOR n/2  */
			for(j = 0; j < m; j++) {
				printf(" ");
			}
			
			/* Number of stars: 2 * numberOfLine -1  */
			for(o = 0; o < p; o++) {
				printf("*");
			}
			
			m--;
			line++;
			p = 2 * line - 1;
			
			printf("\n");
		}
	}
	else {
		printf("The given number '%d' is not odd, output could not be generated!\n", n);
	}
}