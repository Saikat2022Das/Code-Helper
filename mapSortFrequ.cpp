#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    static bool cmp(pair<char, int> &a, pair<char, int> &b){
        if(a.second==b.second)return a.first<b.first;
        return a.second<b.second;
    }

    void sortMap(unordered_map<char, int> &mp){

        vector<pair<char, int>> v;

        for(auto &x: mp){
            v.push_back(x);
        }

        sort(v.begin(), v.end(), cmp);

        mp.clear();

        for(auto p: v){
            mp[p.first] = p.second;
        }    
    }

    string frequencySort(string s) {
        unordered_map<char, int> mp;
        int n = s.length();
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }

        // Now we have to sort the map according to the frequency of the 
        // Character .

        sortMap(mp);

        // Now your map is soted according to the frequency.
        // Like :
        // Initially:
        // A-3
        // B-1
        // C-8
        // G-2

        // After Sorting it will be look like
        // B-1
        // G-2
        // A-3
        // C-8
    }
};