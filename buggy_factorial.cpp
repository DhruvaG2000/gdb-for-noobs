#include<iostream>
using namespace std;

double factorial(double n){
  double res=1;
  while(n<=1){  //<-- trust me, we all make such silly mistakes!
    res*=n;
    n--;
  }
  return res;
}

int main() {
    long n;
    cout << "enter any number: \n";
    cin >> n;
    cout << factorial(n);
}
