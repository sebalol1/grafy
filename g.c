#include <iostream>
#include <vector>
 
using namespace std;
 
const int MX = 500000;
 
vector<int> graph[MX];
int V, E;
 
int main() {
    cout << "Liczba wierzcholkow: ";
    cin >> V;
    cout << "Liczba krawedzi: ";
    cin >> E;
 
    for (int i = 1; i <= E; i++) {
        int a, b;
        cout << "Krawedz " << i << ": ";
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
 
    for (int i = 1; i <= V; i++) {
        cout << endl << "Sasiedzi wierzcholka " << i << ": ";
        for (vector<int>::iterator it = graph[i].begin(); it != graph[i].end(); ++it)
              cout << *it << ", ";
    }
 
    return 0;
}
