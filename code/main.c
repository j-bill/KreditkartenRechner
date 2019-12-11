/*
#	KreditkartenRechner
#   main.c
#	Copyright (c) 2019 j-bill
#   github.com/j-bill
#	This file is part of "KreditkartenRechner" which is released under the MIT license.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "functions.c"

int main()

{
    char kkn[20] = "";
    char hersteller[60] = "";
    int kknOK = 0;
    int summe = 0;
    int origPZ = 0;
    int actualPZ = 0;

    while (kknOK == 0)
    {
        system("@cls||clear");
        printf("Program zur \232berpr\201fung einer Kreditkarten Nummer.");
        printf("\nBitte geben Sie die zu pr\201fende Kreditkartennummer ein: ");
        gets(kkn);
        kknOK = kknPrf(kkn);
    }

    char s1[2]="";
    char s2[2]="";
    char s3[2]="";
    char s4[2]="";
    char s5[2]="";
    char s6[2]="";
    char s7[2]="";
    char s8[2]="";
    char s9[2]="";
    char s10[2]="";
    char s11[2]="";
    char s12[2]="";
    char s13[2]="";
    char s14[2]="";
    char s15[2]="";
    char s16[2]="";
    char s17[2]="";
    char s18[2]="";
    char s19[2]="";

    s1[0] = kkn[0];
    s1[1] = '\0';
    s2[0] = kkn[1];
    s2[1] = '\0';
    s3[0] = kkn[2];
    s3[1] = '\0';
    s4[0] = kkn[3];
    s4[1] = '\0';
    s5[0] = kkn[4];
    s5[1] = '\0';
    s6[0] = kkn[5];
    s6[1] = '\0';
    s7[0] = kkn[6];
    s7[1] = '\0';
    s8[0] = kkn[7];
    s8[1] = '\0';
    s9[0] = kkn[8];
    s9[1] = '\0';
    s10[0] = kkn[9];
    s10[1] = '\0';
    s11[0] = kkn[10];
    s11[1] = '\0';
    s12[0] = kkn[11];
    s12[1] = '\0';
    s13[0] = kkn[12];
    s13[1] = '\0';
    s14[0] = kkn[13];
    s14[1] = '\0';
    s15[0] = kkn[14];
    s15[1] = '\0';
    s16[0] = kkn[15];
    s16[1] = '\0';
    s17[0] = kkn[16];
    s17[1] = '\0';
    s18[0] = kkn[17];
    s18[1] = '\0';
    s19[0] = kkn[18];
    s19[1] = '\0';

    int z1 = atoi(s1);
    int z2 = atoi(s2);
    int z3 = atoi(s3);
    int z4 = atoi(s4);
    int z5 = atoi(s5);
    int z6 = atoi(s6);
    int z7 = atoi(s7);
    int z8 = atoi(s8);
    int z9 = atoi(s9);
    int z10 = atoi(s10);
    int z11 = atoi(s11);
    int z12 = atoi(s12);
    int z13 = atoi(s13);
    int z14 = atoi(s14);
    int z15 = atoi(s15);
    int z16 = atoi(s16);
    int z17 = atoi(s17);
    int z18 = atoi(s18);
    int z19 = atoi(s19);

    if (strlen(kkn) == 19)
    {
        origPZ = z19;
        z18 = (2*z18)%10+(2*z18/10);
        z16 = (2*z16)%10+(2*z16/10);
        z14 = (2*z14)%10+(2*z14/10);
        z12 = (2*z12)%10+(2*z12/10);
        z10 = (2*z10)%10+(2*z10/10);
        z8 = (2*z8)%10+(2*z8/10);
        z6 = (2*z6)%10+(2*z6/10);
        z4 = (2*z4)%10+(2*z4/10);
        z2 = (2*z2)%10+(2*z2/10);
        summe = z1+z2+z3+z4+z5+z6+z7+z8+z9+z10+z11+z12+z13+z14+z15+z16+z17+z18;
        summe %= 10;
        actualPZ = 10-summe;
    }
    if (strlen(kkn) == 18)
    {
        origPZ = z18;
        z17 = (2*z17)%10+(2*z17/10);
        z15 = (2*z15)%10+(2*z15/10);
        z13 = (2*z13)%10+(2*z13/10);
        z11 = (2*z11)%10+(2*z11/10);
        z9 = (2*z9)%10+(2*z9/10);
        z7 = (2*z7)%10+(2*z7/10);
        z5 = (2*z5)%10+(2*z5/10);
        z3 = (2*z3)%10+(2*z3/10);
        z1 = (2*z1)%10+(2*z1/10);
        summe = z1+z2+z3+z4+z5+z6+z7+z8+z9+z10+z11+z12+z13+z14+z15+z16+z17;
        summe %= 10;
        actualPZ = 10-summe;
    }
    if (strlen(kkn) == 17)
    {
        origPZ = z17;
        z16 = (2*z16)%10+(2*z16/10);
        z14 = (2*z14)%10+(2*z14/10);
        z12 = (2*z12)%10+(2*z12/10);
        z10 = (2*z10)%10+(2*z10/10);
        z8 = (2*z8)%10+(2*z8/10);
        z6 = (2*z6)%10+(2*z6/10);
        z4 = (2*z4)%10+(2*z4/10);
        z2 = (2*z2)%10+(2*z2/10);
        summe = z1+z2+z3+z4+z5+z6+z7+z8+z9+z10+z11+z12+z13+z14+z15+z16;
        summe %= 10;
        actualPZ = 10-summe;
    }
    if (strlen(kkn) == 16)
    {
        origPZ = z16;
        z15 = (2*z15)%10+(2*z15/10);
        z13 = (2*z13)%10+(2*z13/10);
        z11 = (2*z11)%10+(2*z11/10);
        z9 = (2*z9)%10+(2*z9/10);
        z7 = (2*z7)%10+(2*z7/10);
        z5 = (2*z5)%10+(2*z5/10);
        z3 = (2*z3)%10+(2*z3/10);
        z1 = (2*z1)%10+(2*z1/10);
        summe = z1+z2+z3+z4+z5+z6+z7+z8+z9+z10+z11+z12+z13+z14+z15;
        summe %= 10;
        actualPZ = 10-summe;
    }
    if (strlen(kkn) == 15)
    {
        origPZ = z15;
        z14 = (2*z14)%10+(2*z14/10);
        z12 = (2*z12)%10+(2*z12/10);
        z10 = (2*z10)%10+(2*z10/10);
        z8 = (2*z8)%10+(2*z8/10);
        z6 = (2*z6)%10+(2*z6/10);
        z4 = (2*z4)%10+(2*z4/10);
        z2 = (2*z2)%10+(2*z2/10);
        summe = z1+z2+z3+z4+z5+z6+z7+z8+z9+z10+z11+z12+z13+z14;
        summe %= 10;
        actualPZ = 10-summe;
    }
    if (strlen(kkn) == 14)
    {
        origPZ = z14;
        z13 = (2*z13)%10+(2*z13/10);
        z11 = (2*z11)%10+(2*z11/10);
        z9 = (2*z9)%10+(2*z9/10);
        z7 = (2*z7)%10+(2*z7/10);
        z5 = (2*z5)%10+(2*z5/10);
        z3 = (2*z3)%10+(2*z3/10);
        z1 = (2*z1)%10+(2*z1/10);
        summe = z1+z2+z3+z4+z5+z6+z7+z8+z9+z10+z11+z12+z13;
        summe %= 10;
        actualPZ = 10-summe;
    }
    if (strlen(kkn) == 13)
    {
        origPZ = z13;
        z12 = (2*z12)%10+(2*z12/10);
        z10 = (2*z10)%10+(2*z10/10);
        z8 = (2*z8)%10+(2*z8/10);
        z6 = (2*z6)%10+(2*z6/10);
        z4 = (2*z4)%10+(2*z4/10);
        z2 = (2*z2)%10+(2*z2/10);
        summe = z1+z2+z3+z4+z5+z6+z7+z8+z9+z10+z11+z12;
        summe %= 10;
        actualPZ = 10-summe;
    }
    if (strlen(kkn) == 12)
    {
        origPZ = z12;
        z11 = (2*z11)%10+(2*z11/10);
        z9 = (2*z9)%10+(2*z9/10);
        z7 = (2*z7)%10+(2*z7/10);
        z5 = (2*z5)%10+(2*z5/10);
        z3 = (2*z3)%10+(2*z3/10);
        z1 = (2*z1)%10+(2*z1/10);
        summe = z1+z2+z3+z4+z5+z6+z7+z8+z9+z10+z11;
        summe %= 10;
        actualPZ = 10-summe;
    }

    if (actualPZ == 10)
    {
        actualPZ = 0;
    }

    switch(iin(kkn))
    {
    case 1:
            strcpy(hersteller, "American Express"); break;
    case 2:
            strcpy(hersteller, "Diners Club Carte Blanche"); break;
    case 3:
            strcpy(hersteller, "Diners Club International"); break;
    case 4:
            strcpy(hersteller, "Diners Club United States and Canada ODER Master Card"); break;
    case 5:
            strcpy(hersteller, "Discover Card"); break;
    case 6:
            strcpy(hersteller, "InstaPayment"); break;
    case 7:
            strcpy(hersteller, "JCB"); break;
    case 8:
            strcpy(hersteller, "Maestro"); break;
    case 9:
            strcpy(hersteller, "Diners Club United States and Canada ODER Master Card"); break;
    case 10:
            strcpy(hersteller, "Solo"); break;
    case 11:
            strcpy(hersteller, "Switch"); break;
    case 12:
            strcpy(hersteller, "Visa"); break;
    }

    printf("\nEingegebene Kreditkartennummer: %s", kkn);
    printf("\nKreditkarten Institut: %s", hersteller);
    printf("\nEingegebene Pr\201fziffer: %i", origPZ);
    printf("\nErrechnete Pr\201fziffer: %i", actualPZ);

    if (actualPZ == origPZ)
    {
        printf("\n\nDie errechnete Pr\201fziffer stimmt mit der eingegebenen Pr\201fziffer \201berein.");
        return 0;
    }
    else //sonst
    {
        printf("\n\nFehler: Die errechnete Pr\201fziffer stimmt nicht mit der eingegebenen Pr\201fziffer \201berein.");
        return -1;
    }
}
