#include<iostream>
#include<cstdlib>
#include<string>
#include"delegado.hpp"

using namespace std;


int main()
{

  cout<<"Primeira texto é maior =  "<<comparar("Teste1","Teste2",comparar)<<endl;
  return EXIT_SUCCESS;
}
