class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int nums[n];
        
        for(int i = 0; i < n; i++){
            switch(s[i]){
                case 'I': nums[i] = 1; break;
                case 'V': nums[i] = 5; break;
                case 'X': nums[i] = 10; break;
                case 'L': nums[i] = 50; break;
                case 'C': nums[i] = 100; break;
                case 'D': nums[i] = 500; break;
                case 'M': nums[i] = 1000; break;
                default: nums[i] = 0;
            }
        }
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(i < n - 1 && nums[i] < nums[i+1]){
                sum -= nums[i];
            } else {
                sum += nums[i];
            }
        }
        
        return sum;
    }
};