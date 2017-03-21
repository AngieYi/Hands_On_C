# include <stdio.h>
# include <stdint.h>


uint32_t reverseBits(uint32_t n) {
    uint32_t ans = 0;
    for (int i = 0; i < 32; i++) {
        ans <<= 1;
        ans |= n & 1;
        n >>= 1;
    }
    return ans;
}


void main()
{
	uint32_t x = reverseBits(43261596);
	printf("%u",x);//964176192
}