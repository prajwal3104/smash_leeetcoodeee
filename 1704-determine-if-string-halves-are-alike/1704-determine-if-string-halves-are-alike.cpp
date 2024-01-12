class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
    bool halvesAreAlike(string s) {
        int vow = 0;
        int con = 0;
        for(int i = 0 ; i<s.size()/2 ; i++){
            if(isVowel(s[i])){
                vow++;
            }
            else{
                con++;
            }
        }
        for(int i = s.size()/2  ; i<s.size(); i++){
            if(isVowel(s[i])){
                vow--;
            }
            else{
                con--;
            }
        }
        if(vow!= 0 && con!=0){
            return false;
        }
        else{
            return true;
        }

    }
};