#include<iostream>
#include<string>
#include"delegado.hpp"

using namespace std;

bool comparar(const string& s1, const string& s2)
{
  return s1>s2; 
}
bool comparar(const string& s1, const string& s2, bool comparador(const string& ss1, const string& ss2))
{
  return comparador(s1,s2);
}
