//
// Created by xuche on 2020/1/20.
//

#ifndef ALGORITHMS_CLASS_UF_HPP
#define ALGORITHMS_CLASS_UF_HPP

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
    ~WeightedQuickUnionUF();
};

#endif //ALGORITHMS_CLASS_UF_HPP
