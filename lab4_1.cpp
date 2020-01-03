#include <iostream>
#include <cmath>
using namespace std;

double Calcu(int x){
    float e=2.71828,y;
    y= (3*pow(x,3)+2*e+pow(2,2*x+1)+sqrt(pow(x,2)+1)) ;
	return y;
}

int main (){
    int x ;
    cout << "Enter X ::" ;
    cin >> x ;
    cout <<" Result Y = "<< Calcu(x)<<"\n";
 
 return 0;

}

