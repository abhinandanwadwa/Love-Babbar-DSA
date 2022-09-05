#include<iostream>
#include<math.h>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int temp = n;

    if (temp > 0) {
        int ans = 0, j = 0;
        while (temp != 0) {
            int lastBit = temp & 1;
            ans = (lastBit * pow(10, j)) + ans;
                
            temp = temp >> 1;
            j++;
        }

        temp = n;
        int count = 0;

        string finalAns;
        while (temp != 0) {
            count++;
            temp = temp >> 1;
        }

        for (int i = 1; i <= 32-count; i++)
        {
            finalAns = finalAns + '1';
        }

        // cout << finalAns << endl;
        
        string lastBitsAns;
        while (n != 0)
        {
            int lastBit = n & 1;

            if (lastBit) {
                lastBitsAns = lastBitsAns + '0';
            }
            else {
                lastBitsAns = lastBitsAns + '1';
            }

            // Reversing the lastBitAns string:
            string reversed = "";
            for (int i = lastBitsAns.length() - 1; i >= 0; i--)
            {
                reversed = reversed + lastBitsAns[i];
            }

            

            n = n >> 1;

            if (n == 0) {
                finalAns = finalAns + reversed;
                // Now, we have 1's complement inside the "finalAns" variable. Let's take 2's complement now!!
                if (finalAns[31] == '0') {
                    finalAns[31] = '1';
                }
                else {
                    finalAns[31] = '0';
                    finalAns[30] = '1';
                }
                cout << finalAns << endl;
            }
        }
        
        
    }
    return 0;
}