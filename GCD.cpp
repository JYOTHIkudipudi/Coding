#include <bits/stdc++.h>
using namespace std;
	// your code goes here
	int gcd(int a, int b){
	        int result = min(a,b);
	        while(result>0){
	                if(a%result==0 && b%result==0){
	                        break;
	                }
	                result--;
	        }
	        return result;
	}
	int main(){
	        int a,b;
	        cin >> a >> b;
	        cout << gcd(6,9) << endl;
	        return 0;
	}
