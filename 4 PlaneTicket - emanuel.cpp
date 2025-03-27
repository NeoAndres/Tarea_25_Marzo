#include <iostream>
int dias;
float km, vp;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float valortotal (int dias, float km)
{if(km>1 && dias>5){
	vp=(km*89)*0.30;
}else{
	vp=km*89;
}
return vp;

}

int main(int argc, char** argv) {
	printf("Ingrese la cantidad de dias de alojamiento");
	scanf("%d",&dias);
	printf("Ingrese la cantidad de kilometros a recorrer");
	scanf("%f",&km);	
	vp=valortotal(dias,km);
	
	printf("El valor a pagar:%f ", vp);
	return 0;
}