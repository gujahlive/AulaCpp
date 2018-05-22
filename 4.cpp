#include<iostream>
//#inlcude<string.h>
using namespace std;
int main(){
	int tamanho,i=0,n;
	char palavra[31],palindromo[31],contrario[31],cont=0;
	cout<<"Informe uma palavra e verifique se ela é palindroma\n";
	cin>>palavra;
	
    while(palavra[i]!= '\0'){// while pra saber o tamanho da palavra
    	i++;
    	
	}
	
    //tamanho = (sizeof(palavra)/sizeof(*palavra)); //sizeof
    
	cout<<"tamanho[i]: "<< i << "\nPalavra: "<< palavra;
    for (n=0;n<i;n--){
    	contrario[cont-1] = palavra[i];
	}
    
    
	
	
	return 0;
	
}
