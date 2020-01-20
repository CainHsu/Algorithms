# Union-Find
## Problem to slove
Consider this situation: there're large amount of objects, each object are connected with an object directly or indirectly.  
In this case, we have to judge if two given objects are connected.
## Definition
### Connection
We start at a kind of dynaminc connectivities.  
For example, the input is a sequence of pairs of integers.
Each pair of integers, for example, p and q, implies that p and q are connected.  
Connected is a equivalence relation, which means:
- Reflexive: p is connected to q
- Symmetric: If p is connected to q, then q is connected to p
- Transitive: If p is connected to q, q is connected to r, then p is connected to r
### Connected component
Provided that p and q are connected, this connection is the smallest scale of connected component.  
In this case, connected component is kind of connection net, each integer from a connect component are connected directly or indirectly.  
As the example I given, p is connected to q, q is connected to r. Then p, q and r form a connected component. p is connected to r by q.
## Algorithm design
```C++
class WeightedQuickUnionUF{
private:
    static int* id;
    static int* sz;
    static int count;
    int find(int p);
public:
    explicit WeightedQuickUnionUF(int N);
    int findCount();
    bool isConnected(int p, int q);
    void connect(int p, int q);
};
```

## Code
```C++
class WeightedQuickUnionUF{
private:
    
public:

}
```




 