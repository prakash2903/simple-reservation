#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#define ENTER 13
#define TAB 9
#define BCKSPC 8

struct user{
	char fullName[50];
	char email[50];
	char password[50];
	char username[50];
	char phone[50];
};

void takeinput(char ch[50])
{
	fgets(ch,50,stdin);
	ch[strlen(ch) - 1] = 0;
}

char generateUsername(char email[50],char username[50])
{
	for(int i=0;i<strlen(email);i++)                 //abc123@gmail.com
    {
		if(email[i] == '@')
        break;

		else username[i] = email[i];
	}
}

void takepassword(char pwd[50])
{
	int i;
	char ch;
	while(1)
    {
		ch = getch();
		if(ch == ENTER || ch == TAB)
		{
		    pwd[i] = '\0';
			break;
		}
        else if(ch == BCKSPC)
        {
			if(i>0)
			{
				i--;
				printf("\b \b");
			}
		}
        else
            {
			pwd[i++] = ch;
			printf("* \b");
            }
        }
}

//************************************************FUNCTIONS USED**********************************************************************************************

void reservation();
void viewdetails();
void holiday();
void reglog();
void listofships();
void tendays();
void sixdays();
void threedays();
void eightdays();
void med();
void panama();
void canary();
void atlantic();
void america();
void pacific();
void cnc();
void end();
//==============================================================================================================================================================================
int main()

{
    system("cls");
    system("color 0E");
    printf("\n\n\n\n ");
	printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("\t\t\t\t*                   WELCOME TO                    *\n");
	printf("\t\t\t\t*                                                 *\n");
	printf("\t\t\t\t*            <<< CRUISE FANTASIES >>>             *\n");
	printf("\t\t\t\t*                                                 *\n");
	printf("\t\t\t\t*           Where the Journey BEGINS !!!          *\n");
	printf("\t\t\t\t*      To the world of an Incredible Vacation.    *\n");
	printf("\t\t\t\t*                                                 *\n");
	printf("\t\t\t\t*                                                 *\n");
	printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * *\n");



	printf("\t\t\t\t\n\n PRESS ANY KEY TO CONTINUE...");

	getch();
    system("cls");
    reglog();

    int menu_choice,choice_return;

	start:
	system("cls");
	system("color 0F");

	printf("\n   \t\t\t\t\t\t  Hello Hodophile!\n  \t\tExperience the free-style cruising with us and grab your offer before the fantasy deal ends!  ");

	printf("\n\n\n\n\t\t 1 >>>   BOOK A PASS :)");
	printf("\n\n\t\t---------------------------------------");
	printf("\n\n\t\t 2 >>>   CRUISE DEALS INSIDE ASIA");
	printf("\n\n\t\t---------------------------------------");
	printf("\n\n\t\t 3 >>>   EXPLORE ALL HOLIDAY PACKAGES");
	printf("\n\n\t\t---------------------------------------");
	printf("\n\n\t\t 4 >>>   EXIT THIS PORTAL");
	printf("\n\n\t\t----------------------------------------");
	printf("\n\n\n\t\t YOUR CHOICE? >>> ");

	scanf("%d",&menu_choice);

	switch(menu_choice)
	{
		case 1:
			reservation();
			break;

		case 2:
			viewdetails();
			getch();
			break;


		case 3:
			holiday();
			break;

		case 4:
			return(0);

		default:
			printf("\n\n INVALID CHOICE!!!");
	}

	goto start;
	return(0);
}

//*************************************************************TOUR MENU***************************************************************************************************


