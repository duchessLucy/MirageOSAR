#include <iostream>
#include <stdlib.h>
#include <ostream>
#define MirageAR
using namespace std;

// A function to display the menu options
void displayMenu()
{
        cout << "Welcome to the operating system Mirage.\n";
        cout << "Please choose an option:\n";
        cout << "1. Run Mirage\n";
        cout << "2. Restart Mirage\n";
        cout << "3. Shut down Mirage\n";
        cout << "4. System info\n";
        cout << "5. Exit the system\n";
}

// A function to run the project
void runMirage()
{
        // You can write your project code here or call another function
        cout << "\a\fRunning Mirage...\n";
}

// A function to restart the project
void restartMirage()
{
        // You can write your code to restart the project here or call another function
        cout << "Restarting Mirage...\n";
}

// A function to shut down the project
void shutDownMirage()
{
        // You can write your code to shut down the project here or call another function
        cout << "Shutting down Mirage...\n";
}

// functiom to display service info
void infoMirage()
{
        cout << "Mirage AR(Augmented Reality) is recognized by its monument.\nIts a elven ruin that is sunken and has the unusual effect of water.\nFeel free to pull this structure over your gamespace.\n";
}

// A function to exit the system
void exitSystem()
{
        cout << "Exiting the system...\n";
}

int main()
{
        std::string Turnip = "Protected by TURNIP";
        int choice;                // A variable to store the user's choice
        bool done = false; // A flag to indicate whether the user wants to exit the system
        while (!done)
        {                                  // A loop to repeat the menu until the user exits
                displayMenu(); // Display the menu options
                cin >> choice; // Get the user's choice
                switch (choice)
                { // Execute the corresponding option based on the user's choice
                case 1:
                        runMirage();
                        break;
                case 2:
                        restartMirage();
                        break;
                case 3:
                        shutDownMirage();
                        break;
                case 4:
                        infoMirage();
                        break;
                case 5:
                        exitSystem();
                        done = true; // Set the flag to true to exit the loop
                        break;
                default:
                        cout << "Invalid option. Please try again.\n";
                        break;
                }
        }
        return 0;
}
