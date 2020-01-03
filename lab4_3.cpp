#include <iostream>
#include <cmath>
using namespace std;

int findDivisor(int x,int i){
    while (i < x){
        if (x%i==0){
		return i;
		}
    	else{i++;}
}}


int main(){
    int x,i=2;
    cout << "Input Your Number :: " ;
    cin >> x;
    cout << "The Output is :: " << findDivisor(x,i) << "\n";

return 0;

}


