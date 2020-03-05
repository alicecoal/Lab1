#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void)
{
	int num, flag, i; char x;
	char symbol[100];
	flag = 1; num = 0; i = 0;
	printf("Please, enter the required value: ");
	while (flag == 1) {
		if (i <= 4) {
			scanf("%c", &symbol[i]);
			if ((symbol[i] == '\n')) {
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
	while (flag == 1)
	{
		num = 0;
		if ((symbol[3] == '\n') || (symbol[2] == '\n') || (symbol[1] == '\n') || (symbol[4] == '\n')) {
			if (symbol[0] != '0') {
				for (i = 0; i < sizeof(symbol); i++) {
					if (symbol[i] == '\n') {
						break;
					}
					else {
						if ((symbol[i] <= '9') && (symbol[i] >= '0')) {
							num = num * 10 + (symbol[i] - '0');
						}
						else {
							num = 0;
							break;
						}
					}
				}
			}
			if ((num > 0) && (num < 3001)) {
				flag = 0;
			}
		}
		if (flag == 1) {
			printf("The entered value is invalid, try again.\n");
			printf("Please, enter the required value: ");
			i = 0;
			while (flag == 1) {
				if (i <= 4) {
					scanf("%c", &symbol[i]);
					if ((symbol[i] == '\n')) {
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
	int k1 = 100 + (num - 1) / 3;
	int k2 = num % 3;
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
