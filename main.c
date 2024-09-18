#include<stdio.h>
#include <windows.h>//header file for accessing windows API to interact with WINDOWS OS

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

    switch(option){//Switch for executing the selected option from Main Menu by user
    case 1://Outer case 1 for managing student details
        
        clrscr();
        printf("Enter Branch:\n");
        printf("\n");
        printf("1. Computer Science and Engineering\n");
        printf("2. Information Science and Engineering\n");
        printf("3. Artificial Intelligence and Machine Learning\n");
        printf("4. Computer Science and Design\n");
        printf("5. Computer Science and Business Studies\n");
        printf("6. Electronics and Communication Engineering\n");
        printf("\n");
        scanf("%d",&branch);

        switch(branch){//Switch case for selecting respective branch
        case 1:
        
        clrscr();
        printf("Enter Section:\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("C\n");
        printf("\n");
        scanf("%c",&section);
        switch(section){
        case 'A':
        clrscr();
        printf("1. Add Student Record\n");
        printf("2. Update Student Record\n");
        printf("3. Delete Student Record\n");
        break;
        case 'B':
        clrscr();
        printf("Select Option");
        printf("\n");
        printf("1. Add Student Record\n");
        printf("2. Update Student Record\n");
        printf("3. Delete Student Record\n");
        break;
        case 'C':
        clrscr();
        printf("Select Option");
        printf("\n");
        printf("1. Add Student Record\n");
        printf("2. Update Student Record\n");
        printf("3. Delete Student Record\n");
        break;
        }


        case 2:
        clrscr();
        printf("Enter Section:\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("\n");
        scanf("%c",&section);
        switch(section){
        case 'A':
        clrscr();
        printf("1. Add Student Record\n");
        printf("2. Update Student Record\n");
        printf("3. Delete Student Record\n");
        break;
        case 'B':
        clrscr();
        printf("Select Option");
        printf("\n");
        printf("1. Add Student Record\n");
        printf("2. Update Student Record\n");
        printf("3. Delete Student Record\n");
        break;
        }

        case 3:
        clrscr();
        printf("Enter Section:\n");
        printf("\n");
        printf("A\n");
        printf("B\n");
        printf("C\n");
        printf("\n");
        scanf("%c",&section);
        switch(section){
        case 'A':
        clrscr();
        printf("1. Add Student Record\n");
        printf("2. Update Student Record\n");
        printf("3. Delete Student Record\n");
        break;
        case 'B':
        clrscr();
        printf("Select Option");
        printf("\n");
        printf("1. Add Student Record\n");
        printf("2. Update Student Record\n");
        printf("3. Delete Student Record\n");
        break;
        }

        case 4:
        clrscr();
        printf("1. Add Student Record\n");
        printf("2. Update Student Record\n");
        printf("3. Delete Student Record\n");
        break;

        case 5:
        clrscr();
        printf("1. Add Student Record\n");
        printf("2. Update Student Record\n");
        printf("3. Delete Student Record\n");
        break;

        case 6:
        clrscr();
        printf("1. Add Student Record\n");
        printf("2. Update Student Record\n");
        printf("3. Delete Student Record\n");
        break;
        }



    case 2://Outer case 2 for viewing student details
        
        
        clrscr();
        printf("Enter Branch:\n");
        printf("\n");
        printf("1. Computer Science and Engineering\n");
        printf("2. Information Science and Engineering\n");
        printf("3. Artificial Intelligence and Machine Learning\n");
        printf("4. Computer Science and Design\n");
        printf("5. Computer Science and Business Studies\n");
        printf("6. Electronics and Communication Engineering\n");
        printf("\n");
        scanf("%d",&branch);
        switch(branch){//Switch case for selecting respective branch
        case 1:
            clrscr();
            printf("Enter Section:\n");
            printf("\n");
            printf("A\n");
            printf("B\n");
            printf("C\n");
            printf("\n");
            scanf("%c",&section);
            break;
        case 2:
            clrscr();
            printf("Enter Section:\n");
            printf("\n");
            printf("A\n");
            printf("B\n");
            printf("\n");
            scanf("%c",&section);
            break;
        case 3:
            clrscr();
            printf("Enter Section:\n");
            printf("\n");
            printf("A\n");
            printf("B\n");
            printf("\n");
            scanf("%c",&section);
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
        }
        break;


    case 3://Outer case 3 for marks entry
        clrscr();
        printf("1. CIE 1\n");
        printf("2. CIE 2\n");
        printf("3. SEE\n");
        break;


    case 4://Outer case 4 for attendance
        
        clrscr();
        printf("Enter Branch:\n");
        printf("\n");
        printf("1. Computer Science and Engineering\n");
        printf("2. Information Science and Engineering\n");
        printf("3. Artificial Intelligence and Machine Learning\n");
        printf("4. Computer Science and Design\n");
        printf("5. Computer Science and Business Studies\n");
        printf("6. Electronics and Communication Engineering\n");
        printf("\n");
        scanf("%d",&branch);
        switch(branch){
        case 1:
            clrscr();
            printf("Enter Section:\n");
            printf("\n");
            printf("A\n");
            printf("B\n");
            printf("C\n");
            break;
        case 2:
            clrscr();
            printf("Enter Section:\n");
            printf("\n");
            printf("A\n");
            printf("B\n");
            break;
        case 3:
            clrscr();
            printf("Enter Section:\n");
            printf("\n");
            printf("A\n");
            printf("B\n");
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
        }
        break;


    case 5://outer case for termination of program
        return 1;
        break;
    }
}
