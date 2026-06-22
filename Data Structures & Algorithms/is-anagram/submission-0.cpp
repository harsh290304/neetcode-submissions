class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char,int> hash;

        for(char x : s){
            hash[x]++;
        }

        for(char x : t){
            if(hash[x] == 0) return false;
            hash[x]--;
        }
        return true;
    }
};