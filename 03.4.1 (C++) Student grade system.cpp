/// Student grade system

/* Student's mark --- Grade
    80-100                    A+
    70-89                      A
    60-69                      A-
    50-59                      B
    40-49                      C
    33-39                      D
    0-32                        F
*/

/* ----------------------- Program code: 01 ------------------------*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<" Enter the exam mark: ";
    cin>>num;

    if(80<=num && num<=100)
    {
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'A+' \n";
    }
    else if(70<=num && num<80)
    {
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'A' \n";
    }
    else if(60<=num && num<70)
    {
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'A-' \n";
    }
    else if(50<=num && num<60)
    {
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'B' \n";
    }
    else if(40<=num && num<50)
    {
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'C' \n";
    }
    else if(33<=num && num<40)
    {
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'D' \n";
    }
    else if(0<=num && num<32)
    {
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'F' \n";
    }
    else{
        cout<<"\n\tThis mark doesn't accepted!";
    }

    return 0;
}

/* ===== Output / Result:
Input:
Enter the exam mark: 65

Output:
The Student's exam mark: 65 and grade: 'A-'
*/

/* ----------------------- Program code: 02 ------------------------/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<" Enter the exam mark: ";
    cin>>num;

    if (80<=num && num<=100)
    {
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'A+' \n";
    }
    else if (num>=70)
    {
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'A' \n";
    }
    else if (num>=60)
    {
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'A-' \n";
    }
    else if(num>=50)
    {
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'B' \n";
    }
    else if(num>=40)
    {
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'C' \n";
    }
    else if(num>=33)
    {
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'D' \n";
    }
    else if(0<=num && num<32)
    {
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'F' \n", num;
    }
    else{
        cout<<"\n\tThis mark doesn't accepted!";
    }
    return 0;
}

/* ===== Output / Result:
Input:
Enter the exam mark: 65

Output:
The Student's exam mark: 65 and grade: 'A-'
*/






