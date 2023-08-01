#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<unistd.h>

int scr;
int flag1 = 0,flag2 = 0,flag3 = 3;
int sumStar = 0;
int rate;
int mainMenu();
int rating(int rate);
int levelEasy();
int levelMidium();
int levelHard();
int detail();
char* regist();
char help(char *dupliName);
int options(char option);
int warmup();
char time30();
char time45();
int win(int point);
int score();
int level();
int timeUp();
int life();
int helps();
int main()
{
    system("color 5F");
    mainMenu();
}
int options(char option)
{
    switch(option)
    {
    case 'S':
        system("cls");
        regist();
        break;
    case 's':
        system("cls");
        regist();
        break;
    case 'Q':
        exit(0);
        break;
    case 'q':
        exit(0);
        break;
    case 'D':
        detail();
        break;
    case 'd':
        detail();
        break;
    case 'V':
        system("cls");
        score();
        break;
    case 'v':
        system("cls");
        score();
        break;
    case 'H':
        system("cls");
        helps();
        break;
    case 'h':
        system("cls");
        helps();
        break;
    }
}
char help(char *dupliName)
{
    char start;
    system("cls");
    printf("\n     --------Welcome %s to C program Quizz Game--------\n\n",dupliName);
    printf("               -------Kaun Banega Coder-------\n\n");
    printf("   Here are some tips you must Know before playing:\n");
    printf("   -----------------------------------------------------\n");
    printf("  >> There are 2 rounds in this Quiz Game, WARMUP ROUND & CHALLANGE ROUND,\n\n");
    printf("  >> In Warmup Round you will be asked total of 3 questions to test your general knowledge. \n");
    printf("     You are eligible to play the game if you give at least 2 right answer, otherwise you can't \n");
    printf("     proceed further to the Challange Round.\n\n");
    printf("  >> Choose your level and than.\n\n");
    printf("  >> Now, Your game starts with Challange Round, In this Round you have three level mode \n");
    printf("     you will be asked total of 10 questions.\n\n");
    printf("  >> Each right answer will be awarded $100!\n\n");
    printf("     By this way you can win upto 100000 cash prize!!!\n\n");
    printf("  >> But remember that you have only 30 second for each question\n\n");
    printf("  >> You will be given 4 option and you have to press A,B,C or D the right option.\n\n");
    printf("  >> You will be asked question Continuosly till right answer are given,\n\n");
    printf("  >> I want to tell you that you have also life-line facility in this Quizz game!\n\n");
    printf("  >> No negative marking for wrong answer!\n\n\n");
    printf("               !!!!!!!!!ALL THE BEST!!!!!!!!!\n\n");
    printf("   Press Y to start the game!\n\n");
    printf("   Press any other key to return the main menu!\n\n");
    fflush(stdin);
    start = getch();
    if(start == 'Y' || start == 'y')
    {
        warmup(dupliName);
    }
    else
    {
        system("cls");
        mainMenu();
    }
}
char* regist()
{
    char name[25];
    printf("\n\n\n\n\n\n\n\n                            Register your name:- ");
    gets(name);
    help(name);
}
int detail()
{
    system("cls");
    printf("\n              I am very happy because you are come on my game platform\n");
    printf("    this is my first C PROGRAM QUIZZ GAME (Project-I)..I hope you play it. actually this idea\n");
    printf("    is not mine here is my sister who is say me for making a quiz program like KBC\n");
    printf("    But i am think about how is it possible but after some time i decide that now lets\n");
    printf("    go to do than i use some programing skill and i have made a beautiful question\n");
    printf("    program which has a question and 4 option when you enter correct option your answer\n");
    printf("    is correct show but when you enter wrong option you get wrong ans text,when\n");
    printf("    this program show my sister, she was really so happy at the time i have realize\n");
    printf("    we have to start our work without think far incident than\n");
    printf("    i decide to make this quiz game and now you have seen\n\n");
    printf("    in this game aprox 18 functions used also include main\n");
    printf("    this code is written in more than 2000 lines\n");
    printf("    There are 2 Rounds in this game\n");
    printf("    And there are 3 levels in this Quizz game\n");
    printf("    1.Easy Lever  2.Midium Level  3.Hard Level\n");
    printf("    in every level total 10 Questions asked\n\n");
    printf("    your given total rating for this game from start to now %d\n\n",sumStar);
    printf("    this game was mainly developed for CODEBLOCKS, but you can run it in another IDE\n\n");
    printf("    when you play this game i hope you enjoy \n");
    printf("    Give your rating surely ----------------\n");
    printf("    if you like this game so you can join me\n\n");
    printf("    with Instagram by my username:- mr.hacker256\n");
    printf("    also you can join with me on Whatsapp:- 9179953727\n\n");
    printf("    and give me some more tips for improve this game\n\n");
    printf("    _____________________\n");
    printf("    ___________________________\n\n");
    printf("    -------Dear friends who are intrested in my game and help me at all difficulty movment-------\n");
    printf("                 Tushar, Shubham, Manish, Abhay, Surjeet, Piyush, Akash, Ankesh, Rahul                 \n");
    printf("                                       Gopal, vishnu and others                  \n\n\n");
    printf("                               ***Mostly Thanks Respected Swapnesh Sir***\n");
    printf("                                        ***And all my mentors***\n");
    printf("                        ******This Game was Developed by CS 'B' Students******\n");
    getch();
    system("cls");
    mainMenu();
}
int helps()
{
    printf("\n     --------Welcome to Help Center of C program Quizz Game--------\n\n");
    printf("                    -------Kaun Banega Coder-------\n\n");
    printf("   Here are some tips you must Know before playing:\n");
    printf("   -----------------------------------------------------\n");
    printf("  >> There are 2 rounds in this Quiz Game, WARMUP ROUND & CHALLANGE ROUND,\n\n");
    printf("  >> In Warmup Round you will be asked total of 3 questions to test your general knowledge. \n");
    printf("     You are eligible to play the game if you give at least 2 right answer, otherwise you can't \n");
    printf("     proceed further to the Challange Round.\n\n");
    printf("  >> Choose your level and than.\n\n");
    printf("  >> Now, Your game starts with Challange Round, In this Round you have three level mode \n");
    printf("     you will be asked total of 10 questions.\n\n");
    printf("  >> Each right answer will be awarded $100!\n\n");
    printf("     By this way you can win upto 100000 cash prize!!!\n\n");
    printf("  >> But remember that you have only 30 second for each question\n\n");
    printf("  >> You will be given 4 option and you have to press A,B,C or D the right option.\n\n");
    printf("  >> You will be asked question Continuosly till right answer are given,\n\n");
    printf("  >> I want to tell you that you have also life-line facility in this Quizz game!\n\n");
    printf("  >> No negative marking for wrong answer!\n\n\n");
    printf("               !!!!!!!!!ALL THE BEST!!!!!!!!!\n\n");
    getch();
    mainMenu();
}
int warmup(char *newName)
{
    char choice;
    int count = 0;
    int opt;
    system("cls");
    printf("\n  1). When was C language Created ?\n");
    printf("\n      A. 1970               B. 1975\n");
    printf("\n      C. 1972               D. 1969\n");
    choice = getch();
    if(choice == 'C' || choice == 'c')
    {
        printf("\n      Correct!!!\n");
        count++;
    }
    else
    {
        printf("\n      Wrong!! The Correct answer is C.1972\n");
    }
    getch();
    system("cls");
    printf("\n  2). All keywords in C are in ?\n");
    printf("\n      A. LowerCase letters              B. UpperCase letters\n");
    printf("\n      C. CamelCase letters              D. None\n");
    choice = getch();
    if(choice == 'A' || choice == 'a')
    {
        printf("\n      Correct!!!\n");
        count++;
    }
    else
    {
        printf("\n      Wrong!! The Correct answer is A.Lowercase letters\n");
    }
    getch();
    system("cls");
    printf("\n  3). The format identifier %%i is also used for _____ data type ?\n");
    printf("\n      A. int                B. char\n");
    printf("\n      C. double             D. float\n");
    choice = getch();
    if(choice == 'A' || choice == 'a')
    {
        printf("\n      Correct!!!\n");
        count++;
    }
    else
    {
        printf("\n      Wrong!! The Correct answer is A.int\n");
    }
    getch();
    if(count >= 2)
    {
        system("cls");
        printf("\n\n         **** CONGRATULATIONS %s ****\n",newName);
        printf("\n      now you are eligible to play Challange Round",newName);
        printf("\n      ______________________________");
        printf("\n      ___________________________________\n");
        printf("\n      Choose your Quizz level option for Challange Round:-  1.EASY\n");
        printf("\n                                                            2.MIDIUM\n");
        printf("\n                                                            3.HARD\n");
        scanf("%d",&opt);
        system("cls");
        switch(opt)
        {
        case 1:
            levelEasy();
            break;
        case 2:
            levelMidium();
            break;
        case 3:
            levelHard();
            break;
        }
    }
    else
    {
        system("cls");
        printf("\n\n               **** Ohh! %s ****\n",newName);
        printf("\n      now you are not eligible to play Challange Round",newName);
        printf("\n      ______________________________");
        printf("\n      ___________________________________\n");
        printf("\n      Press any key to go main menu!\n");
        getch();
        system("cls");
        mainMenu();
    }
}
int levelEasy()
{
    char option,stars[6];
    int choice;
    int point = 100;
    printf("\n    Que 1) C is _______ type of programming language.?\n");
    printf("\n            A). Object Oriented                  B). Procedrul\n");
    printf("\n            C). Bit level language               D). Functional\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time30();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n\n\n\n    Que 1) C is _______ type of programming language.?\n");
                printf("\n           A). Object Oriented                  B). Procedrul\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 1) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if((option != 'B' && option != 'b'))
        {
            printf("\n            Wrong!! the correct answer is B).Procedrul\n");
            scr = 0;
            getch();
            system("cls");
            printf("\n      ************** BAD-LUCK **************\n\n");
            printf("\n                 >> You Won $0 <<\n");
            printf("\n      But you can try your luck again");
            printf("\n      _______________________________________");
            printf("\n      __________________________________________");
            printf("\n      ______________________________\n");
            printf("\n      Press any key if you want to go main menu\n");
            getch();
            system("cls");
            mainMenu();
        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n    Que 2). C language was invented in which laboratories.?\n");
    printf("\n            A). Uniliver Labs                        B). IBM Labs\n");
    printf("\n            C). AT&T Bell Labs                       D). Verizon Labs\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time30();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 2). C language was invented in which laboratories.?\n");
                printf("\n            C). AT&T Bell Labs                       D). Verizon Labs\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 2) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'C' && option != 'c')
        {
            printf("\n            Wrong!! the correct answer is C). AT&T Bell Labs\n");
            getch();
            system("cls");
            win(point * 1);
            mainMenu();
        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");

        }
    }
    printf("\n    Que 3). A C program is a combination of.?\n");
    printf("\n            A). Statements                  B). Functions\n");
    printf("\n            C). Variables                   D). All of above\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time30();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 3). A C program is a combination of.?\n");
                printf("\n            C). Variables                   D). All of above\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 3) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'D' && option != 'd')
        {
            printf("\n            Wrong!! the correct answer is D).All of above\n");
            getch();
            system("cls");
            win(point * 2);

        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n    Que 4). An Identifier can start with.?\n");
    printf("\n            A). Alphabet                                               B). Underscore ( _ ) sign\n");
    printf("\n            C). Any character that can be typed on a keyboard          D). Option A & Option B\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time30();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 4). An Identifier can start with.?\n");
                printf("\n            C). Any character that can be typed on a keyboard          D). Option A & Option B\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 4) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'D' && option != 'd')
        {
            printf("\n            Wrong!! the correct answer is D). Option A & Option B\n");
            getch();
            system("cls");
            win(point * 3);

        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n    Que 5). Find an integer constant.\n");
    printf("\n            A). 3.14                  B). 34\n");
    printf("\n            C). \"256\"               D). None of them\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time30();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 5). Find an integer constant.\n");
                printf("\n            A). 3.14                  B). 34\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 5) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'B' && option != 'b')
        {
            printf("\n            Wrong!! the correct answer is B).34\n");
            getch();
            system("cls");
            win(point * 4);

        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n    Que 6). Find a Character constant.\n");
    printf("\n            A). 'A'  'a'                     B). '1'  '9'\n");
    printf("\n            C). '$'  '#'                     D). all of above \n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time30();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 6). Find a Character constant.\n");
                printf("\n            C). '$'  '#'                     D). all of above \n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 6) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'D' && option != 'd')
        {
            printf("\n            Wrong!! the correct answer is D).all of above\n");
            getch();
            system("cls");
            win(point * 5);

        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n    Que 7). Choose a right statement.\n");
    printf("\n            A). int myage = 10;                         B). int myage = 10;");
    printf("\n                int my_age = 10;                            int my,age = 10;\n");
    printf("\n            C). int myage = 10;                         D). All are right");
    printf("\n                int my age = 10;                                         \n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time30();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 7). Choose a right statement.\n");
                printf("\n            A). int myage = 10;                         B). int myage = 10;");
                printf("\n                int my_age = 10;                            int my,age = 10;\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 7) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'A' && option != 'a')
        {
            printf("\n            Wrong!! the correct answer is A).int myage = 10;");
            printf("\n                                             int my_age = 10;\n");
            getch();
            system("cls");
            win(point * 6);

        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n         1  int main()");
    printf("\n         2  {");
    printf("\n         3       int c = 3.10 + 4;");
    printf("\n         4       printf(\"%%d\", c);");
    printf("\n         5                           ");
    printf("\n         6  }\n");
    printf("\n    Que 8). Choose a right statement.\n");
    printf("\n            A). 8                       B). 7.1\n");
    printf("\n            C). 8.0                     D). 7\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time30();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n         1  int main()");
                printf("\n         2  {");
                printf("\n         3       int c = 3.10 + 4;");
                printf("\n         4       printf(\"%%d\", c);");
                printf("\n         5                           ");
                printf("\n         6  }\n");
                printf("\n    Que 8). Choose a right statement.\n");
                printf("\n            C). 8.0                     D). 7\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 8) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'D' && option != 'd')
        {
            printf("\n            Wrong!! the correct answer is D).7\n");
            getch();
            system("cls");
            win(point * 7);

        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n    Que 9). Choose a right statement.\n");
    printf("\n                float var = 3.5 + 4.5;\n");
    printf("\n            A). var = 8.0                     B). var = 8\n");
    printf("\n            C). var = 7                       D). var = 0.0\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time30();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 9). Choose a right statement.\n");
                printf("\n                float var = 3.5 + 4.5;\n");
                printf("\n            A). var = 8.0                     B). var = 8\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 9) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'A' && option != 'a')
        {
            printf("\n            Wrong!! the correct answer is A).var = 8.0\n");
            getch();
            system("cls");
            win(point * 8);

        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n    Que 10). Choose a right statement.\n");
    printf("\n                int a = 10 + 4.867;\n");
    printf("\n             A). a = 10                      B). a = 14.867\n");
    printf("\n             C). a = 14                      D). compiler error.\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time30();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 10). Choose a right statement.\n");
                printf("\n                int a = 10 + 4.867;\n");
                printf("\n             C). a = 14                      D). compiler error.\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 10) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = point * 9;
                    getch();
                    system("cls");
                    printf("\n      **************CONGRATULATION**************\n\n");
                    printf("\n                   >> You Won $%d <<\n",point * 9);
                    printf("\n      Nice dud you injoy all the Questions");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    mainMenu();
                }
                else
                {
                    printf("\n           Correct!!\n");
                    scr = point * 10;
                    getch();
                    system("cls");
                    printf("\n      **************CONGRATULATION**************\n\n");
                    printf("\n                  >> You Won $%d <<\n",point * 10);
                    printf("\n      NICE DUD I HOPE YOU ENJOYED THIS GAME");
                    printf("\n      _____________________________________ __");
                    printf("\n      If you like this game give us your rating in star(*) 1 - 5\n");
                    scanf("%d",&rate);
                    rating(rate);
                    printf("\n      ______________________________\n");
                    printf("\n      ___________________________________\n");
                    printf("\n      Press any key for go to main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tSorry Now Questions are Finished\n");
                printf("\t\t\t\tpress any key for go to again question???\n");
                getch();
                system("cls");
                printf("\n    Que 10). Choose a right statement.\n");
                printf("\n                int a = 10 + 4.867;\n");
                printf("\n             A). a = 10                      B). a = 14.867\n");
                printf("\n             C). a = 14                      D). compiler error.\n");
                option = getch();
                break;
        }
    }
    if(choice != 2)
    {
        if(option != 'C' && option != 'c')
        {
            printf("\n            Wrong!! the correct answer is C).a = 14\n");
            scr = point * 9;
            getch();
            system("cls");
            printf("\n      **************CONGRATULATION**************\n\n");
            printf("\n                   >> You Won $%d <<\n",point * 9);
            printf("\n      Nice dud you injoy all the Questions");
            printf("\n      _______________________________________");
            printf("\n      __________________________________________");
            printf("\n      ______________________________\n");
            printf("\n      Press any key if you want to go main menu\n");
            getch();
            mainMenu();

        }
        else
        {
            printf("\n            Correct!!\n");
            scr = point * 10;
            getch();
            system("cls");
            printf("\n      **************CONGRATULATION**************\n\n");
            printf("\n                  >> You Won $%d <<\n",point * 10);
            printf("\n      NICE DUD I HOPE YOU ENJOYED THIS GAME");
            printf("\n      _____________________________________ __");
            printf("\n      If you like this game give us your rating in between 1 - 5\n");
            scanf("%d",&rate);
            rating(rate);
            printf("\n      ______________________________\n");
            printf("\n      ___________________________________\n");
            printf("\n      Press any key for go to main menu\n");
            getch();
            system("cls");
            mainMenu();
        }
    }
}
int levelMidium()
{
    char option,stars[6];
    int choice;
    int point = 100;
    printf("\n    Que 1). Identify wrong C Keywords below.\n");
    printf("\n            A). auto, double, int, struct                  B). break, else, long, switch\n");
    printf("\n            C). case, enum, register, typedef              D). char, extern, intern, return\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time45();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 1). Identify wrong C Keywords below.\n");
                printf("\n            C). case, enum, register, typedef              D). char, extern, intern, return\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 1) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'D' && option != 'd')
        {
            printf("\n            Wrong!! the correct answer is D).char, extern, intern, return\n");
            scr = 0;
            getch();
            system("cls");
            printf("\n      ************** BAD-LUCK **************\n\n");
            printf("\n                 >> You Won $0 <<\n");
            printf("\n      But you can try your luck again");
            printf("\n      _______________________________________");
            printf("\n      __________________________________________");
            printf("\n      ______________________________\n");
            printf("\n      Press any key if you want to go main menu\n");
            getch();
            system("cls");
            mainMenu();
        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n    Que 2). Types of Integers are.?\n");
    printf("\n            A). short                   B). long\n");
    printf("\n            C). int                     D). all of Above\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time45();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 2). Types of Integers are.?\n");
                printf("\n            C). int                     D). all of Above\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 2) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'D' && option != 'd')
        {
            printf("\n            Wrong!! the correct answer is D).all of Above\n");
            getch();
            system("cls");
            win(point * 1);
            mainMenu();
        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n         1  main()");
    printf("\n         2  {");
    printf("\n         3      printf(\"GLOO TECH\\n\");");
    printf("\n         4      main();");
    printf("\n         5  }\n");
    printf("\n    Que 3). What will be the output of above C program ?\n");
    printf("\n            A). Wrong statement                               B). It will keep on printing GLOO TECH\n");
    printf("\n            C). It will Print GLOO TECH once                  D). Compilation Error\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time45();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n         1  main()");
                printf("\n         2  {");
                printf("\n         3      printf(\"GLOO TECH\\n\");");
                printf("\n         4      main();");
                printf("\n         5  }\n");
                printf("\n    Que 3). What will be the output of above C program ?\n");
                printf("\n            A). Wrong statement                               B). It will keep on printing GLOO TECH\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 3) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'B' && option != 'b')
        {
            printf("\n            Wrong!! the correct answer is B).It will keep on printing GLOO TECH\n");
            getch();
            system("cls");
            win(point * 2);

        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n    Que 4). What is required in each C program?\n");
    printf("\n            A). The program must have at least one function                B). Input data\n");
    printf("\n            C). The program does not require any function.                 D). Output data\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time45();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 4). What is required in each C program?\n");
                printf("\n            A). The program must have at least one function                B). Input data\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 4) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'A' && option != 'a')
        {
            printf("\n            Wrong!! the correct answer is A).The program must have at least one function\n");
            getch();
            system("cls");
            win(point * 3);

        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n         1  int main()");
    printf("\n         2  {");
    printf("\n         3      int i = 2");
    printf("\n         4      {");
    printf("\n         5          int i = 4, j = 5");
    printf("\n         6          printf(\"%%d%%d\",i,j);");
    printf("\n         7      }");
    printf("\n         8      printf(\"%%d%%d\",i,j);");
    printf("\n         9  }\n");
    printf("\n    Que 5). What will be the output of the above C program ?\n");
    printf("\n            A). 4525                  B). 2525\n");
    printf("\n            C). 4545                  D). Runtime Error\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time45();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 5). What will be the output of the above C program ?\n");
                printf("\n            A). 4525                  B). 2525\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 5) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'A' && option != 'a')
        {
            printf("\n            Wrong!! the correct answer is A).4525\n");
            getch();
            system("cls");
            win(point * 4);

        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n    Que 6). In the C language, the constant is defined _______.\n");
    printf("\n            A). Before main                                    B). After main\n");
    printf("\n            C). Anywhere, but starting on a new line           D). None of the these\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time45();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 6). In the C language, the constant is defined _______.\n");
                printf("\n            C). Anywhere, but starting on a new line           D). None of the these\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 6) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'C' && option != 'c')
        {
            printf("\n            Wrong!! the correct answer is C). Anywhere, but starting on a new line\n");
            getch();
            system("cls");
            win(point * 5);

        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n            for(j = 1; j <= 10; j = j-1)\n");
    printf("\n    Que 7). How many times will the above loop execute?\n");
    printf("\n            A). Forever                   B). Never\n");
    printf("\n            C). 0                         D). 1\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time45();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 7). How many times will the above loop execute?\n");
                printf("\n            A). Forever                   B). Never\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 7) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'A' && option != 'a')
        {
            printf("\n            Wrong!! the correct answer is A).Forever\n");
            getch();
            system("cls");
            win(point * 6);

        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n         3      if((a > b) && (a <= c))\n");
    printf("\n         4              a = a + 1;");
    printf("\n         5      else\n");
    printf("\n         7              c = c + 1;\n");
    printf("\n    Que 8). What is the result after execution of the following code if a is 10, b is 5, and c is 10?\n");
    printf("\n            A). a = 10, c = 10                  B). a = 11, c = 10\n");
    printf("\n            C). a = 10, c = 11                  D). a = 11, c = 11\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time45();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n         3      if((a > b) && (a <= c))\n");
                printf("\n         4              a = a + 1;");
                printf("\n         5      else\n");
                printf("\n         7              c = c + 1;\n");
                printf("\n    Que 8). What is the result after execution of the following code if a is 10, b is 5, and c is 10?\n");
                printf("\n            A). a = 10, c = 10                  B). a = 11, c = 10\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 8) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'B' && option != 'b')
        {
            printf("\n            Wrong!! the correct answer is B).a = 11, c = 10\n");
            getch();
            system("cls");
            win(point * 7);

        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n    Que 9). How many characters can a string hold when declared as follows?\n");
    printf("\n            A). 18                   B). 19\n");
    printf("\n            C). 20                   D). None of these\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time45();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n    Que 9). How many characters can a string hold when declared as follows?\n");
                printf("\n            C). 20                   D). None of these\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 9) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = 0;
                    getch();
                    system("cls");
                    printf("\n      ************** BAD-LUCK **************\n\n");
                    printf("\n                 >> You Won $0 <<\n");
                    printf("\n      But you can try your luck again");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    getch();
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tPress any key for go to next Question\n");
                getch();
                system("cls");
                break;
        }
    }
    if(choice != 2 && choice != 3)
    {
        if(option != 'C' && option != 'c')
        {
            printf("\n            Wrong!! the correct answer is C).20\n");
            getch();
            system("cls");
            win(point * 8);

        }
        else
        {
            printf("\n            Correct!!\n");
            getch();
            system("cls");
        }
    }
    printf("\n             int num = 58;");
    printf("\n             num % = 11;\n");
    printf("\n    Que 10). What will the result of num variable after execution of the above statements?\n");
    printf("\n             A). 3                      B). 5\n");
    printf("\n             C). 8                      D). 11\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Press 0 for use life line\n");
    option = time45();
    if(option == '0')
    {
        choice = life();
        switch(choice)
        {
            case 1:
                system("cls");
                printf("\n             int num = 58;");
                printf("\n             num % = 11;\n");
                printf("\n    Que 10). What will the result of num variable after execution of the above statements?\n");
                printf("\n             A). 3                      B). 5\n");
                option = getch();
                break;
            case 2:
                system("cls");
                printf("\n    Que 10) What is the output of these operation:- (3 * 4 / 2 * (6 + 4 * 0)).?\n");
                printf("\n           A). 36                   B). 0\n");
                printf("\n           C). 30                   D). 35\n");
                option = getch();
                if(option != 'A' && option != 'a')
                {
                    printf("\n            Wrong!! the correct answer is A). 36\n");
                    scr = point * 9;
                    getch();
                    system("cls");
                    printf("\n      **************CONGRATULATION**************\n\n");
                    printf("\n                   >> You Won $%d <<\n",point * 9);
                    printf("\n      Nice dud you injoy all the Questions");
                    printf("\n      _______________________________________");
                    printf("\n      __________________________________________");
                    printf("\n      ______________________________\n");
                    printf("\n      Press any key if you want to go main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                else
                {
                    printf("\n            Correct!!\n");
                    scr = point * 10;
                    getch();
                    system("cls");
                    printf("\n      **************CONGRATULATION**************\n\n");
                    printf("\n                  >> You Won $%d <<\n",point * 10);
                    printf("\n      NICE DUD I HOPE YOU ENJOYED THIS GAME");
                    printf("\n      _____________________________________ __");
                    printf("\n      If you like this game give us your rating in star(*) 1 - 5\n");
                    scanf("%d",&rate);
                    rating(rate);
                    printf("\n      ______________________________\n");
                    printf("\n      ___________________________________\n");
                    printf("\n      Press any key for go to main menu\n");
                    getch();
                    system("cls");
                    mainMenu();
                }
                break;
            case 3:
                system("cls");
                printf("\n\n\n\n\t\t\t\tSorry Now Questions are Finished\n");
                printf("\t\t\t\tpress any key for go to again question???\n");
                getch();
                system("cls");
                printf("\n             int num = 58;");
                printf("\n             num % = 11;\n");
                printf("\n    Que 10). What will the result of num variable after execution of the above statements?\n");
                printf("\n             A). 3                      B). 5\n");
                printf("\n             C). 8                      D). 11\n");
                option = getch();
                break;
        }
    }
    if(choice != 2)
    {
        if(option != 'A' && option != 'a')
        {
            printf("\n            Wrong!! the correct answer is A).3\n");
            scr = point * 9;
            getch();
            system("cls");
            printf("\n      **************CONGRATULATION**************\n\n");
            printf("\n                   >> You Won $%d <<\n",point * 9);
            printf("\n      Nice dud you injoy all the Questions");
            printf("\n      _______________________________________");
            printf("\n      __________________________________________");
            printf("\n      ______________________________\n");
            printf("\n      Press any key if you want to go main menu\n");
            getch();
            system("cls");
            mainMenu();

        }
        else
        {
            printf("\n            Correct!!\n");
            scr = point * 10;
            getch();
            system("cls");
            printf("\n      **************CONGRATULATION**************\n\n");
            printf("\n                  >> You Won $%d <<\n",point * 10);
            printf("\n      NICE DUD I HOPE YOU ENJOYED THIS GAME");
            printf("\n      _____________________________________ __");
            printf("\n      If you like this game give us your rating in between 1 - 5\n");
            scanf("%d",&rate);
            rating(rate);
            printf("\n      ______________________________\n");
            printf("\n      ___________________________________\n");
            printf("\n      Press any key for go to main menu\n");
            getch();
            system("cls");
            mainMenu();
        }
    }
}
int levelHard()
{
    char option,stars[6];
    int point = 100;
    printf("\n   _________________________________________________________\n");
    printf("\n    Que. Write a Program to Print first N Odd natural numbers ?\n");
    printf("\n         1  int main()");
    printf("\n         2  {");
    printf("\n         3      int N,i;");
    printf("\n         4      printf(\"Enter N\\n\");");
    printf("\n         5      scanf(\"%%d\",&N);");
    printf("\n         6      for(i = 0; i <= N; i++)");
    printf("\n         7      {");
    printf("\n         8          if(i %% 2)");
    printf("\n         9          {");
    printf("\n         10             printf(\"%%d \",i);");
    printf("\n         11         }");
    printf("\n         12     }");
    printf("\n         13 }");
    printf("\n   _________________________________________________________\n");
    printf("\n    Que 1). Choose any option according to question.\n");
    printf("\n            A). Syntex error                  B). another Logic\n");
    printf("\n            C). NO! All Correct               D). Infinite Code\n");
    option = getch();
    if(option != 'B' && option != 'b')
    {
        printf("\n            Wrong!! the correct answer is B).another Logic\n");
        scr = 0;
        getch();
        system("cls");
        printf("\n      ************** BAD-LUCK **************\n\n");
        printf("\n                 >> You Won $0 <<\n");
        printf("\n      But you can try your luck again");
        printf("\n      _______________________________________");
        printf("\n      __________________________________________");
        printf("\n      ______________________________\n");
        printf("\n      Press any key if you want to go main menu\n");
        getch();
        system("cls");
        mainMenu();
    }
    else
    {
        printf("\n            Correct!!\n");
        getch();
        system("cls");
    }
    printf("\n         1  int main()");
    printf("\n         2  {");
    printf("\n         3      int i = 5;");
    printf("\n         4      if(i == 3, 4)");
    printf("\n         5        printf(\"Hai\");");
    printf("\n         6      else");
    printf("\n         7        printf(\"No Hai\");");
    printf("\n         8  }\n");
    printf("\n    Que 2). What will be the output of the above C program ?\n");
    printf("\n            A). No Hai                        B). Hai\n");
    printf("\n            C). Compilation Error             D). None of the Above\n");
    option = getch();
    if(option != 'B' && option != 'b')
    {
        printf("\n            Wrong!! the correct answer is B).Hai\n");
        getch();
        system("cls");
        win(point * 1);
        mainMenu();
    }
    else
    {
        printf("\n            Correct!!\n");
        getch();
        system("cls");
    }
    printf("\n         1  int main()");
    printf("\n         2  {");
    printf("\n         3      char *str = {\"2braces\"};");
    printf("\n         4      char *str1 = {\"2braces\"};");
    printf("\n         5      if(*str == *str1)");
    printf("\n         6        printf(\"inside if block\");");
    printf("\n         7      else");
    printf("\n         8        printf(\"inside else block\");");
    printf("\n         9  }\n");
    printf("\n    Que 3). What will be the output of the above C program ?\n");
    printf("\n            A). Runtime Error                    B). inside if block\n");
    printf("\n            C). Compilation Error                D). inside else block\n");
    option = getch();
    if(option != 'D' && option != 'd')
    {
        printf("\n            Wrong!! the correct answer is D).inside else block\n");
        getch();
        system("cls");
        win(point * 2);

    }
    else
    {
        printf("\n            Correct!!\n");
        getch();
        system("cls");
    }
    printf("\n         1  int main()");
    printf("\n         2  {");
    printf("\n         3      int i = 1;");
    printf("\n         4      switch(i)");
    printf("\n         5      {");
    printf("\n         6         case 1:");
    printf("\n         7            printf(\"Hi \");");
    printf("\n         8         default:");
    printf("\n         9            printf(\"Bye\");");
    printf("\n        10      }");
    printf("\n        11  }\n");
    printf("\n    Que 4). What will be the output of the above C program ?\n");
    printf("\n            A). Bye                   B). Hi\n");
    printf("\n            C). Hi Bye                D). Compilation Error\n");
    option = getch();
    if(option != 'C' && option != 'c')
    {
        printf("\n            Wrong!! the correct answer is C).Hi Bye\n");
        getch();
        system("cls");
        win(point * 3);

    }
    else
    {
        printf("\n            Correct!!\n");
        getch();
        system("cls");
    }
    printf("\n         1  int x = 0;");
    printf("\n         2  int main()");
    printf("\n         3  {");
    printf("\n         4      if(x == x)");
    printf("\n         5         printf(\"hai this is if\");");
    printf("\n         6      else");
    printf("\n         7         printf(\"hai this is else\");");
    printf("\n         8  }\n");
    printf("\n    Que 5). What will be the output of the above C program ?\n");
    printf("\n            A). hai this is if             B). hai this is else\n");
    printf("\n            C). prints nothing             D). Compile Time Error\n");
    option = getch();
    if(option != 'A' && option != 'a')
    {
        printf("\n            Wrong!! the correct answer is A).hai this is if\n");
        getch();
        system("cls");
        win(point * 4);

    }
    else
    {
        printf("\n            Correct!!\n");
        getch();
        system("cls");
    }
    printf("\n         1  int x = -1;");
    printf("\n         2  int main()");
    printf("\n         3  {");
    printf("\n         4      while(x++ == 1)");
    printf("\n         5         printf(\"loop\");");
    printf("\n         6  }\n");
    printf("\n    Que 6). What will be the output of the above C program ?\n");
    printf("\n            A). loop                     B). loop loop loop \n");
    printf("\n            C). prints nothing           D). loop loop\n");
    option = getch();
    if(option != 'C' && option != 'c')
    {
        printf("\n            Wrong!! the correct answer is C).prints nothing\n");
        getch();
        system("cls");
        win(point * 5);

    }
    else
    {
        printf("\n            Correct!!\n");
        getch();
        system("cls");
    }
    printf("\n         1  int main()");
    printf("\n         2  {");
    printf("\n         3      int i = 5;");
    printf("\n         4      while(--i > 0)");
    printf("\n         5         printf(\"Loop \");");
    printf("\n         6  }\n");
    printf("\n    Que 7). What will be the output of the above C program ?\n");
    printf("\n            A). Loop Loop Loop                         B). Loop Loop Loop Loop Loop \n");
    printf("\n            C). Loop Loop Loop Loop Loop Loop          D). Loop Loop Loop Loop\n");
    option = getch();
    if(option != 'D' && option != 'd')
    {
        printf("\n            Wrong!! the correct answer is D).Loop Loop Loop Loop\n");
        getch();
        system("cls");
        win(point * 6);

    }
    else
    {
        printf("\n            Correct!!\n");
        getch();
        system("cls");
    }
    printf("\n         1  int main()");
    printf("\n         2  {");
    printf("\n         3      int i = 0;");
    printf("\n         4      while(i < 4, 5)");
    printf("\n         5      {");
    printf("\n         6           printf(\"Loop \");");
    printf("\n         7           i++;");
    printf("\n         8      }");
    printf("\n         9  }\n");
    printf("\n    Que 8). What will be the output of the above C program ?\n");
    printf("\n            A). Loop Loop Loop Loop                  B). Infinite Loop\n");
    printf("\n            C). Loop Loop Loop Loop Loop             D). Prints Nothing\n");
    option = getch();
    if(option != 'B' && option != 'b')
    {
        printf("\n            Wrong!! the correct answer is B).Infinite Loop\n");
        getch();
        system("cls");
        win(point * 7);

    }
    else
    {
        printf("\n            Correct!!\n");
        getch();
        system("cls");
    }
    printf("\n         1  int main()");
    printf("\n         2  {");
    printf("\n         3      int i");
    printf("\n         4      if(true)");
    printf("\n         5          printf(\"This will work\");");
    printf("\n         6      else");
    printf("\n         7          printf(\"This will not work\");");
    printf("\n         8  }\n");
    printf("\n    Que 9). What will be the output of the above C program ?\n");
    printf("\n            A). This will work                  B). This will not work\n");
    printf("\n            C). Runtime Error                   D). Compilation Error\n");
    option = getch();
    if(option != 'A' && option != 'a')
    {
        printf("\n            Wrong!! the correct answer is A).This will work\n");
        getch();
        system("cls");
        win(point * 8);

    }
    else
    {
        printf("\n            Correct!!\n");
        getch();
        system("cls");
    }
    printf("\n         1  int main()");
    printf("\n         2  {");
    printf("\n         3      int i = 2");
    printf("\n         4      if(i == (1, 2))");
    printf("\n         5          printf(\"Hai\");");
    printf("\n         6      else");
    printf("\n         7          printf(\"No Hai\");");
    printf("\n         8  }\n");
    printf("\n    Que 10). What will be the output of the above C program ?\n");
    printf("\n             A). Compilation Error                  B). No Hai\n");
    printf("\n             C). Runtime Error                      D). Hai\n");
    option = getch();
    if(option != 'D' && option != 'd')
    {
        printf("\n            Wrong!! the correct answer is D).Hai\n");
        scr = point * 9;
        getch();
        system("cls");
        printf("\n      **************CONGRATULATION**************\n\n");
        printf("\n                   >> You Won $%d <<\n",point * 9);
        printf("\n      Nice dud you injoy all the Questions");
        printf("\n      _______________________________________");
        printf("\n      __________________________________________");
        printf("\n      ______________________________\n");
        printf("\n      Press any key if you want to go main menu\n");
        getch();
        mainMenu();

    }
    else
    {
        printf("\n            Correct!!\n");
        scr = point * 10;
        getch();
        system("cls");
        printf("\n      **************CONGRATULATION**************\n\n");
        printf("\n                  >> You Won $%d <<\n",point * 10);
        printf("\n      NICE DUD I HOPE YOU ENJOYED THIS GAME");
        printf("\n      _____________________________________ __");
        printf("\n      If you like this game give us your rating between 1 - 5\n");
        scanf("%d",&rate);
        rating(rate);
        printf("\n      ______________________________\n");
        printf("\n      ___________________________________\n");
        printf("\n      Press any key for go to main menu\n");
        getch();
        system("cls");
        mainMenu();
    }
}
int win(int point)
{
    scr = point;
    system("cls");
    printf("\n      **************CONGRATULATION**************\n\n");
    printf("\n                  >> You Won $%d <<\n",point);
    printf("\n      But you could not enjoy all the Questions");
    printf("\n      _______________________________________");
    printf("\n      __________________________________________");
    printf("\n      ______________________________\n");
    printf("\n      Press any key if you want to go main menu\n");
    getch();
    system("cls");
    mainMenu();
}
char time30()
{
    int sec = 30;
    char c;
    while (sec > 0)
    {
        if(kbhit())
        {
            return getch();
        }
        printf ("                                                                                      countdown: %2d\r", sec);
        sleep (1);
        sec--;
    }
    if(sec == 0)
    {
        timeUp();
    }
}
char time45()
{
    int sec = 45;
    char c;
    while (sec > 0)
    {
        if(kbhit())
        {
            return getch();
        }
        printf ("                                                                                      countdown: %2d\r", sec);
        sleep (1);
        sec--;
    }
    if(sec == 0)
    {
        timeUp();
    }
}
int life()
{
    int choice;
    system("cls");
    printf("\n\n\n\t\t***** 1. Options 50-50   *****");
    printf("\n\t\t***** 2. Question Change *****");
    printf("\n\t\t***** 3. Skip Question *****\n\n");
    printf("\t\t________________________________________________\n");
    printf("\t\tBe Careful Your Choosen Option Not Available for Next Coming Questions\n");
    printf("\t\t_____________________________________\n");
    printf("\t\t______________________________\n");
    printf("\n\t\tPress Which life-line You want to use\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            if(flag1 == 1)
            {
                printf("\n\n\t\t>> Sorry you are used this life-line in previous any Question\n");
                printf("\n\t\t>> So Choose any remaining life-line\n");
                printf("\n\t\t>> Press Enter for go life line again\n");
                getch();
                return life();
            }
            else
            {
                flag1++;
                return choice;
            }
            break;
        case 2:
            if(flag2 == 1)
            {
                printf("\n\n\t\t>> Sorry you are used this life-line in previous any Question\n");
                printf("\n\t\t>> So Choose any remaining life-line\n");
                printf("\n\t\t>> Press Enter for go life line again\n");
                getch();
                return life();
            }
            else
            {
                flag2++;
                return choice;
            }
            break;
        case 3:
            if(flag3 == 1)
            {
                printf("\n\n\t\t>> Sorry you are used this life-line in previous any Question\n");
                printf("\n\t\t>> So Choose any remaining life-line\n");
                printf("\n\t\t>> Press Enter for go life line again\n");
                getch();
                return life();
            }
            else
            {
                flag3++;
                return choice;
            }
            break;
    }
}
int rating(int rate)
{
    sumStar = sumStar + rate;
}
int score()
{
    printf("\n\n     HELLO DEAR I Know you are excited to make highest SCORE\n");
    printf("\n     in this game but for it you have to cross the current highscore\n");
    printf("\n         _______________________________________");
    printf("\n          *** Current Highest Score is :- %d ***\n",scr);
    printf("         _______________________________________\n\n");
    printf("\n     Guys Remember that the limited score is &1000 \"OK\"");
    printf("\n\n\n\n                 >>> SO BEST OF LUCK <<<\n");
    getch();
    system("cls");
    mainMenu();
}
int timeUp()
{
    system("cls");
    printf("\n\n      ************** TIME UP! **************");
    printf("\n      ************** BAD-LUCK **************\n\n");
    printf("\n      But you can try your luck again");
    printf("\n      _______________________________________");
    printf("\n      __________________________________________");
    printf("\n      ______________________________\n");
    printf("\n      Press any key if you want to go main menu\n");
    getch();
    system("cls");
    mainMenu();
}
int mainMenu()
{
    system("cls");
    int option;
    printf("\n\n                             C PROGRAM QUIZ GAME");
    printf("\n                             ________________________________");
    printf("\n                             KAUN BANEGA CODER(\"KBC\")");
    printf("\n                             __________________________");
    printf("\n                                     WEL-COME");
    printf("\n                                        TO");
    printf("\n                                     THE GAME");
    printf("\n                             ________________________________");
    printf("\n                             ___________________ _______ ____ _");
    printf("\n                             BECOME A PROFESSIONAL IN CODING!!!!!!!!!!!");
    printf("\n                             ________________________________");
    printf("\n                             _______________________________");
    printf("\n                             > Press S to start the game.");
    printf("\n                             > Press V to view the highest score.");
    printf("\n                             > Press D for details of this game.");
    printf("\n                             > Press Q to quit.");
    printf("\n                             > Press H for Help.");
    printf("\n                             __________________________ __ _\n");
    flag1 = 0;
    flag2 = 0;
    flag3 = 0;
    option = getch();
    options(option);
}
