

#include <iostream> // importing libraries is done using #include and library name between "<>""
#include <vector> //
#include <string>

using namespace std;


int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
// int main(){
// printf("Hi my name is Jorge");  // semi colons indicate when a statemen ends, you need to write it everytime.

// }