//
// Created by xuche on 2020/1/20.
//

#include "Class_UF.hpp"

int WeightedQuickUnionUF::find(int p) {
    if(p != id[p]){
        id[p] = id[id[p]];
        p = id[p];
    }
    return p;
}

WeightedQuickUnionUF::WeightedQuickUnionUF(int N){
    count = N;
    id = new int [N];
    sz = new int [N];
    for(int i = 0; i < N; ++i){
        id[i] = i;
        sz[i] = 1;
    }
}

int WeightedQuickUnionUF::findCount(){
    return count;
}

bool WeightedQuickUnionUF::isConnected(int p, int q) {
    return find(p) == find(q);
}

void WeightedQuickUnionUF::connect(int p, int q) {
    int i = find(p);
    int j = find(q);
    if(i == j) return;
    if(sz[i] < sz[j]){
        id[i] = j;
        sz[j] += sz[i];
    }
    else{
        id[j] = i;
        sz[i] += sz[j];
    }
    count--;
}

WeightedQuickUnionUF::~WeightedQuickUnionUF() {
    delete [] id;
    delete [] sz;
}

