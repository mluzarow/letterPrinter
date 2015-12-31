#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Defines
const short VERSION_MAJOR = 0;
const short VERSION_MINOR = 2;
const short VERSION_SMALL = 1;

const char* LETTER_DICT[27][5] = {
{ //0 - A
    " AAA  ", "AA AA ", "AAAAA ", "AA AA ", "AA AA "
}, { //1 - B
    "BBBBB ", "BB BB ", "BBBB  ", "BB BB ", "BBBBB "
}, { //2 - C
    " CCCC  ", "CC   C ", "CC     ", "CC   C ", " CCCC  "
}, { //3 - D
    "DDDD  ", "DD DD ", "DD DD ", "DD DD ", "DDDD  "
}, { //4 - E
    "EEEEE ", "EE    ", "EEEE  ", "EE    ", "EEEEE "
}, { //5 - F
    "FFFFF ", "FF    ", "FFFF  ", "FF    ", "FF    "
}, { //6 - G
    " GGGGG ", "GG     ", "GG  GG ", "GG   G ", " GGGG  "
}, { //7 - H
    "HH  HH ", "HH  HH ", "HHHHHH ", "HH  HH ", "HH  HH "
}, { //8 - I
    "IIIIII ", "  II   ", "  II   ", "  II   ", "IIIIII "
}, { //9 - J
    "JJJJJJ ", "    J  ", "    J  ", "J   J  ", " JJJ   "
}, { //10 - K
    "KK  KK ", "KK KK  ", "KKKK   ", "KK KK  ", "KK  KK "
}, { //11 - L
    "LL    ", "LL    ", "LL    ", "LL    ", "LLLLL "
}, { //12 - M
    "MM MM ", "M M M ", "M   M ", "M   M ", "M   M "
}, { //13 - N
    "N   N ", "NN  N ", "N N N ", "N  NN ", "N   N "
}, { //14 - O
    " OOOO  ", "OO  OO ", "OO  OO ", "OO  OO ", " OOOO  "
}, { //15 - P
    "PPPPP ", "PP PP ", "PPPPP ", "PP    ", "PP    "
}, { //16 - Q
    " QQQQ  ", "Q    Q ", "Q  Q Q ", "Q   QQ ", " QQQQQ "
}, { //17 - R
    "RRRRR ", "RR RR ", "RRRR  ", "RR RR ", "RR RR "
}, { //18 - S
    " SSSS ", "SS    ", " SSS  ", "   SS ", "SSSS  "
}, { //19 - T
    "TTTTTT ", "  TT   ", "  TT   ", "  TT   ", "  TT   "
}, { //20 - U
    "UU UU ", "UU UU ", "UU UU ", "UU UU ", "UUUUU "
}, { //21 - V
    "V   V ", "V   V ", "V   V ", " V V  ", "  V   "
}, { //22 - W
    "W   W ", "W   W ", "W   W ", "W W W ", "WW WW "
}, { //23 - X
    "X   X ", " X X  ", "  X   ", " X X  ", "X   X "
}, { //24 - Y
    "YY  YY ", "YY  YY ", " YYYY  ", "  YY   ", "  YY   "
}, { //25 - Z
    "ZZZZZ ", "   Z  ", "  Z   ", " Z    ", "ZZZZZ "
}, { //26 - !
    "!! ", "!! ", "!! ", "   ", "!! "
}
};

//Prototypes
void printHelp (void);
