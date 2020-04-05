#ifndef DELEGADO_H
#define DELEGADO_H
bool comparar(const std::string& s1, const std::string& s2);
bool comparar(const std::string& s1, const std::string& s2, bool (*comparador)(const std::string&, const std::string&));
#endif
