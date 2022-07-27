#include <iostream>
using namespace std;

int somaD (int n){
	int i = 10, soma = 0, alg, resto;
	while(n / i != 0){
		i = i * 10;
	}
	i = i/10;
	while(i >= 1){
		alg = n / i;
		resto = n % i;
		n=resto;
		soma = soma + alg;
		i = i / 10;
	}
	
	return soma;
}

string harshad(int n){
	if(n % somaD(n) == 0){
		return "sim";
	}else{
		return "nao";
	}
}

int main (){
	int num;
	
	cin >> num;
	
	cout << num % somaD(num) << " " << harshad(num) << endl;
	
	return 0;
}
