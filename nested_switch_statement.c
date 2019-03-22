//Write an C Program Using Nested Switch
/*
In C, we can have an inner switch embedded in an outer switch. Also, the case constants of the inner and outer switch may have common values and without any conflicts.

We considere the following program which the user to type his own ID, if the ID is valid it will ask him to enter his password, if the password is correct the program will print the name of the user, otherwise ,the program will print Incorrect Password and if the ID does not exist , the program will print Incorrect ID
*/

#include <stdio.h>
int main() {
        int ID = 555555;
        int password = 000000;
        printf("Plese Enter Your ID:\n ");
        scanf("%d", & ID);
        switch (ID) {
            case 555555:
                printf("Enter your password:\n ");
                scanf("%d", & password);
                switch (password) {
                    case 000000:
                        printf("Welcome to my C Programming World, Dear Programmer\n");
                        break;
                    default:
                        printf("incorrect password");
                        break;
                }
                break;
            default:
                printf("incorrect ID");
                break;
        }
}
