class Solution {
public:
    bool valid(char ch) {
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')) {
            return true;
        }
        else
            return false;
    }
    
    char tolowercase(char ch){
        if(ch>='a' && ch<='z' || (ch>=0 && ch<=9 ))
            return ch;
        else{
            ch=ch-'A'+'a';
            return ch;
        }
    }
    
    bool checkPalindrome(string s) {
        int f=0;
        int n=s.length(); 
        int e=n-1;
        while(f<=e) {
            if(s[f]!=s[e]) {
                return false;
            }
            else {
                f++;
                e--;
            }
        }
        return true;
    }
    
    bool isPalindrome(string s) {
        string temp="";
        
//         checking for valid chars
        for(int j=0; j<s.length(); j++) {
            if(valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
//         lowercase convertion
        for(int i=0; i<temp.length(); i++) {
            temp[i]=tolowercase(temp[i]);
        }
        
//         check palindrome
        return checkPalindrome(temp);
    }
};