#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class MagicDictionary {
public:
    vector<string> ans;
    MagicDictionary() {
        
    }
    
    void buildDict(vector<string> dictionary) {
        ans=dictionary;
    }
    
    bool search(string searchWord) {
        for(string word : ans)
        {
            if(word.size()!=searchWord.size())
            {
                continue;
            }
            int count=0;
            for(int i=0;i<word.size();i++)
            {
                if(word[i]!=searchWord[i])
                {
                    count++;
                }
            }
            if(count==1)
            {
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */