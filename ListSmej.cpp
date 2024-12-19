#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n, m;
    fin >> n >> m;

    vector<vector<int>> smejList(n);

    for (int i = 0; i < m; ++i) {
        int u, v;
        fin >> u >> v;
        smejList[u - 1].push_back(v - 1);
        smejList[v - 1].push_back(u - 1);
    }

    for (int i = 0; i < n; ++i) {
        fout << smejList[i].size() << " ";
        for (int j : smejList[i]) {
            fout << j + 1 << " ";
        }
        fout << endl;
    }

    fin.close();
    fout.close();

    return 0;
}
