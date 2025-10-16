// gr2_PP_lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*
zadanie 1. printf
int main()
{
    printf("XXXXXXX      XXXXXXX     \n");
    printf("XX    XX     XX    XX    \n");
    printf("XX     XX    XX     XX   \n");
    printf("XX    XX     XX    XX    \n");
    printf("XXXXXX       XXXXXXXX    \n");
    printf("XX   XX      XX      XX  \n");
    printf("XX    XX     XX      XX  \n");
    printf("XX     XX    XXXXXXXX    \n");
    return 0;
}*/

/*
//zadanie 1 cout
int main()
{
    cout << "XXXXXXX      XXXXXXX     \n";
    cout << "XX    XX     XX    XX    \n";
    cout << "XX     XX    XX     XX   \n";
    cout << "XX    XX     XX    XX    \n";
    cout << "XXXXXX       XXXXXXXX    \n";
    cout << "XX   XX      XX      XX  \n";
    cout << "XX    XX     XX      XX  \n";
    cout << "XX     XX    XXXXXXXX    \n";
    return 0;
}
//Zadanie 2
int main() {
    printf("               *               \n");
    printf("              ***              \n");
    printf("             *****             \n");
    printf("    ***********************    \n");
    printf("      *******************      \n");
    printf("        ***************        \n");
    printf("         *************          \n");
    printf("        ***************        \n");
    printf("       *****        *****      \n");
    printf("      ***              ***     \n");

    return 0;
}*/

//zadanie 2 cout
/*
int main() {
    cout << "               *               \n";
    cout << "              ***              \n";
    cout << "             *****             \n";
    cout << "    ***********************    \n";
    cout << "      *******************      \n";
    cout << "        ***************        \n";
    cout << "         *************          \n";
    cout << "        ***************        \n";
    cout << "       *****       *****      \n";
    cout << "      ***             ***     \n";

    return 0;
}*/

//zadanie 3 printf
/*int main() {
    printf("     Lista obecnosci             \n");
    printf("nr  |     imie     |     nazwisko\n");
    printf("1   |   Radoslaw   |     Balinski\n");
    printf("2   |    Tomasz    |     Iksinski\n");
    printf("3   |     Anna     |     Igrekowa\n");

    return 0;
}*/

//cout
/*int main() {
    cout << "     Lista obecnosci             \n";
    cout << "nr  |     imie     |     nazwisko\n";
    cout << "1   |   Radoslaw   |     Balinski\n";
    cout << "2   |    Tomasz    |     Iksinski\n";
    cout << "3   |     Anna     |     Igrekowa\n";

    return 0;
}*/

//zadanie 4
//printf scanf

/*int main() {
    int a, b, c, d;
    printf("Wprowadz a: ");
    scanf_s("%d", &a);
    printf("\nWprowadz b: ");
    scanf_s("%d", &b);
    
    c = a * b;
    d = a + b;

    printf("\nWynik dodawania: %d, wynik mnozenia: %d\n", d, c);

    return 0;
}*/

//cout cin

/*int main() {
    int a, b, c, d;
    cout<<"Wprowadz a: ";
    cin >> a;
    cout<<"\nWprowadz b: ";
    cin >> b;

    c = a * b;
    d = a + b;

    cout << "\nWynik dodawania: " << d << ", wynik mnozenia: " << c;

    return 0;
}*/

//zadanie 5

//printf scanf

/*#include <stdio.h>
int main() {
    int f, c;
    printf("Wprowadz dowolna temperature w stopniach Fahrenheita: ");
    scanf_s("%d", &f);
    c = 5 * (f - 32) / 9;
    printf("\n%d stopni Fahrenheita to %d stopni Celsjusza", f, c);

    return 0;
}*/

//cout cin

#include <stdio.h>
int main() {
    int f, c;
    cout << "Wprowadz dowolna temperature w stopniach Fahrenheita: ";
    cin >> f;
    c = 5 * (f - 32) / 9;
    cout << endl << f << " stopni Fahrenheita to " << c << " stopni Celsjusza";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
