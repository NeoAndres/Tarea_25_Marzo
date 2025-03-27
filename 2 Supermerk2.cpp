#include <iostream>
float prc,descto,vpagar;
int nbola;
int main(int argc, char** argv) {
	printf("Valor compra:");
	scanf("%f", &prc);
	printf("Numero Balota [1,4]:");
	scanf("%d", &nbola);
	if (nbola==1)
	{printf("No hay descuento, el valor es:%f", prc);
	}else if (nbola==2)
		{descto=prc*0.09;
		vpagar=prc-descto;
		printf("El descuento es del 9%:%f", vpagar);
		}else if (nbola==3)
			{descto=prc*0.3;
			vpagar=prc-descto;
			printf("El descuento es del 30%:%f", vpagar);
			}else if (nbola==4)
				{descto=prc*1;
				vpagar=prc-descto;
				printf("El descuento es del 100%:%f", vpagar);
				}else
					{printf("ERROR, numero fuera del rango.");
					}
	return 0;
}