void viewdetails()
{
    int menu_choice;
	system("cls");
	system("color 0F");

    printf("\n\n\t\t\t\tDEALS INSIDE ASIA");
    printf("\n\t\t\t\t******************");

    printf("\n\n\n\n\t\t 1 >>>   10-DAYS CRUISE ON SEA FLIGHTS");

	printf("\n\n\t\t 2 >>>   6-DAYS CRUISE ON SILVER LINERS   ");

	printf("\n\n\t\t 3 >>>   3-DAYS CRUISE ON CEYLON LUXURIES ");

	printf("\n\n\t\t 4 >>>   8-DAYS CRUISE ON OCEAN CAPITALS  ");

	printf("\n\n\n\n\t SELECT YOUR INTEREST TO KNOW MORE DETAILS >>> ");

	scanf("%d",&menu_choice);
	system("cls");

	switch(menu_choice)
	{
		case 1:
                tendays();
                printf("\n\n\n\n\n\n PRESS ANY KEY TO GO BACK TO MAIN MENU...");
                getch();
                break;
        case 2:
                sixdays();
    			printf("\n\n\n\n\n\n PRESS ANY KEY TO GO BACK TO MAIN MENU...");
                getch();
                break;
		case 3:
                threedays();
    			printf("\n\n\n\n\n\n PRESS ANY KEY TO GO BACK TO MAIN MENU...");
                getch();
                break;
        case 4:
                eightdays();
    			printf("\n\n\n\n\n\n PRESS ANY KEY TO GO BACK TO MAIN MENU...");
                getch();
                break;


		default:
			printf("\n\n INVALID CHOICE!!!");
	}
}

//*********************************************************************DETAILS OF TOUR PACKAGE************************************************************************************

void tendays()
{
                system("color 0A");
                printf("\n\n\t\t\t10-DAY CRUISE ON SEA FLIGHTS");
                printf("\n\t\t\t****************************");
                printf("\n\n\n\t\t\tASIA: Thailand >> Vietnam >> Malaysia >> Bangkok");
                printf("\n\n\t\t\t~ Immerse yourself in natural beauty of South Asia...");
                printf("\n\n\t\t\tSAILING: JANUARY 2022\t\tCOST(INR): Rs.18950/-");
                printf("\n\n\n\t\tBOARDING: Singapore");
                printf("\n\n\t\tPorts of Call:  === Singapore\n\t\t\t\t=== Kuala Lumpur\n\t\t\t\t=== Phuket\n\t\t\t\t=== Minh City\n\t\t\t\t=== Bangkok   ");
}

void sixdays()
{
                system("color 0A");
                printf("\n\n\t\t\t 6-DAY CRUISE ON SILVER LINERS");
                printf("\n\t\t\t*******************************");
                printf("\n\n\n\t\t\tASIA: Philippines >> Vietnam >> Bangkok");
                printf("\n\n\t\t\t~ Discover the best of Vietnam during an overnight stay...");
                printf("\n\n\t\t\tSAILING: APRIL 2022\t\tCOST(INR): Rs.12470/-");
                printf("\n\n\n\t\tBOARDING: Hong Kong, China");
                printf("\n\n\t\tPorts of Call:  === Manila(Philippines)\n\t\t\t\t=== Port of Muara\n\t\t\t\t=== Minh City\n\t\t\t\t=== Ko Samuai\n\t\t\t\t=== Bangkok   ");
}

void threedays()
{
                system("color 0A");
                printf("\n\n\t\t\t 3-DAY CRUISE ON CEYLON LUXURIES");
                printf("\n\t\t\t********************************");
                printf("\n\n\n\t\t\tASIA: India>> Sri Lanka");
                printf("\n\n\t\t\t~ Feel the nature of Ceylon...");
                printf("\n\n\t\t\tSAILING: March 2022\tCOST(INR): Rs.9400/-");
                printf("\n\n\n\t\tBOARDING: Kolkata");
                printf("\n\n\t\tPorts of Call:  === Visakhapatnam\n\t\t\t\t=== Andaman Islands\n\t\t\t\t=== Colombo   ");
}

void eightdays()
{
                system("color 0A");
                printf("\n\n\t\t\t 8-DAY CRUISE ON OCEAN CAPITALS");
                printf("\n\t\t\t*******************************");
                printf("\n\n\n\t\t\tASIA: Osaka >> Busan Port >> Beppu");
                printf("\n\n\t\t\t~ Admire the Round-trip and Dine along The Waterfront...");
                printf("\n\n\t\t\tSAILING: MAY 2022\t\tCOST(INR): Rs.16780/-");
                printf("\n\n\n\t\tBOARDING: Tokyo");
                printf("\n\n\t\tPorts of Call:  === Mount Fuji\n\t\t\t\t=== Kyoto\n\t\t\t\t=== Nagasaki\n\t\t\t\t=== Busan\n\t\t\t\t=== Tokyo   ");
}

//************************************************************************FUNCTION FOR LOGIN IN***************************************************************************

