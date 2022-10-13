#include<iostream>
using namespace std;

int main(){
	string pilih;
	int angka[100], input;
	
	cout << "===========================" <<endl;
	cout << "=       Program C++       =" <<endl;
	cout << "===========================" <<endl;
	cout << "= 1. perulangan for       =" <<endl;
	cout << "= 2. perulangan while     =" <<endl;
	cout << "= 3. perulangan Do-while  =" <<endl;
	cout << "= 4. array 1 dimensi      =" <<endl;
	cout << "= 5. array multidimensi   =" <<endl;
	cout << "===========================" <<endl;
	cout << "Pilih : "; cin >> pilih;
	cout << "==========================" <<endl;
	if( pilih == "1" ){
		cout << "Perulangan For" <<endl;
		cout << "===========================" <<endl;
		for(int a = 1; a<=10; a++){ 
			cout<<a;
		}
	}
	else if(pilih == "2" ){
		cout << "Perulangan While" <<endl;
		cout << "===========================" <<endl;
		int a=1;
		while(a<=10){
			cout<<a;
			a++;
		}
	}
	else if(pilih == "3" ){
		cout << "Perulangan Do-While" <<endl;
		cout << "===========================" <<endl;
		int a=11;
		do{
			cout<<a<<endl;
			a++;
		}while(a<=10);
		cout<<"Nilai terakhir a "<<a;
		
	}
	else if(pilih == "4" ){
		cout << "Program Array 1D " <<endl;
		cout << "===========================" <<endl;
		cout << "Masukan banyaknya angka : "; cin >> input;
		cout << "===========================" <<endl;
		for (int i = 0; i < input; i++){
			cout << "Masukan Angka ke " << i << " : "; cin >> angka[i];
		}
		cout << "===========================" <<endl;
		for (int i = 0; i < input; i++){
			cout << "Array Ke-[" << i << "] Berisi angka :  " << angka[i] <<endl;
		}
	}
	else if(pilih == "5" ){
		cout << "Program Array Multidimensi" << endl;
		cout << "===========================" <<endl
		int arr[2][2];
		
  		arr[0][0] = 10;
  		arr[0][1] = 20;
 	    arr[1][0] = 30;
  		arr[1][1] = 40;
 
  		cout << "Isi variabel arr:" << endl;
  		cout << arr[0][0] <<" "<< arr[0][1] << endl;
  		cout << arr[1][0] <<" "<< arr[1][1] << endl;
		
	}
}
