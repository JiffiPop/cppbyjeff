#include <iostream>
using namespace std;    // take everything in the namespace 'std' and dump it into the global namespace – e.g. without this, we'd need to use std::cout instead of cout

int main()
{
    string username;
    cout << "Please enter your username: ";
    cin >> username;
    cout << "Hello, " << username <<"! Welcome :)" << endl;

    int age = 0;
    cout << "Enter your age";
    cin >> age;
    
    if (type(age) == string)
    {
        cout << "correct input!";
    }

    else if (type(age) != string)
    {
        cout << "wrong age type entered!"
    }
    
    return 0;

}