void reglog()
{
    system("color 0f");
	FILE *fp;
	int opt,usrFound = 0;
	struct user user,usr;
	char password2[50];
    char username[50],pword[50];

	printf("   \n\n\n\t\t\t\tWelcome Aboard!!!\n   \t\t\t\tBook your spot today and set your sail on an adventure!   ");


	printf("\n\n\n\n\n\n\t\t 1 >>>   LOGIN TO OUR PORTAL");
	printf("\n\n\t\t-------------------------------");
	printf("\n\n\t\t 2 >>>   NEW USER? SIGN UP :) ");
	printf("\n\n\t\t-------------------------------");

	printf("\n\n\n\t\t YOUR CHOICE? >>> ");

	scanf("%d",&opt);
	fgetc(stdin);


	switch(opt)
	{
		case 2:
                pwd:
                system("cls");
                printf("\nEnter your full name:\t");
                takeinput(user.fullName);
                printf("Enter your email:\t");
                takeinput(user.email);
                printf("Enter your contact no:\t");
                takeinput(user.phone);
                printf("Enter your password:\t");
                takepassword(user.password);
                printf("\nConfirm your password:\t");
                takepassword(password2);

                if(!strcmp(user.password,password2))
                {
                    generateUsername(user.email,user.username);
                    fp = fopen("shiplog.bin","ab");
                    fwrite(&user,sizeof(struct user),1,fp);
                    if(fwrite != 0)
                        {
                            printf("\n\n\t\t Registration success!\n\n\t\t Dear passenger, Your Username is %s",user.username);
                            getch();
                            system("cls");
                            system("color 0b");
                            printf("\n\n\n\t\t\t Hello %s! \n\n\t\t\t Press Enter to agree with following T&Cs and enter the paradise...",user.username);
                            printf("\n\n\n\n\t TERMS & CONDITIONS :\n\n\n\t~ Cruise Fantasies makes arrangements for transportation, other than ocean passage, only as a booking agent.");
                            printf("\n\n\t~ Our responsibility does not extend beyond the vessel.");
                            printf("\n\n\t~ We are offering an exclusive deal for this 2022.Hence NO RETURN POLICIES are encouraged.");
                            printf("\n\n\t~ Cruise Fantasies is not responsible for incidents such as airline cancellations, re-routings or any\n\t  disruption of scheduled services or accommodation, or lost luggage.");
                            printf("\n\n\t~ Travel documents will not be dispatched until full and last payment and guest Contact Information\n\t  has been received by the us and cleared.");

                            getch();
                        }
                    else printf("\n\nSorry! Something went wrong :( ");
                    fclose(fp);
                }
                else
                {
                    printf("\n\nPassword not matched");
                    Beep(1500,600);
                    getch();
                    goto pwd;
                }
                    break;

		case 1:
                again:
                system("cls");
                printf("\nEnter your username:\t");
                takeinput(username);
                printf("Enter your password:\t");
                takepassword(pword);

                fp = fopen("shiplog.bin","rb");
                while(fread(&usr,sizeof(struct user),1,fp))
                {
                    if(!strcmp(usr.username,username))
                        {
                            if(!strcmp(usr.password,pword))
                            {
                                system("cls");
                                system("color 0a");

                                printf("\n\n\n\t\t\t\tWelcome %s !",usr.fullName);
                                printf("\n\n\n\n\t\tFull Name:\t%s ",usr.fullName);
                                printf("\n\n\t\tEmail:\t\t%s ",usr.email);
                                printf("\n\n\t\tUsername:\t%s ",usr.username);
                                printf("\n\n\t\tContact no.:\t%s ",usr.phone);
                                getch();
                            }

                            else
                            {
                                printf("\n\nInvalid Password!");
                                Beep(1600,750);
                                printf("TRY AGAIN..?");
                                getch();
                                goto again;
                            }
                            usrFound = 1;
                        }
                }
                if(!usrFound)
                {
                    printf("\n\nUser is not registered!");
                    Beep(1300, 750);
                    printf("\n\nTRY AGAIN..?");
                    getch();
                    goto again;
                }
                fclose(fp);
                break;

		default:
			printf("\n\n\t\t INVALID CHOICE!!!");
			Beep(1000,600);
			getch();
			system("cls");
			reglog();
	}
	return 0;
}

//*******************************************************HOLIDAY MENU***********************************************************************************************************

