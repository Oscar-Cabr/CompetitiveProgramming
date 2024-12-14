/*
    The following is an original solution to the problem: 1676 - "Road Construction" of CSES Problemset.
    Rated difficulty: 12471 / 12934. Language: C++ (C++11).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Graphs, Disjoint Set Union.

    Check out the problem at: https://cses.fi/problemset/task/1676

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;
#define endl '\n'
#define fi first
#define se second
typedef long long ll;
const int INFTY = INT_MAX;
const int MOD = 1000000007;

class DisjointSets
{
  private:
	vector<int> parents;

  public:
	vector<int> sizes;
	DisjointSets(int size) : parents(size), sizes(size, 1)
	{
		for (int i = 0; i < size; i++) { parents[i] = i; }
	}

	/** @return the "representative" node in x's component */
	int find( int x )
	{
	    return parents[x] == x ? x : ( parents[x] = find( parents[x] ) );
	}

	/** @return whether the merge changed connectivity */
	bool unite( int x, int y )
	{
		int x_root = find(x);
		int y_root = find(y);
		if (x_root == y_root)
		{
		    return false;
		}

		if ( sizes[x_root] < sizes[y_root] )
		{
		    swap(x_root, y_root);
		}
		
		sizes[x_root] += sizes[y_root];
		parents[y_root] = x_root;
		return true;
	}

	/** @return whether x and y are in the same connected component */
	bool connected( int x, int y )
	{
	    return find(x) == find(y);
	}
	void printLists()
	{
	    cout << "Printing parents..." << endl;
	    for(auto i : parents)
	        cout << i << " ";
        cout << endl << "Printing sizes..." << endl;
        for(auto i : sizes )
            cout << i << " ";
	}
};

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fastIO();
    
	int node_num, query_num, number_of_components, largest_component = 1;
	
	cin >> node_num >> query_num;
	
	number_of_components = node_num;
	
	DisjointSets dsu( node_num );
	
	for (int i = 0; i < query_num; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;

        if( dsu.unite(x, y) )
        {
            largest_component = max( largest_component, dsu.sizes[ dsu.find( x ) ] );
            number_of_components--;
        }
        
        cout << number_of_components << " " << largest_component << endl;
	}
	
    return 0;
}