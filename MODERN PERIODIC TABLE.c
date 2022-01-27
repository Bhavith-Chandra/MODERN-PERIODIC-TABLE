#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

    char key[20];
    int i=0,j,count,key1,q,f;
    char c;
int main()
{
    printf("\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
        printf("\n               *                MODERN                  PERIODIC                   TABLE                               *\n");
    printf("\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
while(1)
{


       char element[118][15]={"Hydrogen","Helium","Lithium",
   "Beryllium","Boron","Carbon","Nitrogen","Oxygen","Fluorine",
   "Neon","Sodium","Magnesium","Aluminum","Silicon",
   "Phosphorus","Sulfur","Chlorine","Argon",
   "Potassium","Calcium","Scandium","Titanium","Vanadium","Chromium","Manganese",
   "Iron","Cobalt","Nickel","Copper","Zinc","Gallium","Germanium",
   "Arsenic","Selenium","Bromine","Krypton","Rubidium","Strontium","Yttrium",
   "Zirconium","Niobium","Molybdenum","Technetium","Ruthenium",
   "Rhodium","Palladium","Silver","Cadmium","Indium","Tin","Antinomy",
   "Tellurium","Iodine","Xenon","Cesium","Barium","Lanthanum","Cerium","Praseodymium",
   "Neodymium","promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium",
   "Holmium","Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungsten",
   "Rhenium","Osmium","Iridium","Platinum","Gold","Mercury","Thallium","Lead","Bismuth",
   "Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium","Protactinium",
   "Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","Californium",
   "Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium","Dubnium",
   "Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentagenium",
   "Copernicium","Ununtrium","Flerovium","Ununpentium","Livermorium","Ununseptium",
   "Ununoctium"};

   char symbol[118][4]=
   {
   "H","He","L","Be","B","C","N","O","F","Ne","Na","Mg","Al",
   "Si","P","S","Cl","Ar","K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni",
   "Cu","Zn","Ga","Ge","As","Se","Br","Kr","Rb","Sr","Y","Zr","Nb","Mo",
   "Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe","Cs",
   "Ba","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er",
   "Tm","Yb","Lu","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb",
   "Bi","Po","At","Rn","Fr","Ra","Ac","Th","Pa","U","Np","Pu","Am","Cm",
   "Bk","Cf","Es","Fm","Md","No","Lr","Rf","Db","Sg","Bh","Hs","Mt","Ds",
   "Rg","Cn","Uut","Fl","Uup","Lv","Uus","Uuo"
   };
    float at_mass[118]={1.008,4.0026,6.941,9.012,10.81,12.011,14.007,
    15.99,18.998,20.18,22.989,24.305,26.982,28.09,
    30.97,32.07,35.45,39.19,39.1,40.08,44.96,47.867,50.94,55.85,
    58.93,58.639,63.546,65.39,69.72,72.61,74.9,78.96,79.904,83.8,85.468,
    87.62,88.91,91.225,92.90,95.9,98,101.07,102.905,106.42,101.868,
    112.40,114.82,118.7,121.71,127.6,126.904,131.3,132.906,137.327,
    138.906,140.116,141.908,144.24,145,150.36,151.964,157.25,158.93,
    162.5,164.93,167.26,168.934,173.04,174.97,178.49,180.948,183.84,
    186.207,190.23,192.217,195.07,196.967,200.59,204.383,207.2,208.98,209,
    210,222,223,226,227,232.4,231.04,238.029,237,244,243,247,247,251,
    252,257,258,259,262,261,262,263,262,265,266,269,272,277};
 fflush(stdin);
 printf("\n  1.Enter L to list the elements.\n");
    printf("  2.Enter N to search by name.\n");
    printf("  3.Enter A to search by atomic number.\n");
    printf("  4.Enter S to search by Symbol.\n");
    printf("  5.Enter E to Exit.\n\n");
    fflush(stdin);
    scanf("%c",&c);
    if(c>90)
        c=c-32;

switch(c)
  { 
    case 'L':
    printf("\t\t                       MODERN PERIODIC TABLE                           \n");
    printf("\t\t                       ---------------------                           \n");
    printf("\n\n\t\t|##################################################################|\n");
    printf("\t\t    Element    |    Symbol  |   Atomic No  |    Atomic Mass      \n");
    printf("\t\t|********|\n");

    for(i=0;i<118;i++)
    {
        printf("\t\t  %s",element[i]);
        count= 13-strlen(element[i]);
        for(j=0;j<count;j++)
        printf(" ");
        printf("|     %s",symbol[i]);
        count=7-strlen(symbol[i]);
        for(j=0;j<count;j++)
            printf(" ");
        if(i<9)
        {
            printf("|    %d",i+1);
            for(j=0;j<9;j++)
                printf(" ");
        }
        else if(i==9)
        {
            printf("|    10        ");
        }
        else if(i>9 && i<99)
            {
                printf("|    %d",i+1);
            for(j=0;j<8;j++)
                printf(" ");
            }
            else if(i==99)
            {
                printf("|    100       ");
            }
        else if(i>99)
        {
            printf("|    %d",i+1);
            for(j=0;j<7;j++)
                printf(" ");
            }
       if(i<110)
       printf("|    %f        \n",at_mass[i]);
        else
            printf("|    NA\n");
        printf("\t\t|------------------------------------------------------------------|\n");

        }
        printf("\t\t ------------------------------------------------------------------\n");
    fflush(stdin);
        break;


    case 'N':
        printf("Enter the name of the element to be searched(please see that the first letter of element is capital)\n");
        fflush(stdin);
        scanf("%s",key);
        f=key[0];
        if(f>90)
            f=f-32;
        key[0]=f;
        for(i=0;i<118;i++)
          {

            if(strcmp(element[i],key)==0)
                printf("\n\t Element Name: %s\n\t Symbol: %s\n\t Atomic Number: %d\n\t Atomic Mass: %f\n\n\n",element[i],symbol[i],i+1,at_mass[i]);
        }
       fflush(stdin);
        break;

    case 'A':
        printf("Enter Atomic number\n");
        scanf("%d",&key1);
        q=key1-1;
        printf("\n\tElement Name: %s\n\tSymbol : %s \n\tAtomic No: %d\n\tAtomic Mass: %f\n\n\n",element[q],symbol[q],key1,at_mass[q]);
        fflush(stdin);
        break;
    case 'E':
        printf("\n\n\t\t\t\t\tTHANKYOU FOR USING MODERN PERIODIC TABLE\n\n\n");
        exit(0);
        fflush(stdin);
        break;
    case 'S':
        printf("Enter Symbol(Appropriate)\n");
       fflush(stdin);
        scanf("%s",key);
    f=key[0];
    if(f>90)
       f=f-32;
       key[0]=f;
    fflush(stdin);
 //   printf("%c\n",key[0]);


        for(i=0;i<118;i++)
         {
            if(strcmp(symbol[i],key)==0)
            printf("\t\tElement Name: %s\n\t\tSymbol :%s \n\t\tAtomic No: %d\n\t\tAtomic Mass: %f\n",element[i],symbol[i],i+1,at_mass[i]);
         }
        break;

}
//printf("\nDo you want to continue(Y/N)\n");
//fflush(stdin);
// scanf("%c",&sel);
  //  if(sel=='N')a
    //x=1;
    return 0;
}
}
