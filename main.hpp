//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        // my code
        int limit = 20;
        int num;

        num = rand() % limit;

        return num;
        //end of my code
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3) {
        // my code
        int least, mid;
        if (rdnum1 < rdnum2) {
                if (rdnum1 < rdnum3) {
                        least = rdnum1
                        if (rdnum2 < rdnum3) {
                                mid = rdnum2;   
                        }
                        else {
                                mid = rdnum3;
                        }
                }
        }
        if (rdnum2 < rdnum1) {
                if (rdnum2 < rdnum3) {
                        least = rdnum2
                        if (rdnum1 < rdnum3) {
                                mid = rdnum1;   
                        }
                        else {
                                mid = rdnum3;
                        }
                }
        }
         if (rdnum3 < rdnum1) {
                if (rdnum3 < rdnum2) {
                        least = rdnum3
                        if (rdnum1 < rdnum2) {
                                mid = rdnum1;   
                        }
                        else {
                                mid = rdnum2;
                        }
                }
        }

        return mid;
        // end of my code

}