void holiday()
{
        int menu_choice;
        system("cls");
		system("color 0F");
    printf("\n");
	printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("\t\t\t\t*                                                 *\n");
	printf("\t\t\t\t*         GETTING READY FOR A WORLD TOUR ???      *\n");
	printf("\t\t\t\t*                                                 *\n");
	printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * *\n");

	printf("\n\t\t\t\t\t======== HOLIDAY PACKAGES ========");

    printf("\n\n\n\n\t\t 1 >>>   MEDITERRANEAN WAYS");

	printf("\n\n\t\t 2 >>>   A VISIT TO PANAMA ");

	printf("\n\n\t\t 3 >>>   CANARY ISLANDS ");

	printf("\n\n\t\t 4 >>>   TRANSATLANTIC-HERITAGE ");

	printf("\n\n\t\t 5 >>>   AMERICAN SEA VISTA ");

	printf("\n\n\t\t 6 >>>   SOUTH PACIFIC ");

	printf("\n\n\n\t SELECT YOUR INTEREST TO KNOW MORE DETAILS >>> ");

    scanf("%d",&menu_choice);
	system("cls");


	switch(menu_choice)
	{
		case 1:
                med();
                getch();
                break;
        case 2:
                panama();
                getch();
                break;
		case 3:
                canary();
                getch();
                break;
        case 4:
                atlantic();
                getch();
                break;
        case 5:
                america();
                getch();
                break;
		case 6:
                pacific();
                getch();
                break;
		default:
			printf("\n\n INVALID CHOICE!!!");
	}
}

//**************************************************************DETAILS OF HOLIDAY PACKAGE**************************************************************************************

