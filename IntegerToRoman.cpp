class Solution {
public:
    string intToRoman(int value){ struct romanStruct { int value; char const* numeral; };
    static romanStruct const romandata[] =
    { 1000, "M",
      900, "CM",
      500, "D",
      400, "CD",
      100, "C",
      90, "XC",
      50, "L",
      40, "XL",
      10, "X",
       9, "IX",
       5, "V",
       4, "IV",
       1, "I",
       0, NULL }; 
 
    string result;
    for (romanStruct const* current = romandata; current->value > 0; ++current){
        while (value >= current->value){
        result += current->numeral;
        value  -= current->value;
        }
    }
    return result;
    }
};

       
       
