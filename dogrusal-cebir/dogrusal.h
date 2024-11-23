#include <iostream>
#include <vector>
#include <string> // stoi string to integer

//using namespace std;
using std::cout, std::endl;
using std::vector;
using std::stoi, std::string, std::to_string;

typedef vector<double> vektor;
typedef vector<vektor> matris;
typedef vector<matris> tensör;

void yaz(const vektor& vek, string);
void yaz(const matris& mat, string);
void ikiyeBölX(vektor vek);
void ikiyeBölY(vektor vek);
void ikiyeBölA(vektor& vek);
void ikiyeBölB(vektor& vek);
