//***************************8Valid Palindrome*************************
class Solution {
public:
    bool isPalindrome(string s) {
        string new_string;

        for(int i=0; i< s.size(); i++){
            char c= s[i];
            //check if c is aphanumeric 
            if(isalnum(c)){
                //it is alphanumeric so add this in new string
                new_string += tolower(c);
            }
        }

        //use 2 pointer to check if its a palindrome
        int left=0;
        int right= new_string.size()-1;

        while(left<right){
            if(new_string[left]!=new_string[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
