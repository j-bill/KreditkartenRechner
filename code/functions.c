/*
#	KreditkartenRechner
#   functions.c
#	Copyright (c) 2019 j-bill
#   github.com/j-bill
#	This file is part of "KreditkartenRechner" which is released under the MIT license.
*/

int iin(char* kkn)
{
    char prefixString[7]="";
    int prefixInt;
    int i = 0;

    for(i = 0; i < 6; i++)
    {
        prefixString[i] = kkn[i];
    }
    prefixString[i] = '\0';

    prefixInt = atoi(prefixString);

    if ((prefixInt >= 340000 && prefixInt <= 349999) || (prefixInt >= 370000 && prefixInt <= 379999))
        return 1; //American Express
    if (prefixInt >= 300000 && prefixInt <= 305999)
        return 2; //Diners Club Carte Blanche
    if (prefixInt >= 360000 && prefixInt <= 369999)
        return 3; //Diners Club International
    if (prefixInt >= 540000 && prefixInt <= 559999)
        return 4; //Diners Club United States and Canada ODER Master Card (teilen sich bereiche wo die nummern anfangen)
    if ((prefixInt >= 601100 && prefixInt <= 601199) || (prefixInt >= 622126 && prefixInt <= 622925) || (prefixInt >= 644000 && prefixInt <= 649999) || (prefixInt >= 650000 && prefixInt <= 659999))
        return 5; //Discover Card
    if (prefixInt >= 637000 && prefixInt <= 639999)
        return 6; //InstaPayment
    if (prefixInt >= 352800 && prefixInt <= 358999)
        return 7; //JCB
    if ((prefixInt >= 501800 && prefixInt <= 501899)||(prefixInt >= 502000 && prefixInt <= 502099)||(prefixInt >= 503800 && prefixInt <= 503899)||(prefixInt >= 630400 && prefixInt <= 630499)||(prefixInt >= 675900 && prefixInt <= 675999)||(prefixInt >= 676100 && prefixInt <= 676199)||(prefixInt >= 676300 && prefixInt <= 676399))
        return 8; //Maestro
    if (prefixInt >= 510000 && prefixInt <= 559999)
        return 9; //MasterCard
    if ((prefixInt >= 633400 && prefixInt <= 633499) || (prefixInt >= 676700 && prefixInt <= 676799))
        return 10; //Solo
    if ((prefixInt >= 490300 && prefixInt <= 490399) || (prefixInt >= 490500 && prefixInt <= 490599) || (prefixInt >= 491100 && prefixInt <= 491199) || (prefixInt >= 493600 && prefixInt <= 493699) || (prefixInt == 564182) || (prefixInt == 633110) || (prefixInt >= 633300 && prefixInt <= 633399) || (prefixInt >= 675900 && prefixInt <= 675999))
        return 11; //Switch
    if (prefixInt >= 400000 && prefixInt <= 499999)
        return 12; //Visa

    return 0;
}

int kknPrf(char* kkn)
{
    int i = 0;

    while (kkn[i])
    {
        if (isalpha(kkn[i]))
        {
            printf("\nFehler: Die eingegebene Kreditkartennummer enth\204lt Buchstabe/n, dies ist nicht erlaubt.");
            printf("\n\nTaste dr\201cken um neu einzugeben.");
            getch();
            return 0;
        }
        i++;
    }

    int laengeSwitch = iin(kkn);
    int laengeMin = 0;
    int laengeMax = 0;
    int laenge1 = 0;
    int laenge2 = 0;
    int laenge3 = 0;

    switch (laengeSwitch)
    {
    case 1:
        laenge1 = 15;
        break;
    case 2: case 3:
        laenge1 = 14;
        break;
    case 4: case 5: case 6: case 7: case 9: case 12:
        laenge1 = 16;
        break;
    case 8:
        laengeMin = 12;
        laengeMax = 19;
        break;
    case 10: case 11:
        laenge1 = 16;
        laenge2 = 18;
        laenge3 = 19;
        break;
    default:
        system("@cls||clear");
        printf("\nDieses Kreditkarten Institut ist nicht errechenbar.\n\nTaste dr\201cken um fortzufahren");
        getch();
        return 0;
    }

    if (strlen(kkn) == laenge1 || strlen(kkn) == laenge2 || strlen(kkn) == laenge3 || (strlen(kkn) >= laengeMin && strlen(kkn) <= laengeMax))
    {
        return 1;
    }

    system("@cls||clear");
    printf("Die angegebene Kreditkartennummer ist zu kurz.\nBitte erneut eingeben.\n\nTaste dr\201cken um fortzufahren");
    getch();
    return 0;
}
