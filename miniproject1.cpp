#include <iostream>
using namespace std;

int main()
{
    int n1, n2, choice, choice2;
    do
    {
        cout << "enter two numbers to operate on"<<endl;
        cin >> n1 >> n2;
        cout << "what operation would you like to operate:\n1:addition\n2:subtraction\n3:multiplication\n4:division" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout<<"result="<<n1+n2<<endl;
            break;

        case 2:
            cout<<"result="<<n1-n2<<endl;
            break;

        case 3:
            cout<<"result="<<n1*n2<<endl;
            break;

        case 4:
            if (n2 == 0)
            {
                cout << "invalid opertaion" << endl;
                break;
            }
            else
                cout<<"result="<<n1/n2<<endl;
            break;

        default:
            cout << "enter a valid choice" << endl;
            break;
        }
        cout << "would you like to operate again?\n1:yes\n2:no" << endl;
        cin >> choice2;
    } while (choice2 == 1);
}