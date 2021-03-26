#include <iostream>
using namespace std;
double H(int N){
	return H(N-1) +1.0/N;
}
 int main (){
 	int N;
 	cin>>N;
    cout << H(N);
    
 }
 
 //Fault : Loi tran bo nho (memory) khi nhap so N = 5000 .
