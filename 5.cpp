#include<iostream>
using namespace std;
int main(){
	 int n,i,constante,cont=1,result=0;
	 cout<<"digite um numero? ";
	 cin>>n;
	 constante = n;
	 cout<<"o numero: "<<n<<"\n";
	 for(i=1;i<=11;i++){
	 	cout<< constante << " x " << i-1 << " = " << result<<"\n";
	 	result = constante * cont;
	 	cont++;
	 	
	 }
	 
	 
	 
	return 0;
}
