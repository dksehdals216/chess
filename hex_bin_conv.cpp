#include <iostream>
#include <sstream>
#include <bitset>
#include <string>
#include <stdint.h>

typedef uint64_t BitBoard;

int main()
{
   BitBoard white = 0xFFFF;
   std::string s = "0xFFFF";
   std::stringstream ss;
   ss << std::hex << s;
   unsigned n;
   ss >> n;
   std::bitset <64> b(n);

   //print bin
   std::cout << b.to_string() << std::endl;
   
   //print length of bin
   std::cout << b.to_string().length() << std::endl;
   //print dec
   printf("%llu", white);
   printf("\n");
}

template <class Hex_Bit>
Hex_Bit hex_bit_conv()
{
}

/*
        case '0': return "0000";
        case '1': return "0001";
        case '2': return "0010";
        case '3': return "0011";
        case '4': return "0100";
        case '5': return "0101";
        case '6': return "0110";
        case '7': return "0111";
        case '8': return "1000";
        case '9': return "1001";
        case 'A': return "1010";
        case 'B': return "1011";
        case 'C': return "1100";
        case 'D': return "1101";
        case 'E': return "1110";
        case 'F': return "1111";
        */
