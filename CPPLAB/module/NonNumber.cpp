#include <bits/stdc++.h>
using namespace std;

class NonNumber
{
public:
    string s;
    void check();
};

void NonNumber::check()
{
    int te = s.length(), ts=0;
    if(s[0] == '-') ts++;
    for(; ts<te; ts++){
        if(s[ts]>='0' && s[ts]<='9'){}
        else throw "INVALID INPUT: non-integer detected\n";
    }
    cout << "The number entered was:" << atoi(s.c_str()) << endl << endl;
}

int main()
{
    NonNumber num;
    while(1)
    {
        cout << "Please enter a number (end-of-file to terminate):";
        if(cin >> num.s){}else break;
        try{
            num.check();
        }catch(const char* e){
            cerr << e << endl;
            //std::cerr << e.what() << '\n';
        }
        
    }
    return 0;
}