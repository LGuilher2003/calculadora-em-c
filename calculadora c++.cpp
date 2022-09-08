#include <iostream>
using namespace std;
int main(){
	float numero1, numero2, soma, subtracao, multiplicacao, divisao;
	char calculadora;
	cout<<"selecione um valor \n" ;
	cin>>numero1;
	cout<<"selecione outro valor \n";
	cin>>numero2;
	cout<<" selecione a operaçao +,-,/,*. ";
	cin>>calculadora;
	soma= numero1+numero2;
	subtracao=numero1-numero2;
	multiplicacao=numero1*numero2;
	divisao=numero1/numero2;

	switch(calculadora){
		
		case '+': 
		 cout<<"o resultado da soma e:\n" <<soma; 
	 	  
			break;
	
		case '-':
		 cout<<"o resultado da subtracao e :  \n"<<subtracao;
		 
		  break;
		  
		case '*':
		 cout<<"o resultado da multiplicacao e :  \n"<<multiplicacao;
		
		  break;
		  
		case '/':
		cout<<"o resultado da divisao e : \n"<<divisao;
		
				  break;
		  
		default:
			cout<<"nenhum opçao selecionada tente novamente.";
	}
	
return 0;	
}
