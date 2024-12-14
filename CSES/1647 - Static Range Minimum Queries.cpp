/*
    The following is an original solution to the problem: 1647 - "Static Range Minimum Queries" of CSES Problemset.
    Rated difficulty: 19573 / 20992. Language: C++ (C++11).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Range Queries, Segment Tree.

    Check out the problem at: https://cses.fi/problemset/task/1647

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
const int INF = INT_MAX;

class Segment_tree{
    public :
    vll t ;

    Segment_tree(int n = 1e5+10){
        t.assign(n*4,INF) ;
    }

    /**
     * @brief Actualiza el segment tree cada vez que un valor en el vector original cambia.
     * 
     * @param node El índice del nodo actual del segment tree (inicialmente 1 para la raíz).
     * @param index El índice del vector original cuyo valor está siendo actualizado.
     * @param tl El límite izquierdo del rango que cubre el nodo actual (inicialmente 0).
     * @param tr El límite derecho del rango que cubre el nodo actual (inicialmente n-1).
     * @param val El nuevo valor que deseas asignar en el índice index.
     */
    void update(int node, int index , int tl , int tr, int val){

        if(tr < index || tl > index) return ;
        if(tl == tr){
            t[node] = val ;
        }
        else{
            int mid = tl + ((tr-tl)>>1) ;
            int lft = (node << 1) ;
            int rght = lft + 1;

            update(lft,index,tl,mid,val) ;
            update(rght,index,mid+1,tr,val) ;
            t[node] = min(t[lft],t[rght]) ;
        }

    }

    /**
     * @brief La usas cada vez que necesitas consultar algún rango de índices en el vector original. Devuelve el resultado de la consulta (en este caso, el valor mínimo en el rango).
     * 
     * @param node El índice del nodo actual del árbol segmentado (inicialmente 1 para la raíz).
     * @param l El límite izquierdo del rango de la consulta (el índice l dentro del vector original).
     * @param r El límite derecho del rango de la consulta (el índice r dentro del vector original).
     * @param tl El límite izquierdo del rango que cubre el nodo actual (inicialmente 0).
     * @param tr El límite derecho del rango que cubre el nodo actual (inicialmente n-1).
     * 
     * @return El resultado de la query hecha.
     */
    ll query(int node , int l , int r , int tl , int tr){

        if(tl > r || tr < l) return INF ;
        if(tl >= l && tr <= r){
            return t[node];
        }
        else{
            int mid = tl + ((tr-tl)>>1) ;
            int lft = (node << 1) ;
            int rght = lft + 1;

            ll q1 = query(lft,l,r,tl,mid) ;
            ll q2 = query(rght,l,r,mid+1,tr) ;

            return min(q1,q2) ;
        }
    }

    /**
     * @brief Construye el segment tree desde del vector original. Ésto debe hacerse al inicio, después de que tengas el vector de entrada.
     * 
     * @param v El vector original con los valores que se van a almacenar en el segment tree.
     * @param node El índice del nodo actual del segment tree (inicialmente 1 para la raíz).
     * @param tl El índice de la izquierda del rango que cubre el nodo actual (inicialmente 0 para el primer elemento del vector).
     * @param tr El índice de la derecha del rango que cubre el nodo actual (inicialmente n-1, donde n es el tamaño del vector).
     */
    void build(vi &v, int node , int tl , int tr ){
        if(tl == tr){
            t[node] = v[tl] ;
        }
        else{
            int mid = tl + ((tr - tl) >> 1) ;
            int lft = (node << 1) ;
            int rght = lft + 1;

            build(v,lft,tl,mid) ;
            build(v,rght,mid+1,tr) ;
            t[node] = min(t[lft] ,t[rght]) ;
        }
    }
};

void solve(Segment_tree &st, int size, int left, int right)
{
    ll answer = st.query(1, left, right, 0, size-1);
    cout << answer << endl;
}

int main()
{
    int size, queries;
    
    cin >> size >> queries;
    
    vector<int> numbers( size );
    Segment_tree segmentTree(size);
    
    for(int i = 0; i < size; i++) {
        cin >> numbers[i];
    }
    segmentTree.build(numbers, 1, 0, size-1);
    
    for(int i = 0; i < queries; i++) {
        int left, right;
        
        cin >> left >> right;
        
        solve(segmentTree, size, left-1, right-1);
    }
    
    return 0;
}