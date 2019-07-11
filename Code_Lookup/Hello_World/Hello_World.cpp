#include <iostream>

int main()
    {
        std::cout << "Hello World.";                             // this will print string on screen.
        std::cout << "Look i got appended at the same line.";    // this will append on same line.
        std::cout << std:: endl;                                 // this will append a complete line end and move to next line.
        std::cout << "We moved to second line due to endl.";     // this will print string on screen.
        std::cout << "\n";                                       // this will append a complete line end and move to next line due to \n.
        std::cout << "We moved to second line due to 'back slash'n";     // this will append a complete line end and move to next line.

        return 0;                                                // this will return 0 at the end of this main function.
    }
