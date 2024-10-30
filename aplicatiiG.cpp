#include <iostream>
#include <stdio.h>
using namespace std;
void Line(int lf, int in, int mij, int rt, int operand=2)
{
    int i;
    printf("\n%c", lf);
    for (int k=1; k<=operand; k++) {
        for (i=1; i<=3; i++) printf("%c", in);
        printf("%c", mij);
    }
    for (i=1; i<=10; i++) printf("%c", in);
    printf("%c", rt);
}
void setComplement()
{
    Line(201, 205, 209, 187, 1);
    printf("\n%c A %c not A %4c", 186, 179, 186);
    Line(199, 196, 197, 182, 1);
    for (int a=0; a<=1; a++)
        printf("\n%c %d %c %4d %5c", 186, a, 179, !a, 186);
    Line(200, 205, 207, 188, 1);
}
void setConjunction()
{
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c A and B %2c", 186, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (int a=0; a<=1; a++)
        for (int b=0; b<=1; b++)
            printf("\n%c %d %c %d %c %4d %5c", 186, a, 179, b, 179, a&&b, 186);
    Line(200, 205, 207, 188);
}
void setDisjunction()
{
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c A or B %3c", 186, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (int a=0; a<=1; a++)
        for (int b=0; b<=1; b++)
            printf("\n%c %d %c %d %c %4d %5c", 186, a, 179, b, 179, a||b, 186);
    Line(200, 205, 207, 188);
}
void setXor()
{
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c A xor B %2c", 186, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (int a=0; a<=1; a++)
        for (int b=0; b<=1; b++)
            printf("\n%c %d %c %d %c %4d %5c", 186, a, 179, b, 179, a xor b, 186);
    Line(200, 205, 207, 188);
}
void setNand()
{
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c A nand B %c", 186, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (int a=0; a<=1; a++)
        for (int b=0; b<=1; b++)
            printf("\n%c %d %c %d %c %4d %5c", 186, a, 179, b, 179, !(a && b), 186);
    Line(200, 205, 207, 188);
}
void setNor()
{
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c A nor B %2c", 186, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (int a=0; a<=1; a++)
        for (int b=0; b<=1; b++)
            printf("\n%c %d %c %d %c %4d %5c", 186, a, 179, b, 179, !(a || b), 186);
    Line(200, 205, 207, 188);
}
void setImplication()
{
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c  A -> B %2c", 186, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (int a=0; a<=1; a++)
        for (int b=0; b<=1; b++)
            printf("\n%c %d %c %d %c %4d %5c", 186, a, 179, b, 179, !a || b, 186);
    Line(200, 205, 207, 188);
}
void setEquivalence()
{
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c A <-> B %2c", 186, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (int a=0; a<=1; a++)
        for (int b=0; b<=1; b++)
            printf("\n%c %d %c %d %c %4d %5c", 186, a, 179, b, 179, !(a xor b), 186);
    Line(200, 205, 207, 188);
}
void setDifference()
{
    Line(201, 205, 209, 187);
    printf("\n%c A %c B %c A <-> B %2c", 186, 179, 179, 186);
    Line(199, 196, 197, 182);
    for (int a=0; a<=1; a++)
        for (int b=0; b<=1; b++)
            printf("\n%c %d %c %d %c %4d %5c", 186, a, 179, b, 179, a && !b, 186);
    Line(200, 205, 207, 188);
}
void setSimpleProblem()
{
    Line(201, 205, 209, 187, 3);
    printf("\n%c A %c B %c C %c    Y %5c", 186, 179, 179, 179, 186);
    Line(199, 196, 197, 182, 3);
    for (int a=0; a<=1; a++)
        for (int b=0; b<=1; b++)
            for (int c=0; c<=1; c++)
                printf("\n%c %d %c %d %c %d %c %4d %5c", 186, a, 179, b, 179, c, 179, (a && b) || (a && !b && c), 186);
    Line(200, 205, 207, 188, 3);
}
void setComplexProblem()
{
    Line(201, 205, 209, 187, 5);
    printf("\n%c A %c B %c C %c D %c E %c    Y %5c", 186, 179, 179, 179, 179, 179, 186);
    Line(199, 196, 197, 182, 5);
    for (int a=0; a<=1; a++)
        for (int b=0; b<=1; b++)
            for (int c=0; c<=1; c++)
                for (int d=0; d<=1; d++)
                    for (int e=0; e<=1; e++)
                        printf("\n%c %d %c %d %c %d %c %d %c %d %c %4d %5c", 186, a, 179, b, 179, c, 179, d, 179, e, 179, (a && b) || (c && d) && !(a && d) && !e && (b xor c), 186);
    Line(200, 205, 207, 188, 5);
}
int main()
{
    system("color F0");
    cout<<"Proiect nr. 1, elaborat de G.M."<<endl;
    cout<<"\tTema: Operatii cu multimi"<<endl;
    cout<<"\n\t1. Complement";
    setComplement();
    cout<<"\n\t2. Conjunctie";
    setConjunction();
    cout<<"\n\t3. Disjunctie";
    setDisjunction();
    cout<<"\n\t4. Diferenta simetrica";
    setXor();
    cout<<"\n\t5. Conectorul Shiferd";
    setNand();
    cout<<"\n\t6. Conectorul Pierce";
    setNor();
    cout<<"\n\t7. Implicatia";
    setImplication();
    cout<<"\n\t8. Echivalenta";
    setEquivalence();
    cout<<"\n\t9. Diferenta";
    setDifference();
    cout<<"\n\t10.Problema simpla";
    cout<<"\n\nUn birou dispune de un sistem de control care deschide angajatilor usile in functie de trei factori A, B si C:";
    cout<<"\n\tA - angajatul are un permis de intrare valabil";
    cout<<"\n\tB - timpul de intrare este intre 9:00 si 18:00 (orele de lucru)";
    cout<<"\n\tC - angajatul are un nivel de acces special";
    cout<<"\n\nConditii:";
    cout<<"\n\t1. Daca angajatul are permis valabil si intra in timpul orelor de lucru, usile se vor deschide chiar daca nu exista un nivel de acces special.";
    cout<<"\n\t2. Daca angajatul nu are un permis valabil, usile nu se vor deschide, indiferent de celelalte conditii.";
    cout<<"\n\t3. In afara orelor de lucru, usile se deschid doar pentru angajatii care poseda permis valabil si un nivel de acces special.";
    cout<<"\n\n\n\tY = (A and B) or (A and (not B) and C)\n";
    setSimpleProblem();
    cout<<"\n\t11. Problema complexa";
    cout<<"\n\nSa presupunem ca aveti un sistem de alarma intr-o zona protejata cu cinci senzori: A, B, C, D si E. ";
    cout<<"Fiecare senzor raspunde la anumite conditii, iar raspunsul lor determina daca alarma generala va suna.";
    cout<<"\nConditiile de functionare a sistemului sunt urmatoarele:\n";
    cout<<"\n\t1. Daca senzorii A si B sunt activati, alarma va suna.";
    cout<<"\n\t2. Daca senzorul C este activat, alarma va suna numai in cazul, cand este activat senzorul D.";
    cout<<"\n\t3. Senzorii A si D nu pot functiona in acelasi timp.";
    cout<<"\n\t4. Daca a fost activat senzorul E, alarma nu va suna chiar daca vor fi activati ceilalti senzori.";
    cout<<"\n\t5. Trebuie activat unul dintre senzorii B sau C.";
    cout<<"\n\n\n\tY = (A and B) or (C and D) and not(A and D) and (not E) and (B xor C)\n";
    setComplexProblem();
    return 0;
}
