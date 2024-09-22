#include<stdio.h>
#include <windows.h>//header file for accessing windows API to interact with WINDOWS OS

void details();
void view();
void marks_entry();
void attendance();
//Windows API to access console and clear it.
void clrscr() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {0, 0};
    DWORD written;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    DWORD size = csbi.dwSize.X * csbi.dwSize.Y;
    FillConsoleOutputCharacter(hConsole, ' ', size, coord, &written);
    SetConsoleCursorPosition(hConsole, coord);
}

int main(){
    int option,branch;
    char section;
    //Main menu
    printf("STUDENT RECORD MANAGEMENT SYSTEM\n");
    printf("\n");
    printf("SELECT OPTION:\n");
    printf("\n");
    printf("1. Manage Student Details\n");
    printf("2. View Student Details\n");
    printf("3. Marks Entry\n");
    printf("4. Attendance\n");
    printf("5. Exit\n");
    printf("\n");
    scanf("%d",&option);

    if(option == 1){
        details();
    }
    else if(option == 2){
        view();
    }
    else if(option == 3){
        marks_entry();
    }
    else if(option == 4){
        attendance();
    }
    else if(option == 5){
        return 1;
    }
    else{
        printf("Invalid choice");
    }
}

void details(){
    int option,operation;
    char choice;
    clrscr();
    printf("Select branch: ");
    printf("\n");
    printf("1. Computer Science and Engineering\n");
    printf("2. Information Science and Engineering\n");
    printf("3. Artificial Intellingence and Machine Learning\n");
    printf("4. Computer Science and Design\n");
    printf("5. Computer Science and Business Studies\n");
    printf("6. Electronics and Communication Engineering\n");
    printf("\n");
    printf("Please enter your choice: ");
    scanf("%d",&option);
    switch(option){
        case 1:
        clrscr();
        printf("Select section:\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("C\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %c",&choice);
        switch(choice){
            case 'A':
            clrscr();
            printf("SELECT OPTION\n");
            printf("\n");
            printf("1. Add Student Record\n");
            printf("2. Delete Student Record\n");
            printf("3. Update Student Record\n");
            printf("\n");
            printf("Please enter your choice: ");
            scanf(" %d",&operation);
            break;
            case 'B':
            clrscr();
            printf("SELECT OPTION\n");
            printf("\n");
            printf("1. Add Student Record\n");
            printf("2. Delete Student Record\n");
            printf("3. Update Student Record\n");
            printf("\n");
            printf("Please enter your choice: ");
            scanf(" %d",&operation);
            break;
            case 'C':
            clrscr();
            printf("SELECT OPTION\n");
            printf("\n");
            printf("1. Add Student Record\n");
            printf("2. Delete Student Record\n");
            printf("3. Update Student Record\n");
            printf("\n");
            printf("Please enter your choice: ");
            scanf(" %d",&operation);
            break;
        }
        break;
        case 2:
        clrscr();
        printf("Select section:\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %c",&choice);
        switch(choice){
            case 'A':
            clrscr();
            printf("SELECT OPTION\n");
            printf("\n");
            printf("1. Add Student Record\n");
            printf("2. Delete Student Record\n");
            printf("3. Update Student Record\n");
            printf("\n");
            printf("Please enter your choice: ");
            scanf(" %d",&operation);
            break;
            case 'B':
            clrscr();
            printf("SELECT OPTION\n");
            printf("\n");
            printf("1. Add Student Record\n");
            printf("2. Delete Student Record\n");
            printf("3. Update Student Record\n");
            printf("\n");
            printf("Please enter your choice: ");
            scanf(" %d",&operation);
            break;
        }
        break;
        case 3:
        clrscr();
        printf("Select section:\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %c",&choice);
        switch(choice){
            case 'A':
            clrscr();
            printf("SELECT OPTION\n");
            printf("\n");
            printf("1. Add Student Record\n");
            printf("2. Delete Student Record\n");
            printf("3. Update Student Record\n");
            printf("\n");
            printf("Please enter your choice: ");
            scanf(" %d",&operation);
            break;
            case 'B':
            clrscr();
            printf("SELECT OPTION\n");
            printf("\n");
            printf("1. Add Student Record\n");
            printf("2. Delete Student Record\n");
            printf("3. Update Student Record\n");
            printf("\n");
            printf("Please enter your choice: ");
            scanf(" %d",&operation);
            break;
        }
        break;
        case 4:
        clrscr();
        printf("SELECT OPTION\n");
        printf("\n");
        printf("1. Add Student Record\n");
        printf("2. Delete Student Record\n");
        printf("3. Update Student Record\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %d",&operation);
        break;
        case 5:
        clrscr();
        printf("SELECT OPTION\n");
        printf("\n");
        printf("1. Add Student Record\n");
        printf("2. Delete Student Record\n");
        printf("3. Update Student Record\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %d",&operation);
        break;
        case 6:
        clrscr();
        printf("SELECT OPTION\n");
        printf("\n");
        printf("1. Add Student Record\n");
        printf("2. Delete Student Record\n");
        printf("3. Update Student Record\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %d",&operation);
        break;
        default:
        printf("Invalid Choice");
        break;
    }
}

void view(){
    int option;
    char choice;
    clrscr();
    printf("Select branch: ");
    printf("\n");
    printf("1. Computer Science and Engineering\n");
    printf("2. Information Science and Engineering\n");
    printf("3. Artificial Intellingence and Machine Learning\n");
    printf("4. Computer Science and Design\n");
    printf("5. Computer Science and Business Studies\n");
    printf("6. Electronics and Communication Engineering\n");
    printf("\n");
    printf("Please enter your choice: ");
    scanf("%d",&option);
    switch(option){
        case 1:
        clrscr();
        printf("Select Section\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("C\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %c",&choice);
        break;
        case 2:
        clrscr();
        printf("Select Section\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %c",&choice);
        break;
        case 3:
        clrscr();
        printf("Select Section\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %c",&choice);
        break;
        case 4:
        clrscr();
        break;
        case 5:
        clrscr();
        break;
        case 6:
        clrscr();
        break;
        default:
        printf("Invalid Choice");
        break;
    }
}

void marks_entry(){
    int option;
    char choice;
    clrscr();
    printf("Select branch: ");
    printf("\n");
    printf("1. Computer Science and Engineering\n");
    printf("2. Information Science and Engineering\n");
    printf("3. Artificial Intellingence and Machine Learning\n");
    printf("4. Computer Science and Design\n");
    printf("5. Computer Science and Business Studies\n");
    printf("6. Electronics and Communication Engineering\n");
    printf("\n");
    printf("Please enter your choice: ");
    scanf("%d",&option);
    switch(option){
        case 1:
        clrscr();
        printf("Select Section\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("C\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %c",&choice);
        break;
        case 2:
        clrscr();
        printf("Select Section\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %c",&choice);
        break;
        case 3:
        clrscr();
        printf("Select Section\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %c",&choice);
        break;
        case 4:
        clrscr();
        break;
        case 5:
        clrscr();
        break;
        case 6:
        clrscr();
        break;
        default:
        printf("Invalid Choice");
        break;
    }
}

void attendance(){
    int option;
    char choice;
    clrscr();
    printf("Select branch: ");
    printf("\n");
    printf("1. Computer Science and Engineering\n");
    printf("2. Information Science and Engineering\n");
    printf("3. Artificial Intellingence and Machine Learning\n");
    printf("4. Computer Science and Design\n");
    printf("5. Computer Science and Business Studies\n");
    printf("6. Electronics and Communication Engineering\n");
    printf("\n");
    printf("Please enter your choice: ");
    scanf("%d",&option);
    switch(option){
        case 1:
        clrscr();
        printf("Select Section\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("C\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %c",&choice);
        break;
        case 2:
        clrscr();
        printf("Select Section\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %c",&choice);
        break;
        case 3:
        clrscr();
        printf("Select Section\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("\n");
        printf("Please enter your choice: ");
        scanf(" %c",&choice);
        break;
        case 4:
        clrscr();
        break;
        case 5:
        clrscr();
        break;
        case 6:
        clrscr();
        break;
        default:
        printf("Invalid Choice");
        break;
    }
}