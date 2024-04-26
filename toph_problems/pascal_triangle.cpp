#include <bits/stdc++.h>

using namespace std;

void printPascal(int n) 
{ 
    int arr[n][n],sum=0; 
    for (int line = 0; line < n; line++) 
    { 
        for (int i = 0; i <= line; i++) 
        { 
        if (line == i || i == 0) 
            arr[line][i] = 1; 
        else
            arr[line][i] = arr[line - 1][i - 1] +  
                            arr[line - 1][i]; 
        sum+= arr[line][i]+1;
        } 
    } 
            cout <<sum<<endl; 
} 
 
int main() 
{ 
    int n; 
	cin>>n;
    printPascal(n); 
    return 0; 
} 
