#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
vector<int> v;
void Input(){
    cin >> n;
    for (int i = 0; i < n;i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
}
void xuly(){
    vector<int>::iterator tmp = v.begin() + n - 1;
    while(1){
        if(tmp == v.begin() - 1)
            {
                cout << -1 << endl;
                break;
            }
        else if(*tmp != *v.end())
        {
            cout << *v.end() << " " << *tmp;
            break;
        }
        tmp--;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Input();
        sort(v.begin(), v.begin() + n - 1);
        xuly();
    }
    return 0;
}