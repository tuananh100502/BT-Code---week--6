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
//Loi:+ Chia so 0 bi loi chuong trinh
//    + Chua co dieu kien N > 0 
