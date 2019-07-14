/////////////////////////////////////////////////////////////////////////////////////////
// IMPORTING LIBRARIES.
/////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////
// GLOBAL VARIABLES.
/////////////////////////////////////////////////////////////////////////////////////////
 
string username;                            // string.
string password;                            // string.
int sum;                                    // uninetialized variable for sum.
int mul;                                    // uninetialized variable for multiplication.
int c;                                      // uninetialize variable.
int d;                                      // uninetialize variable.
int e;                                      // uninetialize variable.

/////////////////////////////////////////////////////////////////////////////////////////
// STYLE FUNCTIONS
/////////////////////////////////////////////////////////////////////////////////////////

void line_change(int line_change_counter)
    {   
        if(line_change_counter < (line_change_counter + 1))
            {
                for (int i = 0; i <= line_change_counter; i++)
                    {
                        cout << endl;                        // change to next line.
                    }
            }    
        return ;
    }


void line(int line_type, int line_counter)
    {   
        if(line_type == 1)
            {
                for (int i = 1; i <= line_counter; i++)
                    {
                        cout << "#########################################################################################################";
                        line_change(0);
                    }
            }
        else if (line_type == 2)
            {
                for (int i = 1; i <= line_counter; i++)
                    {
                        cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";                        // change to next line.
                        line_change(0);
                    }
            }

        else if (line_type == 3)
            {
            for (int i = 1; i <= line_counter; i++)
                    {
                        cout << "---------------------------------------------------------------------------------------------------------";                        // change to next line.
                        line_change(0);
                    }
            }

        else if (line_type == 4)
            {
                for (int i = 1; i <= line_counter; i++)
                    {
                        cout << ".........................................................................................................";                        // change to next line.
                        line_change(0);  
                    }
            }
                   
        return ;
    }

/////////////////////////////////////////////////////////////////////////////////////////
// SECURITY FUNCTIONS
/////////////////////////////////////////////////////////////////////////////////////////

void authentication_()
    {
        cout << "PROJECT KINGS-EMPIRE";            // game name printed.
        line_change(0);

        // prompt for username and password starts here.
        cout << "Enter your username : ";
        cin >> username;
        cout << "Enter your password : ";
        cin >> password;
        line_change(0);
        // prompt code ends here.

        
    }

/////////////////////////////////////////////////////////////////////////////////////////
// MAIN PROGRAM.
/////////////////////////////////////////////////////////////////////////////////////////

int main()
    {
        line(1, 2);
        authentication_();
        line(1, 2);
        return (0);
    }

/////////////////////////////////////////////////////////////////////////////////////////
// END OF PROGRAM.
/////////////////////////////////////////////////////////////////////////////////////////
