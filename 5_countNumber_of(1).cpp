#include<iostream>
using namespace std;
class Solution {
public:
    void hammingWeight(int n) {
    
        int count = 0;
        while(n!=0) {
            
            //checking last bit
            if(n&1) {
                count++;
            }
            n = n>>1;
        }
         cout<<count;
    }
};
int main(){
    Solution a;
    a.hammingWeight(00010101);
    return 0;
}