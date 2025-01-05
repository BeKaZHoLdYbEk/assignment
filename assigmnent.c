#include <stdio.h>

int main() {
    
    //SELECT AN ACTION
    printf("Select an action: \n     1. Borrow a book \n     2. Return a book \n     3. Search a book \n     4. Fine management \n");
    int action;
    scanf("%d", &action);

    //FUNCTIONS - ACTIONS
    void borrowBook(){
        printf("Enter the book's title, ID or the author you want to borrow: \n");
        int ID; char title, author;
        scanf("%d %s %s", &ID &title &author);

        FILE *fptr;
        fptr = fopen("info.txt", "r");
        char myString[100];
        fgets(myString, 100, fptr);
        printf("%s", myString);
        fclose(fptr);
        
        }
    void returnBook(){
        printf("Enter the book's title, ID or the author you want to return: \n"); }
    void searchBook(){
        printf("Enter the book's title, ID or the author you want to search: \n"); }
    void fineManagement(){
        printf("HZ POKA \n"); }

    //SWITCH CASES FOR FUNCTIONS
    do{
        switch(action){
        case 1: borrowBook(); break;
        case 2: returnBook(); break;
        case 3: searchBook(); break;
        case 4: fineManagement(); break; 
        default: printf("wrong number, type again \n"); scanf("%d", &action);
            switch(action){
                case 1: borrowBook(); break;
                case 2: returnBook(); break;
                case 3: searchBook(); break;
                case 4: fineManagement(); break;
                default: printf("wrong number, type again \n"); scanf("%d", &action); } }
    }while(action > 4);
    



    return 0;
}
