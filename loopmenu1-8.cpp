//Marc:Programmer
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

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
        cout << "6. Loop 6" << endl;
        cout << "7. Loop 7" << endl;
        cout << "8. Loop 8" << endl;
        cout << "9. Exit" << endl;
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
                            break;

                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd');
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
                            break;

                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd');
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
                            break;
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
                            break;

                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd');
                break;
            }

            case '6': {
                system ("cls");
                char subChoice;
                do {
                    cout << "Loop 6 Menu (A program to check and display whether a number is prime or not)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Loop Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 'a': {
                                                system ("cls");
                                                int number;
                                                cout << "Enter a number to check if it's prime using a for loop: ";
                                                cin >> number;

                                                if (isPrime(number)) {
                                                cout << number << " is a prime number." << endl;
                                                } else {
                                                cout << number << " is not a prime number." << endl;
                                                }
                                                 system("pause");
                                                 system("cls");
                                                break;
                                                }
                        case 'b': {
                                                system ("cls");
                                                int number;
                                                cout << "Enter a number to check if it's prime using a while loop: ";
                                                cin >> number;

                                                if (isPrime(number)) {
                                                cout << number << " is a prime number." << endl;
                                                } else {
                                                cout << number << " is not a prime number." << endl;
                                                }
                                                system("pause");
                                                system("cls");
                                                break;
                                                }

                        case 'c': {
                                                system ("cls");
                                                int number;
                                                cout << "Enter a number to check if it's prime using a do-while loop: ";
                                                cin >> number;

                                                if (isPrime(number)) {
                                                cout << number << " is a prime number." << endl;
                                                } else {
                                                cout << number << " is not a prime number." << endl;
                                                }
                                                system("pause");
                                                system("cls");
                                                break;
                                                }
                        case 'd':
                            system ("cls");
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd');
                break;
            }


            case '7': {
                system ("cls");
                char subChoice;
                do {
                    cout << "Loop 7 Menu (A program to find and display the factorial of a given or inputted number.)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Main Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 'a': {
                                                system ("cls");
                                                int num;
                                                cout << "Enter a number to find its factorial using a for loop: ";
                                                cin >> num;

                                                if (num < 0) {
                                                cout << "Factorial is not defined for negative numbers." << endl;
                                                } else {
                                                int result = 1;
                                                for (int i = 1; i <= num; ++i) {
                                                result *= i;
                                                }
                                                    cout << "Factorial of " << num << " is: " << result << endl;
                                                }
                                                system("pause");
                                                system("cls");
                                                break;
                                                }

                        case 'b': {
                                                system ("cls");
                                                int num;
                                                cout << "Enter a number to find its factorial using a while loop: ";
                                                cin >> num;

                                                if (num < 0) {
                                                cout << "Factorial is not defined for negative numbers." << endl;
                                                } else {
                                                    int result = 1, i = 1;
                                                while (i <= num) {
                                                result *= i;
                                                ++i;
                                                }
                                                    cout << "Factorial of " << num << " is: " << result << endl;
                                                }
                                                system("pause");
                                                system("cls");
                                                break;
                                                }

                        case 'c': {
                                                system ("cls");
                                                int num;
                                                cout << "Enter a number to find its factorial using a do-while loop: ";
                                                cin >> num;

                                                if (num < 0) {
                                                cout << "Factorial is not defined for negative numbers." << endl;
                                                } else {
                                                int result = 1, i = 1;
                                                do {
                                                result *= i;
                                                ++i;
                                                } while (i <= num);
                                                cout << "Factorial of " << num << " is: " << result << endl;
                                                }
                                                system("pause");
                                                system("cls");
                                                break;
                                            }

                                            case 'd':
                                                system ("cls");
                                                break;
                                            default:
                                                cout << "Invalid choice. Please try again." << endl;
                                                break;
                                        }
                                    } while (subChoice != 'd');
                                    break;
                                }

            case '8': {
                system ("cls");
                char subChoice;
                do {
                    cout << "Loop 8 Menu (A program to find and display the Greatest Common Divisor (GCD) of two given numbers)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Main Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 'a': {
                                                system ("cls");
                                                int num1, num2;
                                                cout << "Enter two numbers to find their GCD using a for loop: ";
                                                cin >> num1 >> num2;

                                                while (num1 != num2) {
                                                if (num1 > num2) {
                                                num1 -= num2;
                                                } else {
                                                num2 -= num1;
                                                }
                                                }
                                                cout << "GCD is: " << num1 << endl;
                                                system("pause");
                                                system("cls");
                                                break;
                                                }

                        case 'b': {
                                                system ("cls");
                                                int num1, num2;
                                                cout << "Enter two numbers to find their GCD using a while loop: ";
                                                cin >> num1 >> num2;

                                                while (num1 != num2) {
                                                    if (num1 > num2) {
                                                        num1 -= num2;
                                                    } else {
                                                        num2 -= num1;
                                                    }
                                                }
                                                cout << "GCD is: " << num1 << endl;
                                                system("pause");
                                                system("cls");

                                                break;
                                                }

                        case 'c': {
                                                system ("cls");
                                                int num1, num2;
                                                cout << "Enter two numbers to find their GCD using a do-while loop: ";
                                                cin >> num1 >> num2;

                                                do {
                                                if (num1 > num2) {
                                                num1 -= num2;
                                                } else {
                                                num2 -= num1;
                                                }
                                                } while (num1 != num2);
                                                cout << "GCD is: " << num1 << endl;
                                                break;
                                            }

                        case 'd':
                                                system ("cls");
                                                break;
                                                default:
                                                cout << "Invalid choice. Please try again." << endl;
                                                break;
                                                }
                                                } while (subChoice != 'd');
                                                system("pause");
                                                system("cls");

                                                break;

                                                }

            case '9': {
                system ("cls");
                exitMenu = true;
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

    } while (!exitMenu);

    cout << "Exiting the program. Goodbye!" << endl;
    return 0;
}
