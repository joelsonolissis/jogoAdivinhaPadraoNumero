#include<stdio.h>
#include<conio.h>

int main(){
 int numero;
 printf("Jogo da Advinha, adivinha que padrao de numero queremos\n");
 do{
 
 printf("Digite um numero:");
 scanf("%d",&numero);
 }while(numero==0);
 
if(numero>1 && numero<100){

	printf("Este numero esta no intervalo 1 a 100. Nao e este o padrap perdeu, tente novamente, como recompensa te ensinameres nos numero pares \n desse numero ate 100 \n");
	for(int i=numero;i<=100;i++){

	if(i%2!=0){
	
		printf("numeros impares de %d a 100: %d \n",numero,i);}
	}
}else if(numero%2==0 || numero%5==0){
int digito=0,soma=0;

while(numero>0){
soma+=numero%10;
    numero/=10;
}
if(soma==10){

	printf("Ganhou");
}else{
printf("perdeu");
}
	
}else{

	printf("Perdeste");
}


}
