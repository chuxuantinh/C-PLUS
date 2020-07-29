class Solution {
public:
    int romanToInt(string s) {
        int mp[128];
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int ans = 0, len = s.length();
        int now = mp[s[0]];
        for(int i = 0; i < len - 1; i++){
            int next = mp[s[i + 1]];
            if(now < next){
                ans -= now;
            }else {
                ans += now;
            }
            now = next;
        }
        return ans + now;
    }
};
