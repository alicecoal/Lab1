#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void)
{
	int k, f, i; char x;
	char a[100];
	f = 1; k = 0; i = 0;
	printf("Please, enter the required value: ");
	while (f == 1) {
		if (i <= 4) {
			scanf("%c", &a[i]);
			if ((a[i] == '\n')) {
				break;
			}
		}
		else {
			scanf("%c", &x);
			if (x == '\n') {
				break;
			}
		}
		i += 1;
	}
	while (f == 1)
	{
		k = 0;
		if ((a[3] == '\n') || (a[2] == '\n') || (a[1] == '\n') || (a[4] == '\n')) {
			for (i = 0; i < sizeof(a); i++) {
				if (a[i] == '\n') {
					break;
				}
				else {
					if ((a[i] <= '9') && (a[i] >= '0')) {
						k = k * 10 + (a[i] - '0');
					}
					else {
						k = 0;
						break;
					}
				}
			}
			if ((k > 0) && (k < 3001)) {
				f = 0;
			}
		}
		if (f == 1) {
			printf("The entered value is invalid, try again.\n");
			printf("Please, enter the required value: ");
			i = 0;
			while (f == 1) {
				if (i <= 4) {
					scanf("%c", &a[i]);
					if ((a[i] == '\n')) {
						break;
					}
				}
				else {
					scanf("%c", &x);
					if (x == '\n') {
						break;
					}
				}
				i += 1;
			}
		}
	}
	int k1 = 99 + k / 3;
	int k2 = k % 3;
	if (k2 == 0) {
		printf("The digit from the sequence under the given number is %d", k1 % 10);
	}
	if (k2 == 2) {
		printf("The digit from the sequence under the given number is %d", (k1 / 10) % 10);
	}
	if (k2 == 1) {
		printf("The digit from the sequence under the given number is %d", k1 / 100);
	}
}
