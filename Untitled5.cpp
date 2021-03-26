#include <iostream>
#include <cstring>
using namespace std;
long F(int n) {
 if (n == 0) return 0;
 if (n == 1) return 1;
 return F(n-1) + F(n-2);
}
int main(){
	int i;
	cin >> i;
	while (i<0){
		cin >> i;
	}
	for(int j=0;j<i;j++){
		cout << F(j) << " "; 
	}
	
}
