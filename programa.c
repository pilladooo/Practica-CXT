#include <stdio.h>

// Añadida a función multiplicación
int multiplicacion(int a, int b){
	return a*b;
}

int main(){
	int a = 2;
	int b = 3;
	int c = a*b;
	printf("a = %i, b= %i, aXb= %i \n",a,b,c); 
	printf("A multiplicación é %i\n",multiplicacion(a,b));
return 0;
}


