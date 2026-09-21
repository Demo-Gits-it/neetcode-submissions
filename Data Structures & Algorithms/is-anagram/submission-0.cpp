class Solution {
public:
    bool isAnagram(string s, string t) {
        int s1 = s.size();
        int t1 = t.size();
        std::unordered_map<char,int> s2;
        std::unordered_map<char,int> t2;
        for(int i = 0; i<s1; i++){
            s2[s[i]]++;
        }
        for(int i=0; i<t1; i++){
            t2[t[i]]++;
        }
        for (const auto& [charac, times] : s2) {
        std::cout << charac << ": " << times << '\n';
        }
        
        for (const auto& [charac, times] : t2) {
        std::cout << charac << ": " << times << '\n';
        }
        if(s2==t2) return true;
        return false;
    }

};
