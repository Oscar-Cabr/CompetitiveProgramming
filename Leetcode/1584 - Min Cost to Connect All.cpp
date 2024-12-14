/*
    The following is an original solution to the problem: 1584 - "Min Cost to Connect All" of LeetCode.
    Rated difficulty: Medium. Language: C++.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Graphs, Primm's Algorithm.

    Check out the problem at: https://leetcode.com/problems/min-cost-to-connect-all-points/

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
const int INFTY = INT_MAX;
const int MOD = 1E9+7;

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

struct Edge
{
    int from, to, weight;
    bool operator<(Edge const& other)
    {
        return weight < other.weight;
    }
};

class Solution
{
public:
    int minCostConnectPoints(vector<vector<int>>& points)
    {
        fastIO();

        int n = points.size() ;
        vector<Edge> edges;

        int cost = 0;
        vector<int> tree_id( n );
        vector<Edge> result;
        for ( int i = 0; i < n; i++ )
            tree_id[i] = i;

        for( int i = 0; i < n; i++ )
        {
            vector<int> dot1 = points[ i ];
            for( int j = i; j < n; j++ )
            {
                vector<int> dot2 = points[ j ];
                Edge newEdge;
                newEdge.from = i;
                newEdge.to = j;
                newEdge.weight = abs( dot1[0] - dot2[0] ) + abs( dot1[1] - dot2[1] );
                edges.push_back( newEdge );
            }
        }

        sort( edges.begin(), edges.end() );

        for ( Edge edge : edges )
        {
            if (tree_id[edge.from] != tree_id[edge.to])
            {
                cost += edge.weight;
                result.push_back( edge );

                int old_id = tree_id[ edge.from ], new_id = tree_id[ edge.to ];

                for ( int i = 0; i < n; i++ )
                {
                    if ( tree_id[i] == old_id )
                    {
                        tree_id[i] = new_id;
                    }
                }
            }
        }

        return cost;
    }
};