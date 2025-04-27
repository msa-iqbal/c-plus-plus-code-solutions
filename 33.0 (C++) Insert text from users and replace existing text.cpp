/// Insert text from users and replace existing text

#include <iostream>
#include <fstream> // For File Operation
#include <string>   // For String Operation
using namespace std;

int main()
{
    string str_name;       // Create a String
    ofstream fileName;  // for file_Name create with 'ofstream'
    fileName.open("basic.txt"); // FileName & Location. Replace text existing text

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
 Enter Text: Hello!

 Output:_________________
 Your text: Hello!

 ***(Old_Text: Your text: Micheal)

*/
