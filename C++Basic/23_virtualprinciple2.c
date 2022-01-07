#include <stdio.h>

struct AAA{
    int a;
    char b;
    double c;
}; // |||||...|||||||| - 4byte씩 나눠서 넣음.
   // aaaab...cccccccc

// 0x123456
//  빅엔디안: [0x12][0x34][0x56]
//  리틀엔디안: [0x56][0x34][0x12]

struct BBB{
    char a;
    double b;
    int c;
} // |.......||||||||||||.... - 8byte
  // a.......bbbbbbbbcccc....
__attribute__((aligned(1), packed));

int main(){
    printf("%ld\n", sizeof(struct AAA)); // 16
    printf("%ld\n", sizeof(struct BBB)); // 24 -> 13
}