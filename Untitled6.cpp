#include <iostream>
using namespace std;

double H(int N) {
 if (N == 1) return 0.0;
 return H(N-1) + 1.0/N; 
}
int main(){
int N;
cin >> N;
cout << H(N) << endl;
}
