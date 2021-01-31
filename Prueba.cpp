#include<stdio.h>

typedef struct vd{
	int simples;
	int azucar;
	int chispas;
}vd;

int main(){
	vd dias[30];
	int num;
	
	int td=0;
	float tce=0, tcv=0;
	
	int volv=0;
	
	printf("Bienvenido, ingrese los datos\n");
	

	printf("Numero de dias a capturar: ");
	scanf("%d",&num);
		
	for(int i=0;i<num;++i){
		printf("Cantidad de docenas de galletas simples vendidas en el dia %d: ",i+1);
		scanf("%d",&(dias[i].simples));
		printf("Cantidad de docenas de galletas con azucar vendidas en el dia %d: ",i+1);
		scanf("%d",&(dias[i].azucar));
		printf("Cantidad de docenas de galletas con chispas vendidas en el dia %d: ",i+1);
		scanf("%d",&(dias[i].chispas));
	
		td+=dias[i].simples+dias[i].azucar+dias[i].chispas;
		tce+=dias[i].simples*7.50+dias[i].azucar*12.50+dias[i].chispas*15.50;
		tcv+=dias[i].simples*9.75+dias[i].azucar*14.50+dias[i].chispas*18.50;
	}
	 
	printf("Se capturaron %d dias\n",num);
	printf("Total de docenas vendidas: %d\n",td);
	printf("Total de costo de elaboracion: %.2f\n",tce);
	printf("Total de costo de venta: %.2f\n",tcv);
	printf("Ganancia total: %.2f\n",tcv-tce);
	
	
}

