/*
    The following is an original solution to the problem: 377-A "Maze" of Codeforces.
    Rated difficulty: 1600. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Graphs, BFS, Grid.

    Check out the problem at: https://codeforces.com/contest/377/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <bits/stdc++.h>
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define F first
#define S second
#define PB push_back
using namespace std;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vi> vii;
typedef vector<vpi> vvpi;

vpi recorrido;
vector<vector<int>> visitados;
void solve() {
    int n,m, k;
    cin >> n >> m >> k;
    char a[n][m], c;
    pi start;
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> c;
            a[i][j] = c;
            if(c == '.')
                start = {i, j};
        }
    }
    stack<pair<int, int>> pila;    
    visitados.assign(n, vector<int>(m, 0));
    
    recorrido.PB({start.F, start.S});
    visitados[start.F][start.S] = 1;
    pila.push(start);
    while(!pila.empty()){
        pair<int, int> ubi;
        ubi = pila.top();
        pila.pop();
        if(ubi.first+1 < n){
            if(a[ubi.first + 1][ubi.second] == '.' && visitados[ubi.first + 1][ubi.second] == 0){
                pila.push({ubi.first+1, ubi.second});
                recorrido.PB({ubi.first+1, ubi.second});
                visitados[ubi.first + 1][ubi.second] = 1;
            }                        
        }
        if(ubi.second+1 < m){
            if(a[ubi.first][ubi.second+1] == '.' && visitados[ubi.first][ubi.second+1] == 0){
                pila.push({ubi.first, ubi.second+1});
                recorrido.PB({ubi.first, ubi.second+1});
                visitados[ubi.first][ubi.second+1] = 1;
            }                        
        }
        if(ubi.first-1 >= 0){
            if(a[ubi.first - 1][ubi.second] == '.' && visitados[ubi.first - 1][ubi.second] == 0){
                pila.push({ubi.first-1, ubi.second});
                recorrido.PB({ubi.first-1, ubi.second});
                visitados[ubi.first - 1][ubi.second] = 1;
            }                        
        }
        if(ubi.second-1 >= 0){
            if(a[ubi.first][ubi.second-1] == '.' && visitados[ubi.first][ubi.second-1] == 0){
                pila.push({ubi.first, ubi.second-1});
                recorrido.PB({ubi.first, ubi.second-1});
                visitados[ubi.first][ubi.second-1] = 1;
            }                        
        }
    }
    int i = int(recorrido.size()-1);
    while(k>0){
        a[recorrido[i].F][recorrido[i].S] = 'X';
        i--; k--;
    }
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j];
        }
        cout << '\n';
    }
    

}

int main() {
    fastIo();
    solve();
}