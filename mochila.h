#ifndef MOCHILA_H
#define MOCHILA_H

#include <string>
#include <vector>

using namespace std;

struct Item
{
    string nome;
    int beneficio;
    float peso;
};

class Mochila
{
private:
    vector<Item> cromossomo;
public:
    int fitness;
    Mochila(vector<Item> _cromossomo);
    Mochila crossover(Mochila m2);
    Item mutacao(vector<Item> _cromossomo);
};

#endif // MOCHILA_H
