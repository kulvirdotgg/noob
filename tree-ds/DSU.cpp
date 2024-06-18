#include <iostream>
#include <vector>

class DSU {
public:
    std::vector<int> parents, size;

    DSU(int v) {
        parents.resize(v + 1, 0);
        size.resize(v + 1, 1);

        for (int idx = 0; idx <= v; ++idx)
            parents[idx] = idx;
    }

    int findParent(int node) {
        int root = node;
        while (root != parents[root]) {
            root = parents[root];
        }
        while (root != parents[node]) {
            int parent = parents[node];
            parents[node] = root;
            node = parent;
        }
        return parents[node];
    }

    void unionBySize(int u, int v) {
        int parentU = findParent(u);
        int parentV = findParent(v);

        if (parentU == parentV) {
            return;
        }

        if (size[parentU] < size[parentV]) {
            parents[parentU] = parentV;
            size[parentV] += size[parentU];
        } else {
            parents[parentV] = parentU;
            size[parentU] += size[parentV];
        }
    }
};

int main() {
    DSU d(7);
    d.unionBySize(1, 2);
    d.unionBySize(2, 3);
    d.unionBySize(4, 5);
    d.unionBySize(6, 7);
    d.unionBySize(5, 6);
    if (d.findParent(3) == d.findParent(7)) {
        std::cout << "same parents" << '\n';
        d.unionBySize(3, 7);
    }

    for (int node = 0; node <= 7; ++node) {
        std::cout << "size of " << node << " is: " << d.size[node] << '\n';
        std::cout << "node: " << node << " parent: " << d.findParent(node)
                  << '\n';
    }
}
