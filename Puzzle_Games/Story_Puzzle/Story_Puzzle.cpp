/////////////////////////////////////////////////////////////////////////////////////////
// IMPORTING LIBRARIES.
/////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

/////////////////////////////////////////////////////////////////////////////////////////
// GLOBAL VARIABLES.
/////////////////////////////////////////////////////////////////////////////////////////

int a = 2;                                  // inetialized variable.
int b = 3;                                  // inetialized variable.
int sum = a + b;                            // inetialized variable for sum.
int mul = a * b;                            // inetialized variable for multiplication.
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
                        std::cout << std:: endl;                        // change to next line.
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
                        std::cout << "#########################################################################################################";
                        line_change(0);
                    }
            }
        else if (line_type == 2)
            {
                for (int i = 1; i <= line_counter; i++)
                    {
                        std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";                        // change to next line.
                        line_change(0);
                    }
            }

        else if (line_type == 3)
            {
            for (int i = 1; i <= line_counter; i++)
                    {
                        std::cout << "---------------------------------------------------------------------------------------------------------";                        // change to next line.
                        line_change(0);
                    }
            }

        else if (line_type == 4)
            {
                for (int i = 1; i <= line_counter; i++)
                    {
                        std::cout << ".........................................................................................................";                        // change to next line.
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
        std::cout << "PROJECT KINGS-EMPIRE";            // game name printed.
        line_change(1);

        // prompt for username and password starts here.
        std::cout << "Enter your username : ";
        line_change(0);
        std::cout << "Enter your password : ";
        // prompt code ends here.
    }

/////////////////////////////////////////////////////////////////////////////////////////
// MAIN PROGRAM.
/////////////////////////////////////////////////////////////////////////////////////////

int main()
    {
        line(1, 2);
        authentication_();
        return (0);
    }

/////////////////////////////////////////////////////////////////////////////////////////
// END OF PROGRAM.
/////////////////////////////////////////////////////////////////////////////////////////
