#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int n1, n2;
    
    
    cin >> n1;
    int g[n1];

    
    for (int i = 0; i < n1; i++) {
        cin >> g[i];
    }

    
    cin >> n2;
    int s[n2];

    
    for (int i = 0; i < n2; i++) {
        cin >> s[i];
    }

   
    for (int i = 0; i < n1-1; i++) {
        for (int j = 0; j < n1-i-1; j++) {
            if (g[j] > g[j+1]) {
                int temp = g[j];
                g[j] = g[j+1];
                g[j+1] = temp;
            }
        }
    }

    
    for (int i = 0; i < n2-1; i++) {
        for (int j = 0; j < n2-i-1; j++) {
            if (s[j] > s[j+1]) {
                int temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    int i = 0, j = 0;
    int happyChildren = 0;
 
    while (i < n1 && j < n2) {
        if (s[j] >= g[i]) {
            happyChildren++;
            i++; 
        }
        j++;  
    }

    
    cout << happyChildren << endl;

    return 0;
}
