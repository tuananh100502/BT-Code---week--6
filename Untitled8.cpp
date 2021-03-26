#include <iostream>
using namespace std;
	string s;
	char a[50];
	int b[50];
    int n;
void recursive(int x)
{
	for(int i=0; i<n; i++)
		{
			if(b[i]==0)
			{
			b[i]=1;
			a[x] = s[i];
			
			if (x==n) 
			{
				for(int k=1; k<=n; k++)
					cout<<a[k]<<;
    cout << endl;			
			}	
			if(x<n) recursive(x+1);
			b[i]=0;
		}
		}
}
int main()
{
    cin >> s;
    n=s.length();
 
    recursive(1);
    return 0;
}
