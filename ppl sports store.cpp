#include<stdio.h>

int main(){
	printf("Welcome to the online sports store\n\n");
	int n = 1;
	while(n>0){
		int choice;
		int choice1;
		int choice2, choice3 , choice4;
		printf("""1.Balls\n2.Bats\n3.Racquets\n4.Nets\n5.clubs\n6.sports wear\n7.Exit\n""");
		printf("your choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1: 
			printf("1.Cricket ball\n2.football\n3.Volleyball");
			scanf("%d", &choice1);
			switch(choice1){
				case 1:
					printf("1.Order 2 piece leather\n2.Order 4 piece leather");
					scanf("%d", &choice2);
					switch(choice2){
						case 1:
							printf("Order Placed\n\n!");
							break;
						case 2:
							printf("Order Placed\n\n!");
							break;
				}
				case 2:
					printf("1.	Football Ball Training Size 5 (above 12 years) F100 - Yellow	Rs.299");
					printf("\n2.	Football Ball Match Size 5 FIFA Basic F500 - White Yellow	Rs.1,099");
					printf("\n3.	Football Ball Size 5 F300 – Red	Rs.699");
					printf("\n4.	Football Ball Match Size 5 FIFA Basic F550 - White Red	Rs.1,499");
					printf("\n5.	Kids Football Ball Size 1 Sunny 300 - Turquoise Blue	Rs.149");
					printf("\n6.	Kids Football Ball Size 5 Sunny 300 – Orange	Rs.199");
					printf("\n7.	Football Ball Training Size 3 (Below 8 years) First – Blue	Rs.299");
					printf("\n8.	Football Ball Training Size 5 F500 Print - Pink Black	Rs.899");
					printf("\n9.	Hybrid Football F500 Size 4 - White	Rs.799");
					printf("\n10.	F100 Size 4 Football - Blue	Rs.699");
					switch(choice2){
						case 1:
							printf("Order Placed\n\n!");
							break;
						case 2:
							printf("Order Placed\n\n!");
							break;
						case 3:
							printf("Order Placed\n\n!");
							break;
						case 4:
							printf("Order Placed\n\n!");
							break;
						case 5:
							printf("Order Placed\n\n!");
							break;
						case 6:
							printf("Order Placed\n\n!");
							break;
						case 7:
							printf("Order Placed\n\n!");
							break;
						case 8:
							printf("Order Placed\n\n!");
							break;
						case 9:
							printf("Order Placed\n\n!");
							break;
						case 10:
							printf("Order Placed\n\n!");
							break;
					}
					break;
					case 3:
						printf("1	Nivia Kross Rubber Hand Stitched Rs. 800");
						printf("\n2	Nivia VB-540 Spiral Volleyball Rs. 650");
						printf("\n3	Nivia Hi-Grip Volleyball Rs. 900");
						printf("\n4	Vector X Spike Rubber Rs. 1200");
						printf("\n5	Mikasa Squish Volleyball Rs. 2000");
						switch(choice2){
						case 1:
							printf("Order Placed\n\n!");
							break;
						case 2:
							printf("Order Placed\n\n!");
							break;
						case 3:
							printf("Order Placed\n\n!");
							break;
						case 4:
							printf("Order Placed\n\n!");
							break;
						case 5:
							printf("Order Placed\n\n!");
							break;
						}
						break;
		}
		
			case 2:
			printf("1	New balance BURN	Kashmir Willow	1200 – 1250 grams Rs. 1500");
			printf("\n2	SG Cobra Xtreme	English Willow	1180 – 1190 grams Rs. 1500");
			printf("\n3	New Balance CW DC 480	Kashmir Willow	1200 – 1275 grams Rs. 1600");
			printf("\n3	New Balance CW DC 480	Kashmir Willow	1200 – 1275 grams Rs. 1550");
			printf("\n4	SG Scorer Classic	Kashmir Willow	1100 grams Rs. 1700");
			printf("\n5	SG Scorer Classic	Kashmir Willow	1200 grams Rs. 1090");
			printf("\n6	Gray-Nicolls POWER BOW Smash Exclusive 2021	Kashmir Willow	1180-1250 grams Rs. 1900");
			switch(choice2){
						case 1:
							printf("Order Placed\n\n!");
							break;
						case 2:
							printf("Order Placed\n\n!");
							break;
						case 3:
							printf("Order Placed\n\n!");
							break;
						case 4:
							printf("Order Placed\n\n!");
							break;
						case 5:
							printf("Order Placed\n\n!");
							break;
						case 6:
							printf("Order Placed\n\n!");
			}	
			break;
		
    case 3:
    {
        printf("1.Order Head-Heavy racquet  - Rs. 1899/\n2.Order Even-Balanced racquet - Rs. 2599/\n3.Order Head-Light racquet - Rs. 1999/");
        scanf("%d", &choice2);
        switch (choice2)
        {
        case 1:
        {
            printf("Order Placed\n\n");
            break;
        }
        case 2:
        {
            printf("Order Placed\n\n");
            break;
        }
        case 3:
        {
            printf("Order Placed\n\n");
            break;
        }
        }
    }
    case 4:
    {
        printf("1.Order Badminton Net - Rs.2999/\n2.Order Volleyball Net - Rs.3999/\n3.Order Basketball Net - Rs.1499/\n");
        scanf("%d", &choice2);
        switch (choice2)
        {
        case 1:
        {
            printf("Order Placed\n\n");
            break;
        }
        case 2:
        {
            printf("Order Placed\n\n");
            break;
        }
        case 3:
        {
            printf("Order Placed\n\n");
            break;
        }
        }
    }
    case 5:
    {
        printf("1.Order Iron Club - Rs.3599/\n2.Order Wood Club - Rs.2990/\n3.Order Putter - Rs.7699/\n4.Order Hybrid Club - Rs.12999/\n5.Order Wedge - Rs.4799/\n6.Order Sand Wedge - Rs.4199/\n7.Order Pitching Wedge - Rs.3999/\n8.Order Lob Wedge - Rs.5099/\n9.Order Gap Wedge - Rs.3099/");
        scanf("%d", &choice2);
        switch (choice2)
        {
        case 1:
        {
            printf("Order Placed\n\n");
            break;
        }
        case 2:
        {
            printf("Order Placed\n\n");
            break;
        }
        case 3:
        {
            printf("Order Placed\n\n");
            break;
        }
        case 4:
        {
            printf("Order Placed\n\n");
            break;
        }
        case 5:
        {
            printf("Order Placed\n\n");
            break;
        }
        case 6:
        {
            printf("Order Placed\n\n");
            break;
        }
        case 7:
        {
            printf("Order Placed\n\n");
            break;
        }
        case 8:
        {
            printf("Order Placed\n\n");
            break;
        }
        case 9:
        {
            printf("Order Placed\n\n");
            break;
        }
        }
    }
    case 6:
    {
    printf("1.Order Sports Tshirt\n2.Order Sports Shots\n3.Order Sports Shoes\n4.Order Sports trousers \n5.Order Sports bra \n");
    scanf("%d",&choice2);
    switch(choice2)
    {
        case 1:
        {
            printf("Rs.499/per piece");
            printf("Order Placed\n\n");
            break;
        }
        case 2:
        {
            printf("Rs.399/per piece");
            printf("Order Placed\n\n");
            break;
        }
        case 3:
        {
            printf("1.Size 3\n2.Size 4\n3.Size 5\n4.Size 6\n5.Size 7\n6.Size 8\n7.Size 9\n8.Size 10\n9.Size 11\n10.Size 12\n");
            scanf("%d",&choice3);
            switch(choice3)
            {
                case 1:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 2:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 3:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 4:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 5:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 6:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 7:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 8:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 9:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 10:
                {
                    printf("Order Placed\n\n");
                    break;
                }
            }
        }
        case 4:
        {
            printf("1.Size 29\n2.Size 30\n3.Size 31\n4.Size 32\n5.Size 33\n6.Size 34\n7.Size 35\n8.Size 36\n9.Size 37\n10.Size 38\n11.Size 39\n12.Size 40\n");
            scanf("%d",&choice3);
            switch(choice3)
            {
            case 1:
            {
                    printf("1.Size A\n2.Size B\n3.Size C\n4.Size D\n5.Size E\n6.Size F\n7.Size G\n");
                    scanf("%d",&choice4);
                    switch(choice4)
                    {
                case 1:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 2:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 3:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 4:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 5:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 6:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 7:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                    }
            }

            case 2:
            {
                printf("1.Size A\n2.Size B\n3.Size C\n4.Size D\n5.Size E\n6.Size F\n7.Size G\n");
                scanf("%d",&choice4);
                switch(choice4)
                {
                case 1:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 2:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 3:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 4:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 5:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 6:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 7:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                    }
            }
            case 3:
            {
                printf("1.Size A\n2.Size B\n3.Size C\n4.Size D\n5.Size E\n6.Size F\n7.Size G\n");
                scanf("%d",&choice4);
                switch(choice4)
                {
                case 1:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 2:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 3:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 4:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 5:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 6:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 7:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                    }
            }
            case 4:
            {
                printf("1.Size A\n2.Size B\n3.Size C\n4.Size D\n5.Size E\n6.Size F\n7.Size G\n");
                scanf("%d",&choice4);
                switch(choice4)
                {
                case 1:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 2:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 3:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 4:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 5:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 6:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 7:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                    }
            }
            case 5:
            {
                printf("1.Size A\n2.Size B\n3.Size C\n4.Size D\n5.Size E\n6.Size F\n7.Size G\n");
                scanf("%d",&choice4);
                switch(choice4)
                {
                case 1:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 2:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 3:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 4:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 5:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 6:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 7:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                    }
            }
            case 6:
            {
                printf("1.Size A\n2.Size B\n3.Size C\n4.Size D\n5.Size E\n6.Size F\n7.Size G\n");
                scanf("%d",&choice4);
                switch(choice4)
                    {
                case 1:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 2:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 3:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 4:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 5:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 6:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 7:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                    }
            }
            case 7:
            {
                printf("1.Size A\n2.Size B\n3.Size C\n4.Size D\n5.Size E\n6.Size F\n7.Size G\n");
                scanf("%d",&choice4);
                switch(choice4)
                {
                case 1:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 2:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 3:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 4:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 5:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 6:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 7:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                    }
            }
            case 8:
            {
                printf("1.Size A\n2.Size B\n3.Size C\n4.Size D\n5.Size E\n6.Size F\n7.Size G\n");
                scanf("%d",&choice4);
                switch(choice4)
                {
                case 1:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 2:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 3:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 4:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 5:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 6:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 7:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                    }
            }
            case 9:
            {
                printf("1.Size A\n2.Size B\n3.Size C\n4.Size D\n5.Size E\n6.Size F\n7.Size G\n");
                scanf("%d",&choice4);
                switch(choice4)
                    {
                case 1:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 2:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 3:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 4:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 5:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 6:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 7:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                    }
            }
            case 10:
            {
                printf("1.Size A\n2.Size B\n3.Size C\n4.Size D\n5.Size E\n6.Size F\n7.Size G\n");
                scanf("%d",&choice4);
                switch(choice4)
                {
                case 1:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 2:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 3:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 4:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 5:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 6:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 7:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                    }
            }
            case 11:
            {
                printf("1.Size A\n2.Size B\n3.Size C\n4.Size D\n5.Size E\n6.Size F\n7.Size G\n");
                scanf("%d",&choice4);
                switch(choice4)
                {
                case 1:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 2:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 3:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 4:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 5:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 6:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 7:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                    }
            }
            case 12:
            {
                printf("1.Size A\n2.Size B\n3.Size C\n4.Size D\n5.Size E\n6.Size F\n7.Size G\n");
                scanf("%d",&choice4);
                switch(choice4)
                {
                case 1:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 2:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 3:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 4:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 5:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 6:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                case 7:
                {
                    printf("Order Placed\n\n");
                    break;
                }
                    }
            }
            default:
            {
                printf("WRONG INPUT");
            }
            }
    }
}

}}}}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//	char uname[20] = "yogya";
//	char uname1[20];
//	char password[20] = "yogya@123";
//	char password1[20];
//	printf("press 1 to create an account\n");
//	printf("press 2 to log in\n");
//	printf("your choice: ");
//	int choice;
//	scanf("%d", &choice);
//	if(choice==1){
//		printf("create a username: ");
//		scanf("%c", &uname1);
//		printf("create a password: \n");
//		scanf("%c", &password1);
//	}
//	else if(choice==2){
//		printf("enter username: \n");
//		scanf("%c", &uname1);
//		printf("%c", &password1);
//	}		
	

