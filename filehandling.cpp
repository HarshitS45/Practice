#include <iostream>
#include <sstream>
using namespace std;
int main()
{
string input = "abc,def,ghi";
stringstream ss;
ss<<input;
string token;

while(getline(ss, token, ',')) {
    cout << token << '\n';

}
return 0;
}

