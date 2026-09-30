class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string result = bitset<32>(n).to_string();
        reverse(result.begin(), result.end());
        n = stoull(result, nullptr, 2);
        
        return n;
    }
};
