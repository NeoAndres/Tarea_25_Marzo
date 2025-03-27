#include <iostream>
#include <stdio.h>
int num;
int main(int argc, char** argv) {
	printf("Numero a evaluar:");
	scanf("%d", &num);
	system("color 12");
	if (num==0)
	{printf("El numero es cero");
	}	else if (num<0)
		{system("color 14");
		printf("El numero es negativo");
		}	else
			{system("color 15");
			printf("El numero es positivo");
			}
	return 0;
	}
