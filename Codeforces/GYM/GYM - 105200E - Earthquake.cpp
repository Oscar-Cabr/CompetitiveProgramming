/*
    The following is an original solution to the problem: GYM 105200-E "Earthquake" of Codeforces.
    Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Graphs, BFS.

    Check out the problem at: https://codeforces.com/gym/105200/problem/E

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

vector<vector<int>> grafo;
vector<int> visitados;
vector<int> recorrido;
queue<int> cola;

void bfs(int nodo) {
    recorrido.push_back(nodo);
    visitados[nodo] = 1;
    
    for (auto vecino : grafo[nodo]) {
        if (!visitados[vecino]) {
            cola.push(vecino);
        }
    } 
    
    while (!cola.empty()) {
        nodo = cola.front();
        cola.pop();
    
        if (!visitados[nodo]) {
            bfs(nodo);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    grafo.assign(n + 1, vector<int>());
    visitados.assign(n + 1, 0);
    pair<int, int> ent;
    for(int i = 0; i < m; i++){
        cin >> ent.first;
        cin >> ent.second;
        grafo[ent.first].push_back(ent.second);
        grafo[ent.second].push_back(ent.first);
    }
    bfs(1);
    int i = 1, h=0;
    while(i<=n){
        if(!visitados[i]){
            h++;
            bfs(i);
        }
        i++;
    }
    cout << h << '\n';

}

int main() {
    fastIo();
    solve();
}