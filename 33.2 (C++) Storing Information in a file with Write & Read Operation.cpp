/// Storing Information in a file with Write & Read Operation

#include <iostream>
#include <fstream>  // For File Operation
#include <string>    // For String Operation
using namespace std;

int main()
{
    string str_name; // Create a String for write
    string str_read;  // Create a String for read
    int age;

    /* ---------- File Write ---------- */
    ofstream fileName; // for file_Name create with 'ofstream'
     /* write existing file or create new file. type: "file_name.extention with file_location" */
    fileName.open("info.txt", ios::out | ios::app);

    for (int i=0; i<3; i++)
    {
        /* Insert text from Users */
        cout<<" Enter Name: ";
        getline(cin, str_name); // Insert text to 'str_name' from users
        fileName<<" Name: "<<str_name<<"\t"; // Initialize text to 'str_name' into a file

        cout<<" Enter Age: ";
        cin>>age;   // Insert text to 'age' from users
        fileName<<age<<endl; // Initialize text to 'age' into file
        cin.ignore(); // Because, Insert String after Numeric_Numbers
    }
    fileName.close(); // file Close

    /* ---------- File Read ---------- */
    ifstream file_R("info.txt"); // for file_Name create with 'ifstream'
    cout<<" \n ---------- Reading from file ---------- \n";
    while(getline(file_R, str_read)) // for file contents read and store in 'str_read'
    {
        cout<<str_read<<endl;
    }
    file_R.close(); // file Close

    cout<<"\n\t\tFile Written & Read Successfully! \n";
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 Enter Name: Micheal1
 Enter Age: 24
 Enter Name: Micheal2
 Enter Age: 25
 Enter Name: Micheal3
 Enter Age: 26

 Output:_________________
 ---------- Reading from file ----------

                Name: Micheal1 24
                Name: Micheal2 25
                Name: Micheal3 26

                              File Written & Read Successfully!

*/

