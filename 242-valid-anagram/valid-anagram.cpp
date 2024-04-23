class Solution {
public:
    bool isAnagram(string s, string t) {
        // O(nlogn)
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s == t)
        //     return true;
        // else 
        //     return false;
        
        // O(n)
        
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> mp1, mp2;
		// Count number of character occurs in both the strings.
        for (char c: s)
            mp1[c]++;
        for (char c: t)
            mp2[c]++;
	
        for (int i = 0; i < s.size(); i++)
            if (mp1[s[i]] != mp2[s[i]])
                return false;
        return true;
    }
};