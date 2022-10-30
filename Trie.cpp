#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;

const int N=3e3+1, M=1e9+1, Q=2e5+5, MOD=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double EPS=1e-8;


class Trie {
private:

    struct node {
        int cnt = 0;
        bool isLeaf = 1;
        node *child[26];
    };
    node *root;

public:
    Trie() {
        root = create();
    }

    node *create() {
        node *nd = new node();
        for (int i = 0; i < 26; ++i)nd->child[i] = NULL;
        nd->isLeaf = 1;
        return nd;
    }

    void add(string s) {
        node *nd = root;
        for (auto ch: s) {
            if (nd->child[ch - 'a'] == NULL) {
                nd->isLeaf = 0;
                nd->child[ch - 'a'] = create();
            }
            nd = nd->child[ch - 'a'];
            ++nd->cnt;
        }
    }

    bool Ispre(string s) {
        node *nd = root;
        for (auto ch: s)nd = nd->child[ch - 'a'];
        return !(nd->isLeaf);
    }

    int query(string s) {
        node *nd = root;
        for (auto ch: s) {
            if (nd->child[ch - 'a'] == NULL)return 0;
            nd = nd->child[ch - 'a'];
        }
        return nd->cnt;
    }
};



int main(){
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);

    return 0;

}

