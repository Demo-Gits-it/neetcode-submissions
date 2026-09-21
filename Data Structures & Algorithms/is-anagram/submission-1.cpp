class Solution {
public:
    bool isAnagram(string s, string t) {

        int s1 = s.length();
        int t1 = t.length();
        if(t1 != s1){return false;}

        unordered_map<char,int> m1;
        for(int i = 0; i<s1; i++){
            m1[s[i]++];
        }
        unordered_map<char,int> m2;
        for(int i = 0; i<t1; i++){
            m2[t[i]++];
        }

        return m1==m2;

    }
};
