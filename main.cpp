/*
    Description: This program is a simple calculator that performs arithmithoperations, It
                shows the importance of Function ,if else and loops and OOP by using classes
    Author:     Wilder J Gomez
    Updated:    8/8/2020

*/
#include <iostream>
using namespace std;

//Using functions for every operation to show how functions can be used

    class ArithFunctions{
        public:

            void addFunction(int num1,int num2)
            {
                int sum ;
                sum = num1 + num2;
                cout<<"\nThe sum is: "<<sum<<endl;
            }

            void subFunction(int num1, int num2)
            {
                int sub;
                sub = num1 - num2;
            cout<<"\nThe subtraction is:"<<sub<<endl;
            }

            void mulFunction(int num1, int num2){
                int mult;
                mult = num1 * num2;
                cout<<"\nThe product is: "<<mult<<endl;

            }

            void divFunction(double num1, double num2)
            {
                double div;
                div = num1 / num2 ;
                cout<<"\nThe division is: " <<div<<endl;
            }


    };// end of class operations

    class MoreOperations{
        public:
            void expFunction()
            {
                int result =1;
                int base;
                int exponent;
                cout<<"Enter the Base: ";
                cin>>base;
                cout<<"Enter the Exponent: ";
                cin>>exponent;
//long way exponential operations
                    for(int i=0; i<exponent; i++ )
                    {
                        result =result*base;

                    }// end of for loop
        cout<<"\nThe Exponential result is: "<<result<<endl;
        }

    };


////////////////////////////////////////////////////////////////////////
//                          DRIVER                                     /
///////////////////////////////////////////////////////////////////////
int main()
{
    int num1 =0;
    int num2=0;
    int choice;
    string yes ="yes";
    cout<<"  ************************************************* \n";
    cout<<"  *        Welcome to BOMER213 Calculator         *\n"
          "  ************************************************* \n";
    ArithFunctions op;
    MoreOperations moreOp;



// Using while loop to repeat as many times as the user desires
    while(yes =="yes"){
        cout<<"\n Addition 1:\n Subtraction 2:\n Multiplication 3:  "<<endl;
        cout<<" Division 4:\n Exponent 5: \n"<<endl;
        cout<<"What Operation would you like to perform? ";
        cin>> choice;

            if(choice ==5){
               moreOp.expFunction();
            }
            else if(choice==1 || choice==2 ||choice ==3 || choice ==4){
                cout<<"\nPlease enter the first number: ";
                cin>>num1;
                cout<<"Please enter the second number: ";
                cin>>num2;

            }
            else{
                cout<<"Thats not an option, GOODBYE!"<<endl;
                    break;
            }
// Case Statements are used to give the user options/menu
        switch (choice){

           case 1:
                op.addFunction(num1,num2);
               // addFunction(num1,num2);
                    break;
            case 2:
                op.subFunction(num1,num2);
                    break;

            case 3:
                op.mulFunction(num1,num2);
                    break;
            case 4:
                    op.divFunction(num1,num2);
                    break;
            case 5:
                    //expFunction();
                    break;
            default :
                    cout<<"Thats not an option, GOODBYE!"<<endl;
        }
        cout<<"\nif you would like to continue enter yes: ?";
        cin>>yes;
    }
    return 0;
}
