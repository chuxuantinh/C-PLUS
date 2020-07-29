class Solution {
public:
    bool selfDividing(int nb, int base)
    {
        return nb > 0 ? (nb%10 == 0 || base%(nb%10) != 0) ? false : selfDividing(nb/10, base) : true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        int tmp = left%10;
        if (tmp != 0)
            left = left-tmp;
        for (int i = left; i<right;i+=10) {
            for (int z = tmp; z<=9 && z+i <= right; z++)
                if (selfDividing(z+i, z+i))
                    res.push_back(z+i);
            tmp = 1;
        }
        return res;
    }
};
