class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        int* tempArr = new int[10];
        int k = 0;

        while(x > 0){
            int digit = x % 10;
            tempArr[k] = digit;
            x = x / 10;
            k++;
        }

        bool result = true;
        for(int i = 0; i < k/2; i++){
            if(tempArr[i] != tempArr[k-1-i]){
                result = false;
                break;
            }
        }

        delete[] tempArr;
        return result;
    }
};