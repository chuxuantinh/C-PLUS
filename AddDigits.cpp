class Solution {
public:
    int addDigits(int num) {
        int r=0,s=0;
        if(num<10) return num;
        while(num>0){
            r=num%10;
            s=s+r;
            num=num/10;
        }
    return addDigits(s);
    }
};
