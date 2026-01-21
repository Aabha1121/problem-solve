#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    unordered_map<int,int> m;

    for(int i=0;i<4;i++){
        int rem = target - arr[i];
        if(m.find(rem) != m.end()){
            cout << m[rem] << " " << i;
            break;
        }
        m[arr[i]] = i;
    }
    return 0;
}
