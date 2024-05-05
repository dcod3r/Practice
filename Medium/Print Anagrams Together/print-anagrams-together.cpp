//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    string generate(string word){
        int arr[26] = {0};
        
        for( auto &ch : word)
        {
            arr[ch-'a']++;
        }
        
        string new_word = "";
        
        for(int i =0 ; i<26; i++)
        {
            int freq = arr[i];
            
            if(freq > 0)
                new_word += string(freq, i+'a');
        }
        
        return new_word;
    }
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        
        vector<vector<string>> ans;
        
        unordered_map<string, vector<string>> mp;
        
        for(int i=0; i<string_list.size(); i++){
            
            string word = string_list[i];
            
            string new_word = generate(word);
            
            mp[new_word].push_back(word);
            
        }
        
        for( auto it : mp){
            ans.push_back(it.second);
        }
        
        return ans;
        //code here
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

// } Driver Code Ends