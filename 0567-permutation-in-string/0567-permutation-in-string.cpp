class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        if (n1 > n2) return false;
        
        vector<int> s1Freq(26, 0), windowFreq(26, 0);
        
        for (int i = 0; i < n1; i++) {
            s1Freq[s1[i] - 'a']++;
            windowFreq[s2[i] - 'a']++;
        }
        for (int i = n1; i < n2; i++) {
            if (s1Freq == windowFreq) return true;
            
            windowFreq[s2[i] - 'a']++;
            windowFreq[s2[i - n1] - 'a']--;
        }
        return s1Freq == windowFreq;
    }
};
