#include<string>
using namespace std;
bool comparar(const string& s1, const string& s2);
bool comparar(const string& s1, const string& s2, bool (*comparador)(const string&, const string&));
