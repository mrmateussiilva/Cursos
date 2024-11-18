#include <iostream>

using namespace std;



int main(){
	int size_vetor = 100000;
	
	int vetor[size_vetor];
	
	for (int i = 0 ; i < size_vetor; i++){
		vetor[i] = i * 12;
		
	};

	for (int i = 0;i < size_vetor; i++){
		cout << vetor[i] << endl;
	}

	cout <<  sizeof(vetor)/4 ;
	return 0;

} 
