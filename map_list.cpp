#include<bits/stdc++.h>
using namespace std;

unordered_map<char, vector<int>> mapListCreate(string S){
    unordered_map<char, vector<int>> mp;

    int n = S.length();

    for(int i=0; i<n; i++){
        mp[S[i]].push_back(i);
    }

    return mp;
}

int main(){
    string S = "AABABBA";

    // Now I have store like that:
    // A -> [0, 1, 3, 6]
    // B -> [2, 4, 5]

    unordered_map<char, vector<int>> mp = mapListCreate(S);

    return 0;
}