
#include <iostream>

using namespace std;

int product (int n){
  int prod=1;
  int i=1;
  while (i<=n){
    prod=prod * (n-(i-1));
    ++i;
  }
  return prod;
}

int sum(int n){
  int result=0;
  int i=1;
  while (i<=n){
    result+=n-(i-1);
    ++i;
  }
  return result;
}

int main() {
  int n;
  cout<<"Please enter a number: \n";
  cin>>n;
  cout<<sum(n)<<endl;
  cout<<product(n)<<endl;
  return 0;
}
