#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct information
{
    char symptoms[10];
} match[10];

struct address
{
    char UpazilaThana[10];
    char district[10];
}youradd ;

struct sign_up
{
    char name[20];
    int age;
    char gender[7];


}your_info;
struct hosinfo
{   char hosname[10][30];
    int icu[10];
    int icubooked[10];
    float payment[10];

}vacanthosp[6];
void pattern();
void vacanthospit(struct address);
void ChooseOption(struct address,struct sign_up);
void DoctorConsult(struct sign_up,struct address);
void Vaccination(struct sign_up);
void infoBooster1();
void infoBooster2();


int main(void)
{ struct address youradd;
  struct sign_up your_info;
  struct information match;




  printf("                       Hi! Welcome to COVID app,sign up to begin\n");
   printf("                       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   printf("                                 ==General Info==\n");
   printf("\n         Name:");

   gets(your_info.name);
   fflush(stdin);
   printf("         Age:");

   scanf("%d",&your_info.age);
   fflush(stdin);
   printf("         Gender(F/M):");
   gets(your_info.gender);
   fflush(stdin);
   printf("                                 ==Address(DHAKA)==\n");
   printf("\n        Street/Area/village(e.g. 'Badda'):");
   gets(youradd.UpazilaThana);

    printf("         District:");
    gets(youradd.district);
    fflush(stdin);



   //after signing up pattern and services appear.
   pattern();

   ChooseOption(youradd,your_info);









}
void pattern()
{


    printf("======================================================================================\n");
    int i,j,n=4;
    for(i=1;i<n;i++)
    {  for(j=1;j<=n-i;j++)
       {
           printf("  ");
       }
       for(j=1;j<=6;j++)
       {
           if(j==1||i==1)
           {
               printf(" @");
           }
           else
           {
               printf("  ");
           }
       }
       for(j=1;j<=n-i;j++)
       {
           printf("  ");
       }
       for(j=1;j<=i;j++)
       {
           if(j==i)
           {
               printf(" @");
           }
           else
           {
               printf("  ");
           }
       }
       for(j=1;j<=3;j++)
       {
           if(i==1)
           {
               printf(" @");
           }
           else
           {
               printf("  ");
           }
       }
       for(j=1;j<=2*i-1;j++)
       {
           if(j==2*i-1 )
           {
               printf(" @");
           }
           else
           {
               printf("  ");
           }
       }
       for(j=1;j<=6;j++)
       {
           if(j==4)
           {
               printf(" @");
           }
           else
           {
               printf("  ");
           }
       }
       for(j=1;j<=n-i;j++)
       {
           printf("  ");
       }
       for(j=1;j<=4;j++)
       {
           printf("  ");
       }
       for(j=1;j<=n-i;j++)
       {
        if(j==n-i)
        {
            printf(" @");
        }
        else
            printf("  ");
       }
     for(j=1;j<=2;j++)
     {
         printf("  ");
     }
     for(j=1;j<=i;j++)
     {
         printf("  ");
     }
     for(j=1;j<=1;j++)
     {
         printf(" @");
     }
      for(j=1;j<=4;j++)
      {   if(j==4)
          {printf(" @");
          }
          else
          {
              printf("  ");
          }
      }
      for(j=1;j<=i;j++)
      {   if(j==i)
         {printf(" @");
         }
         else
         {
             printf("  ");
         }
      }


     printf("\n");
    }

    for(i=n;i>=1;i--)
    {  for(j=1;j<=n-i;j++)
       {
           printf("  ");
       }
       for(j=1;j<=6;j++)
       {
           if(j==1||i==1)
           {
               printf(" @");
           }
           else
           {
               printf("  ");
           }
       }
       for(j=1;j<=n-i;j++)
       {
           printf("  ");
       }
       for(j=1;j<=i;j++)
       {
           if(j==i)
           {
               printf(" @");
           }
           else
           {
               printf("  ");
           }
       }
       for(j=1;j<=3;j++)
       {
           if(i==1)
           {
               printf(" @");
           }
           else
           {
               printf("  ");
           }
       }
       for(j=1;j<=2*i-1;j++)
       {
           if(j==2*i-1 )
           {
               printf(" @");
           }
           else
           {
               printf("  ");
           }
       }

    for(j=1;j<4;j++)
    {
        printf("  ");
    }
    for( j=1;j<=n-i;j++)
    {
        printf("  ");
    }

for( j=1;j<=n-i;j++)
    {
        printf("  ");
    }
    for(j=1;j<=i;j++)
    { if(j==1)
        {printf(" @");
        }
        else
        {
            printf("  ");
        }
    }
    for(j=1;j<i;j++)
    {   if(j==i-1)
        {printf(" @");
        }
        else
        {
            printf("  ");
        }
    }
    for(j=1;j<=n-i;j++)
    {
        printf("  ");
    }
    for(j=1;j<=6;j++)
    {
        printf("  ");
    }
     for(j=1;j<=1;j++)
     {
         printf(" @");
     }
     for(j=1;j<=4;j++)
      {   if(j==4)
          {printf(" @");
          }
          else
          {
              printf("  ");
          }
      }
      for(j=1;j<=i;j++)
      {   if(j==i)
         {printf(" @");
         }
         else
         {
             printf("  ");
         }
      }



    printf("\n");

}
{
 printf("                                                              \n");
 printf("                           @        @ @ @ @ @     @ @ @ @ @    \n");
 printf("                          @ @       @         @   @         @   \n");
 printf("                         @   @      @ @ @ @ @     @ @ @ @ @      \n");
 printf("                        @ @ @ @     @             @               \n");
 printf("                       @        @   @             @                \n");
 printf("                      @          @  @             @                 \n");
 printf("                     @            @ @             @                  \n");
 printf("======================================================================================");
}

}
void vacanthospit(struct address youradd)
{
    FILE *fp;
    struct hosinfo vacanthosp[6];
    int i,j;

    int result1,result2,result3,result4,result5,result6;
    int districtcheck,districtcheck2;

    districtcheck=strcmp(youradd.district,"Dhaka");
    districtcheck2=strcmp(youradd.district,"dhaka");


    districtcheck=strcmp(youradd.district,"Dhaka");
    districtcheck2=strcmp(youradd.district,"dhaka");




    if(districtcheck==0 || districtcheck2==0)
    {


      result1=strcmp(youradd.UpazilaThana,"Badda");

      result2=strcmp(youradd.UpazilaThana,"Mirpur");
      result3=strcmp(youradd.UpazilaThana,"Khilgaon");
      result4=strcmp(youradd.UpazilaThana,"Bashundhara");
      result5=strcmp(youradd.UpazilaThana,"Ramna");
      result6=strcmp(youradd.UpazilaThana,"Dhanmondi");
      if(result1==0||result2==0||result3==0||result4==0||result5==0||result6==0)
        {int op;
        printf("Are you Looking for vacant hospitals? Enter '1' and for Admin access enter '2'\n");
        scanf("%d",&op);

        if(op==2)
        { fp=  fopen("vacant_hospital.txt","wb");
           if(fp==NULL)
           {
             printf("couldnt open file");
             exit(1);
           }
           else
           {  printf("\nEnter  hospital details \n");


             for(i=0;i<2;i++)
             { printf("Enter (%d)Hospital name:\n",i+1);
               fflush(stdin);
               gets(vacanthosp->hosname[i]);
               fflush(stdin);
               printf("Enter no. of ICU rooms:");
               scanf("%d",&vacanthosp->icu[i]);
               printf("Enter no. of ICU rooms booked:");
               scanf("%d",&vacanthosp->icubooked[i]);
               printf("Enter single bed charge per day:BDT");
               scanf("%f",&vacanthosp->payment[i]);
              }
              fwrite(&vacanthosp,sizeof(struct hosinfo),6,fp);
              fclose(fp);
              printf("\nInformation recorded successfully\n");
              printf("Enter '0' to go back to Home section");
              scanf("%d",&j);
              if(j==0)
              {
                  ChooseOption(youradd,your_info);
              }


           }


        }
        else if(op==1)
        {   int j;
            fp=  fopen("vacant_hospital.txt","rb");
           if(fp==NULL)
           {
             printf("couldnt open file");
             exit(1);
           }
           else
           {
                printf(" Hospital name                              ICU beds   ICU booked        charge$/bed/perday\n");
                printf(" ==============                             ========   ==========        ==================\n");
                fread(&vacanthosp,sizeof(struct hosinfo),6,fp);


               for(i=0;i<6;i++)
              {

                printf("(%d)%s\n",i+1,vacanthosp->hosname[i]);
                printf("                                              %d          %d                 %.3fBDT\n",vacanthosp->icu[i],vacanthosp->icubooked[i],vacanthosp->payment[i]);

              }

              fclose(fp);
              printf("\n\n\nEnter hospital number you want to contact:\n");
              printf("Otherwise enter '0' to go back to Home section");
              scanf("%d",&j);
              if(j==1)
              {
                  printf("\n\n**AMZ hospital contact now +8801847-331010\n");
              }
              if(j==2)
              {
                  printf("\n\n**Delta Healthcare Mirpur branch .Contact now  +8801841-914914\n");

              }
              if(j==3)
              {
                  printf("\n\n**Betterlife Hospital Rampura,Contact now +88 01715-839400\n");

              }

              if(j==0)
              {
                  ChooseOption(youradd,your_info);
              }





           }





        }
        else
         {
          printf("invalid option choosen");
         }
        }
     else
        {
            printf("Sorry! This region is not found,try to type the name with first letter in capital letter and try again\n");
            printf("if still not working,then these regions are not in the program list.");
        }


    }
    else
    {
        printf("Sorry! This service is not available in these regions");

    }

}
void ChooseOption(struct address youradd,struct sign_up your_info)
{
    printf("\nChoose your options in the list below\n");
printf("=======================================\n");

printf("         (1)Consult with doctors\n");
printf("         (2)Vaccination\n");
printf("         (3)Looking for Vacant icu beds/got information about vacant icu beds?\n");

printf("\n\n\nENTER option....\n");

int option;
scanf("%d",&option);

switch(option)
    {
    case 1 :
         DoctorConsult(your_info,youradd);
         break;
    case 2 :
          Vaccination(your_info);
         break;
    case 3 :
         vacanthospit(youradd);
         break;
   default :
    {
        printf("****** ERROR! ******");
    }

    }

}



void DoctorConsult(struct sign_up your_info,struct address youradd)
{
    struct information match[10];


    int look_for_hospital;
    int saturation;

    printf("Hello %s !\n\nHow can we help you today?\n",your_info.name);
    printf("To verify your symptoms of Covid press 'S' \n");
    char press;
    scanf(" %c", &press);

    if (press == 'S')
    {
        printf("\nMatch your symptoms: (Just state \"YES\" or \"NO\") \n1.Fever: ");
        scanf("%s", &match[0].symptoms);
        printf("2.Cough: ");
        scanf("%s", &match[1].symptoms);
        printf("3.Tiredness: ");
        scanf("%s", &match[2].symptoms);
        printf("4.Loss of taste or smell: ");
        scanf("%s", &match[3].symptoms);
        printf("5.Shortness of breath:");
        scanf("%s",&match[4].symptoms);
        printf("6.Loss of speech or Mobility:");
        scanf("%s",&match[5].symptoms);
        printf("7.Chest pain:");
        scanf("%s",&match[6].symptoms);
        printf("8.Tiredness:");
        scanf("%s",&match[7].symptoms);


        if (match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y'&&match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y')
        {
            int saturation;
            printf("Enter your oxygen saturation:");
            scanf("%d",&saturation);
            {


                if(92<saturation && 100>saturation)
                {
                    printf("You're oxygen level is perfectly fine \n \n Still you matched all the common symptoms criteria of COVID-19. We are suggesting you to these common prescribed medicine.\n1.Napa,\n2.Histasin,\n3.Ivera,\n4.Vitamin C capsule..");
                }
                else if(80<=saturation && 92>saturation)
                {
                    printf("Your oxygen level is getting worser\nAs per the symptoms, We'll suggest you to do a covid test");

                }
                else
                {
                    printf("your oxygen level is in crucial condition Press 3 to look for vacant icu room in hospitals:");
                    scanf("%d",&look_for_hospital);
                    if(look_for_hospital==3)
                    {
                      vacanthospit(youradd);
                    }
                    else{printf("invalid number entered,press '3'");}

                }



            }

        }

        else if(match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y'&&match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y' ||match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y'&&match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y' ||match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y'&&match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y' ||match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y'&&match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y' ||match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y'&&match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y' ||match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y'&&match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y' ||match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y'&&match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y' ||match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y'&&match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y' )
        {
            int saturation;
            printf("Enter your oxygen saturation:");
            scanf("%d",&saturation);
            {


                if(92<saturation && 100>saturation)
                {
                    printf("You're oxygen level is perfectly fine \n \n Still you matched all the common symptoms criteria of COVID-19. We are suggesting you to these common prescribed medicine.\n1.Napa,\n2.Histasin,\n3.Ivera,\n4.Vitamin C capsule..");
                }
                else if(80<=saturation && 92>saturation)
                {
                    printf("Your oxygen level is getting worser\n As per the symptoms,We'll suggest you to do a covid test");

                }
                else
                {
                    printf("your oxygen level is in crucial condition Press 3 to look for vacant icu room in hospitals:");
                    scanf("%d",&look_for_hospital);
                    if(look_for_hospital==3)
                    {
                      vacanthospit(youradd);
                    }
                    else{printf("invalid number entered,press '3'");}
                }

            }
        }

        else if(match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y'&&match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y' ||match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y'&&match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y' ||match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y'&&match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y' ||match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y'&&match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y' ||match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y'&&match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y'||match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y'&&match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y' ||match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y'&&match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y' ||match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y'&&match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y'  )
        {
            int saturation;
            printf("Enter your oxygen saturation:");
            scanf("%d",&saturation);
            {


                if(92<saturation && 100>saturation)
                {
                    printf("You're oxygen level is perfectly fine \n \n Still you matched all the common symptoms criteria of COVID-19. We are suggesting you to these common prescribed medicine.\n1.Napa,\n2.Histasin,\n3.Ivera,\n4.Vitamin C capsule..");
                }
                else if(80<=saturation && 92>saturation)
                {
                    printf("Your oxygen level is getting worser\nAs per the symptoms, We'll suggest you to do a covid test");

                }
                else
                {
                    printf("your oxygen level is in crucial condition Press 3 to look for vacant icu room in hospitals:");
                    scanf("%d",&look_for_hospital);
                    if(look_for_hospital==3)
                    {
                      vacanthospit(youradd);
                    }
                    else{printf("invalid number entered,press '3'");}
                }

            }
        }
        else if(match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y'&&match[4].symptoms[0] == 'Y'||match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y'&&match[5].symptoms[0] == 'Y'||match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y'&&match[6].symptoms[0] == 'Y'||match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y'&&match[7].symptoms[0] == 'Y'||match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y'&&match[0].symptoms[0] == 'Y'||match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y'&&match[1].symptoms[0] == 'Y'||match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y'&&match[2].symptoms[0] == 'Y'||match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y'&&match[3].symptoms[0] == 'Y')
        {
            int saturation;
            printf("Enter your oxygen saturation:");
            scanf("%d",&saturation);
            {


                if(92<saturation && 100>saturation)
                {
                    printf("You're oxygen level is perfectly fine \n \n Still you matched all the common symptoms criteria of COVID-19. We are suggesting you to these common prescribed medicine.\n1.Napa,\n2.Histasin,\n3.Ivera,\n4.Vitamin C capsule..");
                }
                else if(80<=saturation && 92>saturation)
                {
                    printf("Your oxygen level is getting worser\nAs per the symptoms, We'll suggest you to do a covid test");

                }
                else
                {
                    printf("your oxygen level is in crucial condition Press 3 to look for vacant icu room in hospitals:");
                    scanf("%d",&look_for_hospital);
                    if(look_for_hospital==3)
                    {
                      vacanthospit(youradd);
                    }
                    else{printf("invalid number entered,press '3'");}
                }

            }
        }
        else if(match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y'||match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y'||match[2].symptoms[0] == 'Y' && match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y'||match[3].symptoms[0] == 'Y' && match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y'||match[4].symptoms[0] == 'Y' && match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y'||match[5].symptoms[0] == 'Y' && match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y'||match[6].symptoms[0] == 'Y' && match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y'||match[7].symptoms[0] == 'Y' && match[0].symptoms[0] == 'Y' && match[1].symptoms[0] == 'Y' && match[2].symptoms[0] == 'Y')
        {
            int saturation;
            printf("Enter your oxygen saturation:");
            scanf("%d",&saturation);
            {


                if(92<saturation && 100>saturation)
                {
                    printf("You're oxygen level is perfectly fine \n \n Still you matched all the common symptoms criteria of COVID-19. We are suggesting you to these common prescribed medicine.\n1.Napa,\n2.Histasin,\n3.Ivera,\n4.Vitamin C capsule..");
                }
                else if(80<=saturation && 92>saturation)
                {
                    printf("Your oxygen level is getting worser\nAs per the symptoms, We'll suggest you to do a covid test");

                }
                else
                {
                    printf("your oxygen level is in crucial condition Press 3 to look for vacant icu room in hospitals:");
                    scanf("%d",&look_for_hospital);
                    if(look_for_hospital==3)
                    {
                      vacanthospit(youradd);
                    }
                    else{printf("invalid number entered,press '3'");}
                }

            }
        }

        else
        {
            printf("\n\nDidn't match all the common symptoms criteria of COVID-19. We are suggesting you to do take some rest , eat healthy foods and maintain social distance from others,");
        }
        //getch();

    }
}
void Vaccination(struct sign_up your_info)
{
    char y[] = "Yes";
   char y1[5],*ptr1,*ptr2;
   char pre;
   int count = 0,vacnum,pregnum;
   printf("Are you vaccinated? \nType Yes/No\n");
   scanf("%s",y1);
   ptr1 = y1;
   ptr2 = y;
   while(*ptr1==*ptr2)
   {
     if(*ptr1=='\0' && *ptr2=='\0'){
        count = 1;
     }
     ptr1++;
     ptr2++;
   }
  char y2[5];
   if(count ==1){
    printf("Did you also give booster dose?\n");
    scanf("%s",y2);
       if(strcmp(y2,y)==0)
       {
           printf("Congratulations! You are done with vaccination");
       }
       else
       {
          printf("Which dose you want to receive?\n1.Pfizer\n2.Moderna\nType 1 or 2 to select\n");
          scanf("%d",&vacnum);
          if(vacnum == 1 && your_info.age>=12 && your_info.age<50)
          {
             infoBooster1();

          }
           else if(vacnum == 1 && your_info.age>=50)
           {
             infoBooster2();
           }
           else if(vacnum == 2 && your_info.age>=50)
           {
             infoBooster2();
           }
           else if(vacnum == 2 && your_info.age>=18 && your_info.age<50)
           {
             infoBooster1();
           }
       }

   }
    else
   {
       fflush(stdin);
       printf("Which dose you want to receive?\n1.Pfizer\n2.Moderna\nType 1 or 2 to select\n");
       scanf("%d",&vacnum);
    if(strcmp(your_info.gender,"M")==0)
    {
        if(vacnum == 1)
        {
           if(your_info.age>=12 && your_info.age<70)
            {
            printf("You are eligible for Pfizer dose");
            }
           else
            {
            printf("You are not eligible for Pfizer dose");
            }
        }
        else
        {
            if(your_info.age >=18 && your_info.age<70)
            {
            printf("You are eligible for Moderna dose");
            }
            else{
                printf("You are not eligible for Moderna dose");
            }
        }

    }
    else
    {
        fflush(stdin);
        printf("Do you have pregnancy?\nType Y/N\n");
        scanf("%c",&pre);
        if(pre == 'Y')
        {
            fflush(stdin);
            printf("How many weeks are running of your pregnancy?");
            scanf("%d",&pregnum);
            if(pregnum <= 20)
            {
                printf("You are safe for vaccination.\nNo possibility of miscarage");
            }
            else{
                printf("You are not safe for vaccination.\nThere is a huge possibility of miscarage");
            }
        }
        else
        {
          if(vacnum == 1)
          {
           if(your_info.age>=18 && your_info.age<70)
            {
            printf("You are eligible for Pfizer dose");
            }
           else
            {
            printf("You are not eligible for Pfizer dose");
            }
          }
          else{
            if(your_info.age >=18 && your_info.age<70)
            {
            printf("You are eligible for Moderna dose");
            }
            else{
                printf("You are not eligible for Moderna dose");
            }
          }

        }
    }
   }
}
void infoBooster1()
{   int month;
    printf("How many months ago you have completed your primary COVID-19 vaccination series?\n");
          scanf("%d",&month);
    switch(month)
             {
             case 1 ... 4:
                printf("You are not eligible for Booster dose");
                break;
                case 5 ... 12:
                printf("Congratulations! You are eligible for Booster dose.\nBut you are only allowed for the first booster dose.");
                break;
             default :
                printf("ERROR!");
                break;
             }
}
void infoBooster2()
{   int month;
    printf("How many months ago you have completed your primary COVID-19 vaccination series?\n");
          scanf("%d",&month);
    switch(month)
             {
             case 1 ... 4:
                printf("You are not eligible for Booster dose");
                break;
                case 5 ... 12:
                printf("Congratulations! You are eligible for Booster dose.\nAnd you are also allowed for the second booster dose.");
                break;
             default :
                printf("ERROR!");
                break;
             }
}
