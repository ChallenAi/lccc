import os

prefix = "lc"
testSuffix = "_test.cc"
suffix = ".cc"

def formatFileName(idx, isTestFile):
    _suffix = testSuffix if isTestFile else suffix
    if (idx < 10):
        return prefix+"00"+str(idx)+ _suffix
    elif (idx < 100):
        return prefix+"lc0"+str(idx)+_suffix
    
    return prefix+str(idx)+_suffix
        
# for i in range(200):
for i in range(150, 154):
    fileName = formatFileName(i+1, False)
    if (os.path.exists(fileName) == False):
        f = open(fileName, 'w')
        f.write('''#include <iostream>

using namespace std;
        ''')
        f.close()
    
    testFileName = formatFileName(i+1, True)
    if (os.path.exists(testFileName) == False):
        ft = open(testFileName, 'w')
        ft.write('''#include <iostream>
#include "'''+fileName+'''"

int main(int argc, char const *argv[])
{

}
        ''')
        ft.close()

    