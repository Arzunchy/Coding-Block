class Solution {
public:
    int thirdMax(vector<int>& nums) {
       long first=L,long second=long_min,long third=long_min;
       for(x:nums){
        if(x=first||x=second||x=third)
        continue;
        if(x>first){
            third=second;
            second=fisrt;
            first=x;
        }else if(x>second){
            third=second;
            second=x;
        }else if(x>third){
            third=x;
        }
        if(x==long_min){
            return x;
        }
       }
    }
};