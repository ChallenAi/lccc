import os, sys

prefix = "lc"
testSuffix = "_test.cc"
suffix = ".cc"

def formatFileName(idx, isTestFile):
    _suffix = testSuffix if isTestFile else suffix
    if (idx < 10):
        return prefix+"00"+str(idx)+ _suffix
    elif (idx < 100):
        return prefix+"0"+str(idx)+_suffix
    
    return prefix+str(idx)+_suffix

def initIdx(idx):
    fileName = formatFileName(idx, False)
    if (os.path.exists(fileName) == False):
        f = open(fileName, 'w')
        f.write('''#include <iostream>

using namespace std;
''')
        f.close()
    
    testFileName = formatFileName(idx, True)
    if (os.path.exists(testFileName) == False):
        ft = open(testFileName, 'w')
        ft.write('''#include <iostream>
#include "'''+fileName+'''"

int main(int argc, char const *argv[])
{

}''')
        ft.close()

if (len(sys.argv) == 2):
    try:
        idx = int(sys.argv[1])
    except:
        print("wrong parameter")
        exit()
    if (idx < 1 or idx > 900):
        print("wrong parameter")
        exit()

    initIdx(idx)
    print("successfully generate files")

elif (len(sys.argv) == 3):
    try:
        left = int(sys.argv[1])
        right = int(sys.argv[2])
    except:
        print("wrong parameter")
        exit()
    if (left < 1 or right > 900 or left > right):
        print("wrong parameter")
        exit()

    for i in range(left, right+1):
        initIdx(i)
    print("successfully generate files")

else:
    print("parameters: 0 [200], if only one parameter, we will generate the No.parameter file, if achieve two parameter, we will generate files in that range")