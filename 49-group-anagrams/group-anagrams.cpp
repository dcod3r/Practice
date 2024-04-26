class Solution {
public:
 string generate(string word)
        {
            int arr[26] = {0};

            for( char &ch : word){
                arr[ch-'a']++;
            }
            
            string new_word = "";

            for(int i=0; i<26; i++)
            {
                int freq = arr[i];

                if(freq > 0)
                    new_word += string(freq, i+'a');
            }
            return new_word; 
        }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       //USING SORTING 
       // N*klok(k)
      /*
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(int i=0; i<strs.size(); i++)
        {
            string temp = strs[i];

            sort(begin(temp), end(temp));

            mp[temp].push_back(strs[i]);
        }

        for(auto it : mp){
            ans.push_back(it.second);
        }

        return ans;
        */

        //Using wihtout sorting
        //O(N*K)

       

        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;

        for(int i=0; i<strs.size(); i++)
        {
            string word = strs[i];

            string new_word = generate(word);

            mp[new_word].push_back(word);
        }

        for(auto it : mp)
            ans.push_back(it.second);

        return ans;
    }
};