med()
{
    system("color 0b");
    printf("\n\n\t\t\t\t|||||||||| MEDITERRANEAN WAYS ||||||||||");
    printf("\n\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
    printf("\n\t*\n\t*\n\t*   A Ocean Roam around GREECE and EGYPT     ");
    printf("\n\t*\n\t*\n\t*   ~ Experience more with two overnights in Israel  ");
    printf("\n\t*\n\t*\n\t*   CRUISE DURATION: 17 Days\t\tCOST(USD):$ 5190");
    printf("\n\t*\n\t*\n\t*   BOARDING: Dubai,United Arab Emirates\tSAILING: SEPTEMBER-OCTOBER 2022 ");
    printf("\n\t*\n\t*\n\t*   CABINS AVAILABLE: --- Ocean View , Deluxe , Balcony , Suite     ");
    printf("\n\t*\n\t*\n\t*\t\t  CALLING PORTS: === AbuDhabi\n\t*\t\t\t\t === Salah\n\t*\t\t\t\t === Safaga (Egypt)\n\t*\t\t\t\t === Jerusalem\n\t*\t\t\t\t === Suez Canal");
    printf("\n\t*\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
}

panama()
{
    system("color 0b");
    printf("\n\n\t\t\t\t|||||||||| A VISIT TO PANANMA ||||||||||");
    printf("\n\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
    printf("\n\t*\n\t*\n\t*   MEXICO >>>> MIAMI (FLORIDA)     ");
    printf("\n\t*\n\t*\n\t*   ~ CRUISE THE WORLD'S MOST FAMOUS SHORT-CUT...PANAMA CANAL  ");
    printf("\n\t*\n\t*\n\t*   CRUISE DURATION: 15 Days\t\tCOST(USD):$ 4060  ");
    printf("\n\t*\n\t*\n\t*   BOARDING: Washington\t\tSAILING: JULY-2022 ");
    printf("\n\t*\n\t*\n\t*   CABINS AVAILABLE: --- Ocean View , Deluxe , The Heaven , Suite     ");
    printf("\n\t*\n\t*\n\t*\t\t  CALLING PORTS: === Seattle (Washington)\n\t*\t\t\t\t === San Fransisco\n\t*\t\t\t\t === SanDiego\n\t*\t\t\t\t === Puetro\n\t*\t\t\t\t === CoastaRic");
    printf("\n\t*\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
}

canary()
{
    system("color 0b");
    printf("\n\n\t\t\t\t|||||||||| CANARY ISLANDS ||||||||||");
    printf("\n\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
    printf("\n\t*\n\t*\n\t*   RdJ >>> Barcelona ! ");
    printf("\n\t*\n\t*\n\t*   ~ Visit the Sunrise of Europe");
    printf("\n\t*\n\t*\n\t*   CRUISE DURATION: 17 Days\t\tCOST(USD):$ 5317  ");
    printf("\n\t*\n\t*\n\t*   BOARDING: Rio de Janerio\t\tSAILING: MAY-2022 ");
    printf("\n\t*\n\t*\n\t*   CABINS AVAILABLE: --- Ocean View , Deluxe , Balcony , Suite  , Club");
    printf("\n\t*\n\t*\n\t*\t\t  CALLING PORTS: === Fortaleza\n\t*\t\t\t\t === Maderia\n\t*\t\t\t\t === Cartegna Ports\n\t*\t\t\t\t === Barcelona\n\t*\t\t\t\t === P.Grande");
    printf("\n\t*\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
}

atlantic()
{
    system("color 0b");
    printf("\n\n\t\t\t\t|||||||||| TRANSATLANTIC-HERITAGE ||||||||||");
    printf("\n\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
    printf("\n\t*\n\t*\n\t*   A sail to Rome ");
    printf("\n\t*\n\t*\n\t*   ~ Experience the Atlantic journey of lifetime");
    printf("\n\t*\n\t*\n\t*   CRUISE DURATION: 21 Days\t\tCOST(USD):$ 7618  ");
    printf("\n\t*\n\t*\n\t*   BOARDING: New York Ports\t\tSAILING: AUGUST-SEPTEMBER 2022 ");
    printf("\n\t*\n\t*\n\t*   CABINS AVAILABLE: --- Ocean View , Deluxe , Balcony , Suite , Spa Rooms ,The Heaven ");
    printf("\n\t*\n\t*\n\t*\t\t  CALLING PORTS: === Bermuda\n\t*\t\t\t\t === Barcelona\n\t*\t\t\t\t === France\n\t*\t\t\t\t === Pisa(Paris)\n\t*\t\t\t\t === Ports of Rome");
    printf("\n\t*\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
}
america()
{
    system("color 0b");
    printf("\n\n\t\t\t\t|||||||||| AMERICAN SEA VISTA ||||||||||");
    printf("\n\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
    printf("\n\t*\n\t*\n\t*   >>> Falkland Islands ");
    printf("\n\t*\n\t*\n\t*   ~ A sail to the Paradise");
    printf("\n\t*\n\t*\n\t*   CRUISE DURATION: 14 Days\t\tCOST(USD):$ 3125  ");
    printf("\n\t*\n\t*\n\t*   BOARDING: Argentina\t\tSAILING: OCTOBER 2022 ");
    printf("\n\t*\n\t*\n\t*   CABINS AVAILABLE: --- Deluxe , Balcony , Suite");
    printf("\n\t*\n\t*\n\t*\t\t  CALLING PORTS: === Buenos Aries\n\t*\t\t\t\t === Mt.Evido Ports\n\t*\t\t\t\t === Stanely\n\t*\t\t\t\t === Uruguay\n\t*\t\t\t\t === Islands of Malvinas");
    printf("\n\t*\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
}

pacific()
{
    system("color 0b");
    printf("\n\n\t\t\t\t|||||||||| SOUTH PACIFIC-CNC ||||||||||");
    printf("\n\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
    printf("\n\t*\n\t*\n\t*   >>> Fiji on Costa Neo Classica");
    printf("\n\t*\n\t*\n\t*   ~ Admire the beauty of Nature");
    printf("\n\t*\n\t*\n\t*   CRUISE DURATION: 15 Days\t\tCOST(USD):$ 4326");
    printf("\n\t*\n\t*\n\t*   BOARDING: Port of Brisbane\t\tSAILING: FEBRAUARY-2022 ");
    printf("\n\t*\n\t*\n\t*   CABINS AVAILABLE: --- Ocean View , Deluxe , Balcony");
    printf("\n\t*\n\t*\n\t*\t\t  CALLING PORTS: === Sydney\n\t*\t\t\t\t === Isle of Pines\n\t*\t\t\t\t === Polynesia\n\t*\t\t\t\t === Ocenacia\n\t*\t\t\t\t === Fiji Ports");
    printf("\n\t*\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
}



//*************************************************************************FOR RESERVATION********************************************************************************

void reservation()
{
    int menu_choice;
    system("cls");
    system("color 0b");
    printf("\n\n\t\t\t Dear Passenger, before reservation kindly check the details of the ship.");
    printf("\n\n\n\t 1 >>> Okay.Go back to main menu");
    printf("\n\n\t 2 >>> Already Checked. Proceed ahead!");

    printf("\n\n\n\t (1/2)? >>>   ");
    scanf("%d",&menu_choice);
    if(menu_choice==1)
    {
        return(0);
    }
    if(menu_choice==2)
    {
        listofships();
    }

}

//*********************************************************************LIST OF SHIPS**************************************************************************************

void listofships()
{
    FILE *fptr;
    char ch;

    int shipno;
    FILE *f1, *fopen();
    system("cls");
    system("color 0A");
    printf("\n\t\t\t\t======= LIST OF SHIPS AVAILABLE ========\n\n\n\n");
    char a[50] = "  HOLIDAY CRUISES", b[50]="  TOUR CRUISES(ASIA)";
    char a1[50] = "111 >>> MEDITERRANEAN WAYS", b1[50]="112 >>> A VISIT TO PANAMA",c1[50]="113 >>> CANARY ISLANDS",d1[50]="114 >>> TRANSATLANTIC-HERITAGE";
    char e1[50] = "115 >>> AMERICAN SEA VISTA" ;

    char a2[50] = "101 >>> SEA FLIGHTS", b2[50]="102 >>> SILVER LINERS",c2[50]="103 >>> CEYLON LUXURIES",d2[50]="104 >>> OCEAN CAPITALS";
    char e2[20] = "", f2[20]="",f[30]="116 >>> SOUTH PACIFIC";
    printf("\t\t%-45s %-45s\n\n\n", a,b);
    printf("\t\t%-45s %-45s\n\n", a1,a2);
    printf("\t\t%-45s %-45s\n\n", b1,b2);
    printf("\t\t%-45s %-45s\n\n", c1,c2);
    printf("\t\t%-45s %-45s\n\n", d1,d2);
    printf("\t\t%-45s %-45s\n\n", e1,e2);
    printf("\t\t%-45s %-45s\n\n", f,f2);

    printf("\n\n\nENTER THE NUMBER OF YOUR DESIRED SHIP >>>   ");
    scanf("%d",&shipno);
    system("cls");


            int nos,s;
            float charges,c;
            char name[25];
            char temp;

        if (shipno==101)
        {
            fptr = fopen("seaflights.txt", "a+");
            printf("\n\n\n\t\t================= PASSENGER DETAILS =================\n\n\n");
            printf("\n\t\tNAME (IN BLOCK)\t:  ");
            scanf("%c",&temp);
            scanf("%[^\n]",name);
            printf("\n\n\t\tNUMBER OF SEATS :  ");
            scanf("%d", &nos);
            printf("\n\n\t\tSHIP           \t: SEA FLIGHTS\n");
            printf("\n\n\t\tRESERVED(T/H)\t:  TOUR \n");
            printf("\n\n\t\tSAILING \t:  JANUARY 2022     \n");
            charges= 18950*nos;
            printf("\n\n\t\tCHRAGES\t\t:  Rs.0%f\n\n\n\n",charges);
            fprintf(fptr, "%s , %d , Rs.0%f\n", name, nos, charges);
            fclose(fptr);
            getch();
            end();
        }
        if (shipno==102)
        {

            fptr = fopen("silverlines.txt", "a+");
            printf("\n\n\n\t\t================= PASSENGER DETAILS =================\n\n\n");
            printf("\n\t\tNAME (IN BLOCK)\t:  ");
            scanf("%c",&temp);
            scanf("%[^\n]",name);
            printf("\n\n\t\tNUMBER OF SEATS :  ");
            scanf("%d", &nos);
            printf("\n\n\t\tSHIP           \t: SILVER LINERS\n");
            printf("\n\n\t\tRESERVED(T/H)\t:  TOUR \n");
            printf("\n\n\t\tSAILING \t:  APRIL 2022     \n");
            charges= 12470*nos;
            printf("\n\n\t\tCHRAGES\t\t:  Rs.%.0f\n\n\n\n",charges);
            fprintf(fptr, "%s , %d , Rs.%.0f\n", name, nos, charges);
            fclose(fptr);
            getch();
            end();
        }
        if (shipno==103)
        {


            fptr = fopen("ceylon.txt", "a+");
            printf("\n\n\n\t\t================= PASSENGER DETAILS =================\n\n\n");
            printf("\n\t\tNAME (IN BLOCK)\t:  ");
            scanf("%c",&temp);
            scanf("%[^\n]",name);
            printf("\n\n\t\tNUMBER OF SEATS :  ");
            scanf("%d", &nos);
            printf("\n\n\t\tSHIP           \t: CEYLON LUXURIES\n");
            printf("\n\n\t\tRESERVED(T/H)\t:  TOUR \n");
            printf("\n\n\t\tSAILING \t:  MARCH 2022     \n");
            charges= 9400*nos;
            printf("\n\n\t\tCHRAGES\t\t:  Rs.%.0f\n\n\n\n",charges);
            fprintf(fptr, "%s , %d , Rs.%.0f\n", name, nos, charges);
            fclose(fptr);
            getch();
            end();
        }
        if (shipno==104)
        {

            fptr = fopen("oceancap.txt", "a+");
            printf("\n\n\n\t\t================= PASSENGER DETAILS =================\n\n\n");
            printf("\n\t\tNAME (IN BLOCK)\t:  ");
            scanf("%c",&temp);
            scanf("%[^\n]",name);
            printf("\n\n\t\tNUMBER OF SEATS :  ");
            scanf("%d", &nos);
            printf("\n\n\t\tSHIP           \t: OCEAN CAPITALS\n");
            printf("\n\n\t\tRESERVED(T/H)\t:  TOUR \n");
            printf("\n\n\t\tSAILING \t:  MAY 2022     \n");
            charges= 16780*nos;
            printf("\n\n\t\tCHRAGES\t\t:  Rs.%.0f\n\n\n\n",charges);
            fprintf(fptr, "%s , %d , Rs.%.0f\n", name, nos, charges);
            fclose(fptr);
            getch();
            end();
        }
        if (shipno==111)
        {

            fptr = fopen("mdtn.txt", "a+");
            printf("\n\n\n\t\t================= PASSENGER DETAILS =================\n\n\n");
            printf("\n\t\tNAME (IN BLOCK)\t:  ");
            scanf("%c",&temp);
            scanf("%[^\n]",name);
            printf("\n\n\t\tNUMBER OF SEATS :  ");
            scanf("%d", &nos);
            printf("\n\n\t\tSHIP           \t: MEDITERRANEAN WAYS\n");
            printf("\n\n\t\tRESERVED(T/H)\t:  HOLIDAY \n");
            printf("\n\n\t\tSAILING \t:  SEPTEMBER-OCTOBER 2022     \n");
            charges= 5190*nos;
            printf("\n\n\t\tCHRAGES\t\t:  $ %.0f\n\n\n\n",charges);
            fprintf(fptr, "%s , %d , $%.0f\n", name, nos, charges);
            fclose(fptr);
            getch();
            end();
        }
        if (shipno==112)
        {

            fptr = fopen("panama.txt", "a+");
            printf("\n\n\n\t\t================= PASSENGER DETAILS =================\n\n\n");
            printf("\n\t\tNAME (IN BLOCK)\t:  ");
            scanf("%c",&temp);
            scanf("%[^\n]",name);
            printf("\n\n\t\tNUMBER OF SEATS :  ");
            scanf("%d", &nos);
            printf("\n\n\t\tSHIP           \t: A VISIT TO PANAMA\n");
            printf("\n\n\t\tRESERVED(T/H)\t:  HOLIDAY \n");
            printf("\n\n\t\tSAILING \t:  JULY 2022     \n");
            charges= 4060*nos;
            printf("\n\n\t\tCHRAGES\t\t:  $ %.0f\n\n\n\n",charges);
            fprintf(fptr, "%s , %d , $%.0f\n", name, nos, charges);
            fclose(fptr);
            getch();
            end();
        }
        if (shipno==113)
        {

            fptr = fopen("canary.txt", "a+");
            printf("\n\n\n\t\t================= PASSENGER DETAILS =================\n\n\n");
            printf("\n\t\tNAME (IN BLOCK)\t:  ");
            scanf("%c",&temp);
            scanf("%[^\n]",name);
            printf("\n\n\t\tNUMBER OF SEATS :  ");
            scanf("%d", &nos);
            printf("\n\n\t\tSHIP           \t: CANARY ISLANDS\n");
            printf("\n\n\t\tRESERVED(T/H)\t:  HOLIDAY \n");
            printf("\n\n\t\tSAILING \t:  MAY 2022     \n");
            charges= 5317*nos;
            printf("\n\n\t\tCHRAGES\t\t:  $ %.0f\n\n\n\n",charges);
            fprintf(fptr, "%s , %d , $%.0f\n", name, nos, charges);
            fclose(fptr);
            getch();
            end();
        }
        if (shipno==114)
        {

            fptr = fopen("transat.txt", "a+");
            printf("\n\n\n\t\t================= PASSENGER DETAILS =================\n\n\n");
            printf("\n\t\tNAME (IN BLOCK)\t:  ");
            scanf("%c",&temp);
            scanf("%[^\n]",name);
            printf("\n\n\t\tNUMBER OF SEATS :  ");
            scanf("%d", &nos);
            printf("\n\n\t\tSHIP           \t: TRANSATLANTIC-HERITAGE\n");
            printf("\n\n\t\tRESERVED(T/H)\t:  HOLIDAY \n");
            printf("\n\n\t\tSAILING \t:  AUGUST-SEPTEMBER 2022     \n");
            charges= 7618*nos;
            printf("\n\n\t\tCHRAGES\t\t:  $ %.0f\n\n\n\n",charges);
            fprintf(fptr, "%s , %d , $%.0f\n", name, nos, charges);
            fclose(fptr);
            getch();
            end();
        }
        if (shipno==115)
        {

            fptr = fopen("american.txt", "a+");
            printf("\n\n\n\t\t================= PASSENGER DETAILS =================\n\n\n");
            printf("\n\t\tNAME (IN BLOCK)\t:  ");
            scanf("%c",&temp);
            scanf("%[^\n]",name);
            printf("\n\n\t\tNUMBER OF SEATS :  ");
            scanf("%d", &nos);
            printf("\n\n\t\tSHIP           \t: AMERICAN SEA VISTA\n");
            printf("\n\n\t\tRESERVED(T/H)\t:  HOLIDAY \n");
            printf("\n\n\t\tSAILING \t:  OCTOBER 2022     \n");
            charges= 3125*nos;
            printf("\n\n\t\tCHRAGES\t\t:  $ %.0f\n\n\n\n",charges);
            fprintf(fptr, "%s , %d , $%.0f\n", name, nos, charges);
            fclose(fptr);
            getch();
            end();
        }
        if (shipno==116)
        {

            fptr = fopen("pacific.txt", "a+");
            printf("\n\n\n\t\t================= PASSENGER DETAILS =================\n\n\n");
            printf("\n\t\tNAME (IN BLOCK)\t:  ");
            scanf("%c",&temp);
            scanf("%[^\n]",name);
            printf("\n\n\t\tNUMBER OF SEATS :  ");
            scanf("%d", &nos);
            printf("\n\n\t\tSHIP           \t: SOUTH PACIFIC\n");
            printf("\n\n\t\tRESERVED(T/H)\t:  HOLIDAY \n");
            printf("\n\n\t\tSAILING \t:  FEBRAUARY 2022     \n");
            charges= 4326*nos;
            printf("\n\n\t\tCHRAGES\t\t:  $ %.0f\n\n\n\n",charges);
            fprintf(fptr, "%s , %d , $%.0f\n", name, nos, charges);
            fclose(fptr);
            getch();
            end();
        }


}

//***********************************************************************THE END***********************************************************************************************

void end()
{
    system("cls");
    system("color 0b");

    printf("\n\n\n\n");
	printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("\t\t\t\t*                                                 *\n");
    printf("\t\t\t\t*         RESERVATION DONE SUCCESSFULLY !!!       *\n");
	printf("\t\t\t\t*                                                 *\n");
	printf("\t\t\t\t*       HAVE A SAFE AND WONDERFUL JOURNEY :)      *\n");
	printf("\t\t\t\t*                                                 *\n");
	printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\n\tDATES OF SAILING WILL BE INFORMED BY US THROUGH YOUR REGISTER EMAIL. THANK YOU. ");
	printf("\n\n\n\n\tPRESS ENTER TO GO BACK TO MAIN MENU...");
	getch();
	return(0);
}


