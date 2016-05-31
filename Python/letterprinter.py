# Letter Printer Python Version
# V0.1.0
# This program will print the ASCII input in the form of ASCII art, each word on a different line.
# Stand alone argument based version. 

#region Dependencies
import sys
#endregion Dependencies

#region Defines
VERSION_MAJOR = 0
VERSION_MINOR = 1
VERSION_SMALL = 0

LETTER_DICT = dict ()
LETTER_DICT ["A"] = [" AAA  ", "AA AA ", "AAAAA ", "AA AA ", "AA AA "]
LETTER_DICT ["B"] = ["BBBBB ", "BB BB ", "BBBB  ", "BB BB ", "BBBBB "]
LETTER_DICT ["C"] = [" CCCC  ", "CC   C ", "CC     ", "CC   C ", " CCCC  "]
LETTER_DICT ["D"] = ["DDDD  ", "DD DD ", "DD DD ", "DD DD ", "DDDD  "]
LETTER_DICT ["E"] = ["EEEEE ", "EE    ", "EEEE  ", "EE    ", "EEEEE "]
LETTER_DICT ["F"] = ["FFFFF ", "FF    ", "FFFF  ", "FF    ", "FF    "]
LETTER_DICT ["G"] = [" GGGGG ", "GG     ", "GG  GG ", "GG   G ", " GGGG  "]
LETTER_DICT ["H"] = ["HH  HH ", "HH  HH ", "HHHHHH ", "HH  HH ", "HH  HH "]
LETTER_DICT ["I"] = ["IIIIII ", "  II   ", "  II   ", "  II   ", "IIIIII "]
LETTER_DICT ["J"] = ["JJJJJJ ", "    J  ", "    J  ", "J   J  ", " JJJ   "]
LETTER_DICT ["K"] = ["KK  KK ", "KK KK  ", "KKKK   ", "KK KK  ", "KK  KK "]
LETTER_DICT ["L"] = ["LL    ", "LL    ", "LL    ", "LL    ", "LLLLL "]
LETTER_DICT ["M"] = ["MM MM ", "M M M ", "M   M ", "M   M ", "M   M "]
LETTER_DICT ["N"] = ["N   N ", "NN  N ", "N N N ", "N  NN ", "N   N "]
LETTER_DICT ["O"] = [" OOOO  ", "OO  OO ", "OO  OO ", "OO  OO ", " OOOO  "]
LETTER_DICT ["P"] = ["PPPPP ", "PP PP ", "PPPPP ", "PP    ", "PP    "]
LETTER_DICT ["Q"] = [" QQQQ  ", "Q    Q ", "Q  Q Q ", "Q   QQ ", " QQQQQ "]
LETTER_DICT ["R"] = ["RRRRR ", "RR RR ", "RRRR  ", "RR RR ", "RR RR "]
LETTER_DICT ["S"] = [" SSSS ", "SS    ", " SSS  ", "   SS ", "SSSS  "]
LETTER_DICT ["T"] = ["TTTTTT ", "  TT   ", "  TT   ", "  TT   ", "  TT   "]
LETTER_DICT ["U"] = ["UU UU ", "UU UU ", "UU UU ", "UU UU ", "UUUUU "]
LETTER_DICT ["V"] = ["V   V ", "V   V ", "V   V ", " V V  ", "  V   "]
LETTER_DICT ["W"] = ["W   W ", "W   W ", "W   W ", "W W W ", "WW WW "]
LETTER_DICT ["X"] = ["X   X ", " X X  ", "  X   ", " X X  ", "X   X "]
LETTER_DICT ["Y"] = ["YY  YY ", "YY  YY ", " YYYY  ", "  YY   ", "  YY   "]
LETTER_DICT ["Z"] = ["ZZZZZ ", "   Z  ", "  Z   ", " Z    ", "ZZZZZ "]
LETTER_DICT ["!"] = ["!! ", "!! ", "!! ", "   ", "!! "]
#endregion Defines

# Print help text
def printHelp ():
    print "Letter Printer - V%d.%d.%d\n" % (VERSION_MAJOR, VERSION_MINOR, VERSION_SMALL)
    print "\nUsage: [-h] letterPrinter.py WORD WORD ... WORD"
    print "Required Arguments:"
    print "Each WORD is an ASCII string, separated by a space."
    print "Program requires at least one word of one a minimum one ASCII character in length."
    print "Example: letterPrinter.py \"Hello World!\""
    print "Optional Arguments:"
    print "-h, --help      Show this help message."

    sys.exit (0)

def getLetter (c):
    c = c.upper ()
    
    return LETTER_DICT [c]

#region Main
# Main entry
if __name__ == "__main__":
    argc = len (sys.argv)   # argc
    argv = sys.argv         # argv
    
    try:
        # Check if arguments are too few (only letterPrinter.py or nonsense text input)
        if argc <= 1:
            printHelp ()

        # check for the [--help] | [-h] arguments
        for arg in argv:
            if arg == "-h" or arg == "--help":
                prinntHelp ()
    
        # Read through all input strings in argv
        for i in range (1, argc):
            # Set up output buffer
            outputBuffer = ["", "", "", "", ""]

            # Read through each "char" in current input argument
            for char in argv[i]:
                letterInfo = getLetter (char)
                outputBuffer[0] += letterInfo[0]
                outputBuffer[1] += letterInfo[1]
                outputBuffer[2] += letterInfo[2]
                outputBuffer[3] += letterInfo[3]
                outputBuffer[4] += letterInfo[4]
        
            # Output current input argument as art
            print "%s\n%s\n%s\n%s\n%s\n\n" % (outputBuffer[0], outputBuffer[1], outputBuffer[2], outputBuffer[3], outputBuffer[4])
    
    # Catch running program with no input
    except:
        printHelp ()
#endregion Main

  
