/// Insert text from users and added new text to existing text

#include <iostream>
#include <fstream>   // For File Operation
#include <string>      // For String Operation
using namespace std;

int main()
{
    string str_name; // Create a String

    ofstream fileName; // for file_Name create with 'ofstream'
    // write new text to existing text. type: ios::out | ios::app
    fileName.open("basic.txt", ios::out | ios::app);

    /* Insert text from Users */
    cout<<" Enter Text: ";
    getline(cin, str_name); // Insert text to 'str_name' from users
    fileName<<" Your text: "<<str_name<<endl; // Initialize text to 'str_name' into a file
    fileName.close(); // file Close

    cout<<"\t\tFile Written Successfully! \n";
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 Enter Text: World!

 Output:_________________
 Your text: Hello (existing text)
 Your text: World! (new text)

*/
