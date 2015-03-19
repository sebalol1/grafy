#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
    int V, E;     // V - liczba wierzcholkow, E - liczba krawedzi
    cout << "Liczba wierzcholkow: ";
    cin >> V;
    cout << "Liczba krawedzi: ";
    cin >> E;
 
    vector<int> *ZA = new vector<int>[V+1];    // mozna tez wykorzystac liste, nie ma to roznicy
 
    for(int i=1; i<=E; i++)       // wprowadz wierzcholki i krawedzie
    {
        int a, b;
        cout << "Krawedz " << i << ": ";
        cin >> a >> b;
        ZA[a].push_back(b);
        ZA[b].push_back(a);
    }
 
    for(int i=1; i<=V; i++)     // wypisujemy graf
    {
        cout << endl << "Sasiedzi wierzcholka " << i << ": ";
        for(vector<int>::iterator it = ZA[i].begin(); it != ZA[i].end(); ++it) cout << *it << ", ";
    }
 
    delete []ZA;     // zwalniamy pamiec
}
