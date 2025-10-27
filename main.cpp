#include <iostream>
#include <string>

using namespace std;
void say(string s);

int main() {
    cout << "Greeting..." << endl;
    cout << "Hello World!\n";
    return 0;
}

void say(string s) 
{
    cout << s << endl;
}