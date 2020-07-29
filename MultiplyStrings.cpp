class Solution {
public:
    string multiply(string num1, string num2) {
        int len_1 = num1.length(); 
        int len_2 = num2.length();

    //create space to store the result and fill it with zero's
        string final_result(len_1 + len_2, '0');
    
    //reverse both number 1 and number 2, bacause we calcuate it from reverse
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

    //we use 2 loops because, we have to multiply 2 numbers 
        for (int i = 0; i < len_1; i++)
        {
            for (int j = 0; j < len_2; j++) 
            {
                int tmp_result = (final_result[i + j] - '0') + (num1[i] - '0') * (num2[j] - '0'); // we use num_1[i] - '0' as it will give the integer value of that number
                
                final_result[i + j] = '0' + tmp_result % 10;

                final_result[i + j + 1] += tmp_result / 10;
            }
        }
    
        for (int i = len_1 + len_2 - 1; i > 0 && final_result[i] == '0'; i--)
            final_result.pop_back();

        reverse(final_result.begin(), final_result.end());
        return final_result;
    }
};
