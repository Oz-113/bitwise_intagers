
#include <iostream>
#include <cstdint>
int main()
{
   
    
    unsigned int i = 31; //an unsigned int has its all bits in the positive direction therefore can be twice as big than a normal intager
    
    i =(i<<1); // 0000000000000000000000000011111 -> 0000000000000000000000000111110  => 31 -> 62
    std::cout<<i<<std::endl;
    i = 31;
    i=(i>>1); // 00000000000000000000000000011111 -> 0000000000000000000000000001111 => 31 -> 15
    std::cout<<i<<std::endl;
    i = 31;
    i=(~i);  // 00000000000000000000000000011111 -> 11111111111111111111111111100000 => 31 -> 4294968264
    std::cout<<i<<std::endl;
    
    int i2 = 31;  //a signed int has its first bit as the representetive for negative of positive, therefore it has only as half as an unsigned intager but in both negative and positive directions 
    
    i2 =(i2<<1); // 1000000000000000000000000011111 -> 1000000000000000000000000111110 => 31 -> 62
    std::cout<<i2<<std::endl;
    i2 = 31;
    i2=(i2>>1); // 10000000000000000000000000011111 -> 1000000000000000000000000001111 => 31 -> 15
    std::cout<<i2<<std::endl;
    i2 = 31;
    i2=(~i2);  // 10000000000000000000000000011111 -> 01111111111111111111111111100000 => 31 -> -32
    std::cout<<i2<<std::endl;
    
    uint8_t i3 = 31;  // an 8-bit unsigned intager has the capacity of a quarter of an unsigned intager, unless specified as an intager, will get treated as a special character, whichever its intager value corresponds in ascii table (0-255) 
    
    i3 =(i3<<1);                        // 00011111 -> 00111110                         => 31 -> 62
    std::cout<<(int)i3<<std::endl;
    i3 = 31;
    i3=(i3>>1);                         // 00011111 -> 00001111                         => 31 -> 15
    std::cout<<(int)i3<<std::endl;
    i3 = 31;
    i3=(~i3);                           // 00011111 -> 11100000                         => 31 -> 224
    std::cout<<(int)i3<<std::endl;
    
    return 0;
}