/// Student grade system by using nested if

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<" Enter the exam mark: ";
    cin>>num;

    if(num>32)
    {
        /* --------------- nested if start ------------------ */
        if(80<=num && num<=100)
            cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'A+' \n";
        else if(70<=num && num<80)
            cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'A' \n";
        else if(60<=num && num<70)
            cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'A-' \n";
        else if(50<=num && num<60)
            cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'B' \n";
        else if(40<=num && num<50)
            cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'C' \n";
        else if(33<=num && num<40)
            cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'D' \n";
        /* --------------- nested if end ------------------ */
    }
    else if(0<=num && num<32){
        cout<<"\n\tYou're Failed! \n";
        cout<<"\n\tThe Student's exam mark: "<<num<<" and grade: 'F' \n";
        cout<<"\n\t*** Best of Luck for next time ***\n";
    }
    else
            cout<<"\n\tThis mark doesn't accepted!";

    return 0;
}


/* ===== Output / Result:

 Input:_____________________
 Enter the exam mark: 65

 Output:___________________
 The Student's exam mark: 65 and grade: 'A-'

*/
