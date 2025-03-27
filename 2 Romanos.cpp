#include <iostream>
int num;
int main(int argc, char** argv) {
	printf("Numero [1,5]:");
	scanf("%d",&num);
	switch (num)
	{
		case 1: printf("Equivalente a I");
			break;
		case 2: printf("Equivalente a II");
			break;
		case 3: printf("Equivalente a III");
			break;
		case 4: printf("Equivalente a IV");
			break;
		case 5: printf("Equivalente a V");
			break;
		default: printf("error");
	}
	return 0;
}
