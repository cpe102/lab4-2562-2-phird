#include<iostream>

using namespace std;

//Write function findDistance() here
double findDistance(double u,double a,double t){
   return u*t+0.5*a*t*t ;
}

int main(){
  double u, a, t ;
  cout << "Input u :: ";
  cin >> u ;
  cout << "Input a :: "; 
  cin >> a;
  cout << "Input t :: ";
  cin >> t;
  cout << "Your Distance is :: "<< findDistance(u,a,t) << "\n";
  return 0;

  //Calling findDistance() using test cases
}
