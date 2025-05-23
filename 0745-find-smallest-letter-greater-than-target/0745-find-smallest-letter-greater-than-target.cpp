class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int l=0,r=n-1;
        char sm=letters[0];
        while(l<=r){
            int mid = l+(r-l)/2;
            if(letters[mid]<=target){
                l=mid+1;
            }else{
                r=mid-1;
                sm=letters[mid];
            }
        }
        return sm;
    }
};