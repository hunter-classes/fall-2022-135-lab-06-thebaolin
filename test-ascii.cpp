#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"INPUT: ";
    getline(cin, s);

    for(int i = 0; i < s.length(); i++){
        cout<<s[i]  << " " << (int)s[i]<<endl;
    }
}
