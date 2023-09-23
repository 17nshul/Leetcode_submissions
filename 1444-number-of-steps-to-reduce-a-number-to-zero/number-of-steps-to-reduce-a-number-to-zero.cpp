class Solution {
public:
    int numberOfSteps(int num) {
        if(num==0) return 0;
        int step=0;
        while(num!=0){
            if(num%2==0){
                num>>=1;
                step++;
            }
            else{
                num=num-1;
                step++;
            }
        }
        return step;
    }
};