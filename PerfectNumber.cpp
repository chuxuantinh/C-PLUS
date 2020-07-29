class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=1;
        if(num==0 || num==1)
            return false;
        for(int i=2;i<=(int)sqrt(num);i++)
        {
            if(num%i==0)
            {
                if(i==sqrt(num))
                    sum+=i;
                else
                    sum+=i+num/i;
            }
                
        }
        if(sum==num)
            return true;
        return false;
    }
};
