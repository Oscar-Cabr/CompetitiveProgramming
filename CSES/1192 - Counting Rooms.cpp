/*
    The following is an original solution to the problem: 1192 - "Counting Rooms" of CSES Problemset.
    Rated difficulty: 39072 / 41376. Language: C++ (C++11).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Graphs, Grids, BFS.

    Check out the problem at: https://cses.fi/problemset/task/1192

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;
#define fi first
#define se second

#define MAX 1002

vector< vector<char> >  building (MAX, vector<char>(MAX, '#'));

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void bfs( int n, int m, int i, int j)
{
    stack< pair<int, int> > f;

    f.push({i, j});

    while( ! f.empty() )
    {
        pair<int, int> c = f.top();
        f.pop();

        if( building[ c.fi ][c.se + 1] == '.' )
            f.push( {c.fi, c.se + 1} );
        if( building[c.fi + 1][ c.se ] == '.' )
            f.push( {c.fi + 1, c.se} );
        if( building[ c.fi ][c.se - 1] == '.' )
            f.push( {c.fi, c.se - 1} );
        if( building[c.fi - 1][ c.se ] == '.' )
            f.push( {c.fi - 1, c.se} );
            
        building[ c.fi ][ c.se ] = '#';
    }
}

void solve( int n, int m )
{
    int sol = 0;
            
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if( building[i][j] == '.' )
            {
                bfs(n, m, i, j);
                sol++;
            }
        }
    }
    
    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int height, width;
    
    cin >> height >> width;

    for(int i = 1; i <= height; i++)
        for(int j = 1; j <= width; j++)
            cin >> building[i][j];
    
    solve( height, width );
    
    return 0;
}