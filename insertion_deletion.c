#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
        int arr[100],size,i,element,position,choice1;

        printf("----------------------------\n");
        printf("Enter 1 For Input Array :\n");
        printf("Enter 2 Exit From Program :\n");
        printf("----------------------------\n");
        scanf("%d",&choice1);
        switch(choice1)
        {
            case 1:
                 {          /**Input The Array Elements**/
                            printf("----------Enter Array Size----------\n");
                            scanf("%d",&size);
                            printf("----------Enter Array Elements----------\n");
                            for(i=0;i<size;i++)
                            {
                                scanf("%d",&arr[i]);
                            }

                        int choice2;
                        for(;;)
                        {
                            printf("------------------------------------------\n");
                            printf("Enter 1 For Insert Element In Array :\n");
                            printf("Enter 2 For Delete Element From Array :\n");
                            printf("Enter 3 For Display The Array Elements :\n");
                            printf("Enter 4 Exit From Program :\n");
                            printf("------------------------------------------\n");
                            scanf("%d",&choice2);
                            switch(choice2)
                            {
                                case 1:     /**Insert The Element**/
                                            printf("----------Enter Position Where You Want Insert Data----------\n");
                                            scanf("%d",&position);
                                            if(size>position)
                                            {
                                                if(arr!='\0')
                                                 {
                                                    if(arr[position]==0)
                                                    {
                                                        printf("----------Enter Element For Insertion----------\n");
                                                        scanf("%d",&element);
                                                        arr[position]=element;
                                                    }
                                                    else
                                                    {
                                                        printf("----------Element Is Already Exist In This Position----------\n");
                                                    }
                                                }
                                                else
                                                {
                                                    printf("----------Array Is Already Full----------\n");
                                                }
                                            }
                                            else
                                            {
                                                printf("----------Invalid Position Entered----------\n");
                                            }
                                            break;

                                case 2:     /**Delete The Element**/
                                            printf("----------Enter Position Where You Want Delete The Data----------\n");
                                            scanf("%d",&position);
                                            if(size>position)
                                            {
                                                if(arr!='\0')
                                                {
                                                    printf("----------Enter Element For Deletion----------\n");
                                                    scanf("%d",&element);

                                                    if(arr[position]==element)
                                                    {

                                                        arr[position]=0;
                                                    }
                                                    else
                                                    {
                                                        printf("----------The Entered Element Is Not Exist In This Position----------\n");
                                                    }
                                                }
                                                else
                                                {
                                                    printf("----------Array Is Already Empty----------\n");
                                                }
                                            }
                                            else
                                            {
                                                printf("----------Invalid Position Entered----------\n");
                                            }
                                            break;

                                case 3:
                                            /**Display The Array Elements**/
                                            printf("----------Array Elements----------\n");
                                            for(i=0;i<size;i++)
                                            {
                                                printf("[%d]: %d\n",i,arr[i]);
                                            }
                                            break;

                                case 4: exit(0);
                                default: printf("----------Wrong choice----------\n");

                            }
                        }
                 }
                 break;
            case 2: exit(0);
            default: printf("Wrong choice ");
        }
}
