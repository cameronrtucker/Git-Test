
#include <iostream>

using namespace std;

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
  
  return 0;
}
