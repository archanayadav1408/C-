/////////////////////////////////////////////////////////////////////////////////////////
// IMPORTING LIBRARIES.
/////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<bits/stdc++.h>
#include<ctime>

using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////
// GLOBAL VARIABLES.
/////////////////////////////////////////////////////////////////////////////////////////
 
string username;                            // string.
string password;                            // string.

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
    }

/////////////////////////////////////////////////////////////////////////////////////////
// SECURITY FUNCTIONS
/////////////////////////////////////////////////////////////////////////////////////////

void authentication_()
    {
    	line_change(1);
        cout << "                                          PROJECT KINGS-EMPIRE";            // game name printed.
        line_change(1);

        // prompt for username and password starts here.
        cout << "Enter your username : ";
        cin >> username;
        cout << "Enter your password : ";
        cin >> password;
        // prompt code ends here.  
		
		line_change(1);      
    }
    
/////////////////////////////////////////////////////////////////////////////////////////
// PLAY GAME FUNCTIONS.
/////////////////////////////////////////////////////////////////////////////////////////

void print_introduction(int difficulty_level)
	{
		cout << "\n\nYou are a secret agent breaking into level " << difficulty_level;
		line_change(1); 
	}

bool play_game(int difficulty_level)
	{
		print_introduction(difficulty_level);
		
		const int code_a = (rand() % difficulty_level + difficulty);	// randomly selecting a number.
		const int code_b = (rand() % difficulty_level + difficulty);	// randomly selecting a number.
		const int code_c = (rand() % difficulty_level + difficulty);	// randomly selecting a number.
		const int code_sum = (code_a + code_b + code_c);
		const int code_mul = (code_a * code_b * code_c);
			
		cout << "There are three mumbers in the code.";
		cout << "\nThe code adds up to : " << code_sum;
		cout << "\nThe code multiplies to give : " << code_mul << endl;
		cout << "\nSecure your access, enter GO-CODES\n\n";
		
		int guess_a;
		int guess_b;
		int guess_c;
		
		// reading a guess from a user starts here.
		cin >> guess_a;	// reading the users guess.
	    cin >> guess_b;	// reading the users guess.
		cin >> guess_c;	// reading the users guess.
		// reading a guess from a user ends here.
		
		int guess_sum = (guess_a + guess_b + guess_c);
		int guess_mul = (guess_a * guess_b * guess_c);
		
		if(((guess_sum == code_sum) && (guess_mul == code_mul)))
			{	
				cout << "\nAccess Granted...!!";
				return true;
			}
		
		else
			{
				cout << "\nAccess Denied...!!";
				return false;
			}
	}

/////////////////////////////////////////////////////////////////////////////////////////
// MAIN PROGRAM.
/////////////////////////////////////////////////////////////////////////////////////////

int main()
    {
	    line(1, 2);
	    authentication_(); // calling authentication function to verify username and password.
	    line(1, 2);
	    
	    srand(time(NULL));	// seed used from ctime for more random value.
	    
	    int level_difficulty = 1;
	    const int max_difficulty_level = 10;
	    
	    // this is start of game looping.
	    while(level_difficulty <= max_difficulty_level)
		    {
		    	bool b_level_complete = play_game(level_difficulty);
		    	cin.clear();	//clears any errors.
		    	cin.ignore();	//clears the buffer.
		    	
		    	// starting check if level completed or not.
		    	if(b_level_complete)
		    		{
		    			++level_difficulty;	// incrimenting the default level.
					}
				// end of check
			}
		// this is the end of game looping.	
		
		line_change(1);
		cout << "Great work done agent, we recieved the files, now get out of there.";	// exit message.
		
	    return 0;
    }

/////////////////////////////////////////////////////////////////////////////////////////
// END OF PROGRAM.
/////////////////////////////////////////////////////////////////////////////////////////
