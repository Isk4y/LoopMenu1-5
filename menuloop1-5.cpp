//Marc:Programmer
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    char choice;
    bool exitMenu = false;


    do {

        cout << "Loop Menu:" << endl;
        cout << "1. Loop 1" << endl;
        cout << "2. Loop 2" << endl;
        cout << "3. Loop 3" << endl;
        cout << "4. Loop 4" << endl;
        cout << "5. Loop 5" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice) {

            case '1': {
              system("cls");

                char subChoice;
                do {

                    cout << "Loop 1 Menu (A program that prints name five times)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Loop Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {

                        case 'a':
                                int ctr;
                                system("cls");
                                for (int ctr = 0; ctr < 5; ctr++)
                                cout << "Marc" << endl;
                                system("pause");
                                system("cls");
                                break;

                        case 'b':
                                    system("cls");
                                    ctr = 1;
                                    while (ctr<=5) {
                                    cout <<"Marc" <<"\n";
                                    ctr++;
                                    }
                                    system("pause");
                                    system("cls");
                                    break;


                        case 'c':
                                    system("cls");
                                    ctr =1;
                                    do {
                                    cout <<"Marc\n";
                                    ctr++;
                                    }
                                    while(ctr<=5);
                                    system("pause");
                                    system("cls");
                                        break;



                        case 'd':
                            system("cls");
                            break; // Return to the Loop Menu

                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd'); // Loop until user selects to go back to the Loop Menu
                break;
            }

            case '2': {
                 system("cls");
                char subChoice;
                do {
                    cout << "Loop 2 Menu (A program that counts numbers from one up to five)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Loop Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 'a':
                                        int ctr;
                                        system("cls");
                                        for (int ctr = 1; ctr <= 5; ctr++)
                                        cout << ctr << endl;
                                        system("pause");
                                        system("cls");
                                    break;


                        case 'b':

                                        system("cls");
                                        ctr = 1;
                                        while (ctr <= 5) {
                                        cout <<ctr <<"\n";
                                            ctr++;
                                        }
                                        system("pause");
                                        system("cls");
                                    break;

                        case 'c':

                                    system("cls");
                                    ctr =1;
                                    do {
                                    cout <<ctr <<"\n";
                                    ctr++;
                                    }
                                    while (ctr <= 5);
                                    system("pause");
                                    system("cls");
                                    break;

                        case 'd':
                            system("cls");
                            break; // Return to the Loop Menu

                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd'); // Loop until user selects to go back to the Loop Menu
                break;
            }

            case '3': {
                system("cls");
                char subChoice;
                do {
                    cout << "Loop 3 Menu (A program that counts numbers from five down to one)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Loop Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 'a':
                                    system("cls");
                                    for (int ctr = 5; ctr >= 1; ctr--)
                                    cout << ctr << endl;
                                    system("pause");
                                    system("cls");
                            break;

                        case 'b':
                                    int ctr1;
                                    system("cls");
                                    ctr1 = 5;
                                    while (ctr1 >=1) {
                                    cout <<ctr1 <<"\n";
                                    ctr1--;
                                    }
                                    system("pause");
                                    system("cls");
                                    break;

                        case 'c':
                                    int crt1;
                                    system ("cls");
                                    ctr1 = 5;
                                    do {
                                       cout <<ctr1 <<"\n";
                                    ctr1--;
                                    }
                                    while (ctr1 >=1);
                                    system("pause");
                                    system("cls");
                                    break;


                        case 'd':
                             system("cls");
                            break; // Return to the Loop Menu

                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd');
                break;
            }

            case '4': {
                 system("cls");
                char subChoice;
                do {
                    cout << "Loop 4 Menu (A program that counts even numbers from one up to ten)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Loop Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 'a':
                                        int ctr;
                                        system("cls");
                                        for (int ctr = 2; ctr <= 10; ctr += 2)
                                        cout << ctr << endl;
                                        system("pause");
                                        system("cls");
                                break;

                        case 'b':
                                        int ctr2;
                                        system("cls");
                                        ctr = 2;
                                        while (ctr <=10) {
                                        cout <<ctr <<"\n";
                                        ctr +=2;
                                        }
                                        system("pause");
                                        system("cls");
                                            break;

                        case 'c':

                                            system ("cls");
                                            ctr =2;
                                            do {
                                            cout<<ctr <<"\n";
                                            ctr +=2;
                                            }
                                            while (ctr <=10);
                                            system("pause");
                                            system("cls");

                                    break;

                        case 'd':
                            system ("cls");
                            break; // Return to the Loop Menu

                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd');
                break;
            }

            case '5': {
                 system("cls");
                char subChoice;
                do {
                     cout << "Loop 5 Menu (A program that counts odd numbers from one up to ten)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Loop Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 'a':
                                        int ctr;
                                        system("cls");
                                        for (int ctr = 1; ctr <= 10; ctr += 2)
                                        cout << ctr << endl;
                                        system("pause");
                                        system("cls");

                            break;

                        case 'b':
                                                system("cls");
                                                ctr = 1;
                                                while (ctr <=10) {
                                                cout <<ctr <<"\n";
                                                ctr +=2;
                                                }
                                                system("pause");
                                                system("cls");

                                            break;

                        case 'c':
                                    system("cls");
                                    ctr=1;
                                    do {
                                    cout <<ctr <<"\n";
                                    ctr +=2;
                                    }
                                    while (ctr <=10);

                                    system("pause");
                                    system("cls");

                            break;

                        case 'd':
                            system ("cls");
                            break; // Return to the Loop Menu

                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd');
                break;
            }

            case '6':
                 system("cls");
                exitMenu = true; // Exit the program
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

    } while (!exitMenu); // Loop until user selects to exit

    cout << "Exiting the program. Goodbye!" << endl;
    return 0;
}
