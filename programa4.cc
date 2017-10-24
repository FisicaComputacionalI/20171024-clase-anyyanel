//Programa que sume los primeros N naturales
#include <iostream>
using namespace std;
int main(){
  long N;
  long sum=0;
  cout<<"Dame un numero natural"<<endl;
  cim>>N;
  for (long i=1; i<=N; i++)
    {sum=sum+i;}
  cout<<"La suma es"<<sum<<endl;
  return 0;
}
