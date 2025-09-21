#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define CLRSCR() printf("\e[1;1H\e[2J")

int possibleMove(char move, int str1[], int str2[], int str3[], int str4[])
{
    int possible = 0;
    int i;
    if (move == 'w')
    {
        for (i = 0; i<4; i++)
        {
            if (str1[i] == str2[i] && str1[i] != 0)
            {
                possible = 1;
                break;
            }
            if (str1[i] == str3[i] && str1[i] !=0 && str2[i] == 0)
            {
                possible = 1;
                break;
            }
            if (str1[i] == str4[i] && str1[i] != 0 && str2[i] == 0 && str3[i] == 0)
            {
                possible = 1;
                break;
            }
            if (str2[i] == str3[i] && str2[i] != 0)
            {
                possible = 1;
                break;
            }
            if (str2[i] == str4[i] && str2[i] != 0 && str3[i] ==0)
            {
                possible = 1;
                break;
            }
            if (str3[i] == str4[i] && str3[i] != 0)
            {
                possible = 1;
                break;
            }
            if (str1[i] == 0 && str2[i] !=0)
            {
                possible = 1;
                break;
            }
            if (str2[i] == 0 && str3[i] !=0)
            {
                possible = 1;
                break;
            }
            if (str3[i] == 0 && str4[i] !=0)
            {
                possible = 1;
                break;
            }
        }  
    }
    if (move == 's')
    {
        for (i = 0; i<4; i++)
        {
            if (str4[i] == str3[i] && str4[i] != 0)
            {
                possible = 1;
                break;
            }
            if (str4[i] == str2[i] && str4[i] !=0 && str3[i] == 0)
            {
                possible = 1;
                break;
            }
            if (str4[i] == str1[i] && str4[i] != 0 && str3[i] == 0 && str2[i] == 0)
            {
                possible = 1;
                break;
            }
            if (str3[i] == str2[i] && str3[i] != 0)
            {
                possible = 1;
                break;
            }
            if (str3[i] == str1[i] && str3[i] != 0 && str2[i] ==0)
            {
                possible = 1;
                break;
            }
            if (str2[i] == str1[i] && str2[i] != 0)
            {
                possible = 1;
                break;
            }
            if (str4[i] == 0 && str3[i] !=0)
            {
                possible = 1;
                break;
            }
            if (str3[i] == 0 && str2[i] !=0)
            {
                possible = 1;
                break;
            }
            if (str2[i] == 0 && str1[i] !=0)
            {
                possible = 1;
                break;
            }
        }  
    }
    if (move == 'a')
    {
        if (str1[0] == str1[1] && str1[1] !=0)
        {
            possible = 1;
        }
        if (str1[0] == str1[2] && str1[0] !=0 && str1[1] == 0)
        {
            possible = 1;
        }
        if (str1[0] == str1[3] && str1[0] !=0 && str1[1] ==0 && str1[2] == 0)
        {
            possible = 1;
        }
        if (str1[1] == str1[2] && str1[1] !=0)
        {
            possible = 1;
        }
        if (str1[1] == str1[3] && str1[1] !=0 && str1[2] == 0)
        {
            possible = 1;
        }
        if (str1[2] == str1[3] && str1[2] !=0)
        {
            possible = 1;
        }
        if (str2[0] == str2[1] && str2[1] !=0)
        {
            possible = 1;
        }
        if (str2[0] == str2[2] && str2[0] !=0 && str2[1] == 0)
        {
            possible = 1;
        }
        if (str2[0] == str2[3] && str2[0] !=0 && str2[1] ==0 && str2[2] == 0)
        {
            possible = 1;
        }
        if (str2[1] == str2[2] && str2[1] !=0)
        {
            possible = 1;
        }
        if (str2[1] == str2[3] && str2[1] !=0 && str2[2] == 0)
        {
            possible = 1;
        }
        if (str2[2] == str2[3] && str2[2] !=0)
        {
            possible = 1;
        }
        if (str3[0] == str3[1] && str3[1] !=0)
        {
            possible = 1;
        }
        if (str3[0] == str3[2] && str3[0] !=0 && str3[1] == 0)
        {
            possible = 1;
        }
        if (str3[0] == str3[3] && str3[0] !=0 && str3[1] ==0 && str3[2] == 0)
        {
            possible = 1;
        }
        if (str3[1] == str3[2] && str3[1] !=0)
        {
            possible = 1;
        }
        if (str3[1] == str3[3] && str3[1] !=0 && str3[2] == 0)
        {
            possible = 1;
        }
        if (str3[2] == str3[3] && str3[2] !=0)
        {
            possible = 1;
        }
        if (str4[0] == str4[1] && str4[1] !=0)
        {
            possible = 1;
        }
        if (str4[0] == str4[2] && str4[0] !=0 && str4[1] == 0)
        {
            possible = 1;
        }
        if (str4[0] == str4[3] && str4[0] !=0 && str4[1] ==0 && str4[2] == 0)
        {
            possible = 1;
        }
        if (str4[1] == str4[2] && str4[1] !=0)
        {
            possible = 1;
        }
        if (str4[1] == str4[3] && str4[1] !=0 && str4[2] == 0)
        {
            possible = 1;
        }
        if (str4[2] == str4[3] && str4[2] !=0)
        {
            possible = 1;
        }
        for (i=0; i<3; i++)
        {
            if (str1[i] == 0 && str1[i+1] !=0)
            {
                possible = 1;
                break;
            }
            if (str2[i] == 0 && str2[i+1] !=0)
            {
                possible = 1;
                break;
            }
            if (str3[i] == 0 && str3[i+1] !=0)
            {
                possible = 1;
                break;
            }
            if (str4[i] == 0 && str4[i+1] !=0)
            {
                possible = 1;
                break;
            }
        }

    }
    if (move == 'd')
    {
        if (str1[3] == str1[2] && str1[3] !=0)
        {
            possible = 1;
        }
        if (str1[3] == str1[1] && str1[3] !=0 && str1[2] == 0)
        {
            possible = 1;
        }
        if (str1[3] == str1[0] && str1[3] !=0 && str1[2] ==0 && str1[1] == 0)
        {
            possible = 1;
        }
        if (str1[2] == str1[1] && str1[2] !=0)
        {
            possible = 1;
        }
        if (str1[2] == str1[0] && str1[2] !=0 && str1[1] == 0)
        {
            possible = 1;
        }
        if (str1[1] == str1[0] && str1[1] !=0)
        {
            possible = 1;
        }
        if (str2[3] == str2[2] && str2[3] !=0)
        {
            possible = 1;
        }
        if (str2[3] == str2[1] && str2[3] !=0 && str2[2] == 0)
        {
            possible = 1;
        }
        if (str2[3] == str2[0] && str2[3] !=0 && str2[2] ==0 && str2[1] == 0)
        {
            possible = 1;
        }
        if (str2[2] == str2[1] && str2[2] !=0)
        {
            possible = 1;
        }
        if (str2[2] == str2[0] && str2[2] !=0 && str2[1] == 0)
        {
            possible = 1;
        }
        if (str2[1] == str2[0] && str2[1] !=0)
        {
            possible = 1;
        }
        if (str3[3] == str3[2] && str3[3] !=0)
        {
            possible = 1;
        }
        if (str3[3] == str3[1] && str3[3] !=0 && str3[2] == 0)
        {
            possible = 1;
        }
        if (str3[3] == str3[0] && str3[3] !=0 && str3[2] ==0 && str3[1] == 0)
        {
            possible = 1;
        }
        if (str3[2] == str3[1] && str3[2] !=0)
        {
            possible = 1;
        }
        if (str3[2] == str3[0] && str3[2] !=0 && str3[1] == 0)
        {
            possible = 1;
        }
        if (str3[1] == str3[0] && str3[1] !=0)
        {
            possible = 1;
        }
        if (str4[3] == str4[2] && str4[3] !=0)
        {
            possible = 1;
        }
        if (str4[3] == str4[1] && str4[3] !=0 && str4[2] == 0)
        {
            possible = 1;
        }
        if (str4[3] == str4[0] && str4[3] !=0 && str4[2] ==0 && str4[1] == 0)
        {
            possible = 1;
        }
        if (str4[2] == str4[1] && str4[2] !=0)
        {
            possible = 1;
        }
        if (str4[2] == str4[0] && str4[2] !=0 && str4[1] == 0)
        {
            possible = 1;
        }
        if (str4[1] == str4[0] && str4[1] !=0)
        {
            possible = 1;
        }
        for (i=3; i>0; i--)
        {
            if (str1[i] == 0 && str1[i-1] !=0)
            {
                possible = 1;
                break;
            }
            if (str2[i] == 0 && str2[i-1] !=0)
            {
                possible = 1;
                break;
            }
            if (str3[i] == 0 && str3[i-1] !=0)
            {
                possible = 1;
                break;
            }
            if (str4[i] == 0 && str4[i-1] !=0)
            {
                possible = 1;
                break;
            }
        }
    }
    if (move == 'e')
    {
        possible = 1;
    }
    if (possible == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int str1[] = {0, 0, 0, 0};
    int str2[] = {0, 0, 0, 0};
    int str3[] = {0, 0, 0, 0};
    int str4[] = {0, 0, 0, 0};
    char input;
    char left = 'a';
    char right = 'd';
    char up = 'w';
    char down = 's';
    char exit = 'e';
    int lost = 0;
    int empty = 0;
    int placed = 0;
    int turn = 1;
    int score = 0;
    int lostValue =0;
    int trueRow, row, column, i, j, k, value, timer, realInput, realMove;
    
    CLRSCR();
    while (!lost)
    {
        //if not turn 1 make moves based on user input
        if (turn > 1)
        {
            do
            {
                printf("please input either w, a, s, or d: ");
                scanf(" %c", &input);
                if (input == exit || input == up || input == down || input == left || input == right)
                {
                    realInput = possibleMove(input, str1, str2, str3, str4);
                }
                else
                {
                    realInput = 0;
                    printf("please enter a valid move\n");
                }
            } while (!realInput);
            CLRSCR();
            if (input == exit)
            {
                return -1;
            }
            if (input == up)
            {
                for (i = 0; i < 4; i++)
                {
                if (str3[i] == 0)
                {
                    str3[i] = str4[i];
                    str4[i] = 0;
                } 
                if (str2[i] == 0)
                {
                    str2[i] = str3[i];
                    str3[i] = str4[i];
                    str4[i] = 0;
                }
                if (str1[i] == 0)
                {
                    str1[i] = str2[i];
                    str2[i] = str3[i];
                    str3[i] = str4[i];
                    str4[i] = 0;
                } 
                    if (str1[i] == str2[i])
                    {
                        str1[i] = str1[i] * 2;
                        score = score + str1[i];
                        str2[i] = str3[i];
                        str3[i] = str4[i];
                        str4[i] = 0;
                    }
                    if (str2[i] == str3[i])
                    {
                            str2[i] = str2[i] * 2;
                            score = score + str2[i];
                            str3[i] = str4[i];
                            str4[i] = 0;
                    }
                    if (str3[i] == str4[i])
                    {
                        str3[i] = str3[i] * 2;
                        score = score + str3[i];
                        str4[i] = 0;
                    }
                }
            }
            if (input == down)
            {
                for (i = 0; i < 4; i++)
                {
                if (str2[i] == 0)
                {
                    str2[i] = str1[i];
                    str1[i] = 0;
                }
                if (str3[i] == 0)
                {
                    str3[i] = str2[i];
                    str2[i] = str1[i];
                    str1[i] = 0;
                }
                if (str4[i] == 0)
                {
                    str4[i] = str3[i];
                    str3[i] = str2[i];
                    str2[i] = str1[i];
                    str1[i] = 0;
                }
                    if (str4[i] == str3[i])
                    {
                        str4[i] = str4[i] * 2;
                        score = score + str4[i];
                        str3[i] = str2[i];
                        str2[i] = str1[i];
                        str1[i] = 0;
                    }
                    else
                    {
                        if (str3[i] == str2[i])
                        {
                            str3[i] = str3[i] * 2;
                            score = score + str3[i];
                            str2[i] = str1[i];
                            str1[i] = 0;
                        }
                        else
                        {
                            if (str2[i] == str1[i])
                            {
                                str2[i] = str2[i] * 2;
                                score = score + str2[i];
                                str1[i] = 0;
                            }
                        }
                    }
                }
            }
            if (input == left)
            {
                     if (str4[2] == 0)
                        {
                            str4[2] = str4[3];
                            str4[3] = 0;
                        }
                    if (str4[1] == 0)
                        {
                            str4[1] = str4[2];
                            str4[2] = str4[3];
                            str4[3] = 0;
                        } 
                    if (str4[0] == 0)
                        {
                            str4[0] = str4[1];
                            str4[1] = str4[2];
                            str4[2] = str4[3];
                            str4[3] = 0;
                        }
                    if (str3[2] == 0)
                        {
                            str3[2] = str3[3];
                            str3[3] = 0;
                        }
                    if (str3[1] == 0)
                        {
                            str3[1] = str3[2];
                            str3[2] = str3[3];
                            str3[3] = 0;
                        } 
                    if (str3[0] == 0)
                        {
                            str3[0] = str3[1];
                            str3[1] = str3[2];
                            str3[2] = str3[3];
                            str3[3] = 0;
                        }
                    if (str2[2] == 0)
                        {
                            str2[2] = str2[3];
                            str2[3] = 0;
                        }
                    if (str2[1] == 0)
                        {
                            str2[1] = str2[2];
                            str2[2] = str2[3];
                            str2[3] = 0;
                        }  
                    if (str2[0] == 0)
                        {
                            str2[0] = str2[1];
                            str2[1] = str2[2];
                            str2[2] = str2[3];
                            str2[3] = 0;
                        }
                    if (str1[2] == 0)
                        {
                            str1[2] = str1[3];
                            str1[3] = 0;
                        }
                    if (str1[1] == 0)
                        {
                            str1[1] = str1[2];
                            str1[2] = str1[3];
                            str1[3] = 0;
                        }
                    if (str1[0] == 0)
                        {
                            str1[0] = str1[1];
                            str1[1] = str1[2];
                            str1[2] = str1[3];
                            str1[3] = 0;
                        }   
                for (i = 0; i < 3; i++)
                {
                    if (str1[i] == str1[i+1])
                    {
                        str1[i] = str1[i] * 2;
                        score = score + str1[i];
                        for (j = 1; j+i < 3; j++)
                        {
                            str1[j+i] = str1[j+i+1];
                        }
                        str1[3] = 0;
                    } 
                    if (str2[i] == str2[i+1])
                    {
                        str2[i] = str2[i] * 2;
                        score = score + str2[i];
                        for (j = 1; j+i < 3; j++)
                        {
                            str2[j+i] = str2[j+i+1];
                        }
                        str2[3] = 0;
                    }   
                    if (str3[i] == str3[i+1])
                    {
                        str3[i] = str3[i] * 2;
                        score = score + str3[i];
                        for (j = 1; j+i < 3; j++)
                        {
                            str3[j+i] = str3[j+i+1];
                        }
                        str3[3] = 0;
                    }    
                    if (str4[i] == str4[i+1])
                    {
                        str4[i] = str4[i] * 2;
                        score = score + str4[i];
                        for (j = 1; j+i < 3; j++)
                        {
                            str4[j+i] = str4[j+i+1];
                        }
                        str4[3] = 0;
                    }          
                }
            }
            if (input == right)
            {
                        if (str4[1] == 0)
                        {
                            str4[1] = str4[0];
                            str4[0] = 0;
                        }
                        if (str4[2] == 0)
                        {
                            str4[2] = str4[1];
                            str4[1] = str4[0];
                            str4[0] = 0;
                        }  
                        if (str4[3] == 0)
                        {
                            str4[3] = str4[2];
                            str4[2] = str4[1];
                            str4[1] = str4[0];
                            str4[0] = 0;
                        } 
                        if (str3[1] == 0)
                        {
                            str3[1] = str3[0];
                            str3[0] = 0;
                        }
                        if (str3[2] == 0)
                        {
                            str3[2] = str3[1];
                            str3[1] = str3[0];
                            str3[0] = 0;
                        }    
                        if (str3[3] == 0)
                        {
                            str3[3] = str3[2];
                            str3[2] = str3[1];
                            str3[1] = str3[0];
                            str3[0] = 0;
                        }
                        if (str2[1] == 0)
                        {
                            str2[1] = str2[0];
                            str2[0] = 0;
                        }
                        if (str2[2] == 0)
                        {
                            str2[2] = str2[1];
                            str2[1] = str2[0];
                            str2[0] = 0;
                        } 
                        if (str2[3] == 0)
                        {
                            str2[3] = str2[2];
                            str2[2] = str2[1];
                            str2[1] = str2[0];
                            str2[0] = 0;
                        }
                        if (str1[1] == 0)
                        {
                            str1[1] = str1[0];
                            str1[0] = 0;
                        }if (str1[2] == 0)
                        {
                            str1[2] = str1[1];
                            str1[1] = str1[0];
                            str1[0] = 0;
                        } 
                        if (str1[3] == 0)
                        {
                            str1[3] = str1[2];
                            str1[2] = str1[1];
                            str1[1] = str1[0];
                            str1[0] = 0;
                        }
                for (i = 3; i > 0; i--)
                {
                    if (str1[i] == str1[i-1])
                    {
                        str1[i] = str1[i] * 2;
                        score = score + str1[i];
                        for (j = 1; i-j > 0; j++)
                        {
                            str1[i-j] = str1[i-j-1];
                        }
                        str1[0] = 0;
                    }        
                    if (str2[i] == str2[i-1])
                    {
                        str2[i] = str2[i] * 2;
                        score = score + str2[i];
                        for (j = 1; i-j > 0; j++)
                        {
                            str2[i-j] = str2[i-j-1];
                        }
                        str2[0] = 0;
                    }        
                    if (str3[i] == str3[i-1])
                    {
                        str3[i] = str3[i] * 2;
                        score = score + str3[i];
                        for (j = 1; i-j > 0; j++)
                        {
                            str3[i-j] = str3[i-j-1];
                        }
                        str3[0] = 0;
                    }        
                    if (str4[i] == str4[i-1])
                    {
                        str4[i] = str4[i] * 2;
                        score = score + str4[i];
                        for (j = 1; i-j > 0; j++)
                        {
                            str4[i-j] = str4[i-j-1];
                        }
                        str4[0] = 0;
                    }        
                }
            }
        }

        //Number spawning
        //get time to generate a random seed for row
        if (turn == 1)
        {
            time_t t = time(NULL);
            srand(t);
        }
        else
        {
            srand(rand());
        }
        row = rand()%4 + 1;
        //check which row the seed found and identify if it is empty
            if (row == 1)
            {
                for (i = 0; !empty && i<4; i++)
                {
                    if (str1[i] == 0)
                    {
                        empty = 1;
                        trueRow = 1;
                    }
                }
                for (i = 0; !empty && i<4; i++)
                {
                    if (str2[i] == 0)
                    {
                        empty = 1;
                        trueRow = 2;
                    }
                }
                for (i = 0; !empty && i<4; i++)
                {
                    if (str3[i] == 0)
                    {
                        empty = 1;
                        trueRow = 3;
                    }
                }
                for (i = 0; !empty && i<4; i++)
                {
                    if (str4[i] == 0)
                    {
                        empty = 1;
                        trueRow = 4;
                    }
                } 
            }
            else
            {
                if (row == 2)
                {
                    for (i = 0; !empty && i<4; i++)
                    {
                        if (str2[i] == 0)
                        {
                            empty = 1;
                            trueRow = 2;
                        }
                    }
                    for (i = 0; !empty && i<4; i++)
                    {
                        if (str3[i] == 0)
                        {
                            empty = 1;
                            trueRow = 3;
                        }
                    }
                    for (i = 0; !empty && i<4; i++)
                    {
                        if (str4[i] == 0)
                        {
                            empty = 1;
                            trueRow = 4;
                        }
                    }
                    for (i = 0; !empty && i<4; i++)
                    {
                        if (str1[i] == 0)
                        {
                            empty = 1;
                            trueRow = 1;
                        }
                    } 
                }
                else
                {
                    if (row == 3)
                    {
                        for (i = 0; !empty && i<4; i++)
                        {
                            if (str3[i] == 0)
                            {
                                empty = 1;
                                trueRow = 3;
                            }
                        }
                        for (i = 0; !empty && i<4; i++)
                        {
                           if (str4[i] == 0)
                            {
                                empty = 1;
                                trueRow = 4;
                            }
                        }
                        for (i = 0; !empty && i<4; i++)
                        {
                            if (str1[i] == 0)
                            {
                                empty = 1;
                                trueRow = 1;
                            }
                        }
                        for (i = 0; !empty && i<4; i++)
                        {
                            if (str2[i] == 0)
                            {
                                empty = 1;
                                trueRow = 2;
                            }
                        }   
                    }
                
                    else
                    {
                        if (row == 4)
                        {
                        for (i = 0; !empty && i<4; i++)
                        {
                            if (str4[i] == 0)
                            {
                                empty = 1;
                                trueRow = 4;
                            }
                        }
                        for (i = 0; !empty && i<4; i++)
                        {
                            if (str1[i] == 0)
                            {
                                empty = 1;
                                trueRow = 1;
                            }
                        }
                        for (i = 0; !empty && i<4; i++)
                        {
                            if (str2[i] == 0)
                            {
                                empty = 1;
                                trueRow = 2;
                            }
                        }
                        for (i = 0; !empty && i<4; i++)
                        {
                            if (str3[i] == 0)
                            {
                                empty = 1;
                                trueRow = 3;
                            }
                        } 
                        }
                    }
                }    
            }
            if (lost == 0)
            {
                //generate a new random seed for column
                srand(rand()); 
                column = rand()%4 + 1;
                //generate a new random seed and declare value to spawn
                srand(rand());
                value = rand()%10 + 1;
                if(value == 10)
                {
                    value = 4;
                }
                else
                {
                    value = 2;
                }
                if (trueRow == 1)
                {   
                    k = 0;
                    while (column < 4 && placed < turn)
                    {   
                        if(str1[column] == 0)
                        {
                            str1[column] = value;
                            placed++;
                        }
                        column ++;
                        k++;
                    }
                    column = column - k;
                    while (column >= 0 && placed < turn)
                    {   
                        if(str1[column] == 0)
                        {
                            str1[column] = value;
                            placed++;
                        }
                        column --;
                    }                
                }
                if (trueRow == 2)
                {
                    k = 0;
                    while (column < 4 && placed < turn)
                    {   
                        if(str2[column] == 0)
                        {
                            str2[column] = value;
                            placed++;
                        }
                        column ++;
                        k++;
                    }
                    column = column - k;
                    while (column >= 0 && placed < turn)
                    {   
                        if(str2[column] == 0)
                        {
                            str2[column] = value;
                            placed++;
                        }
                        column --;
                    }   
                }
                if (trueRow == 3)
                {
                    k = 0;
                    while (column < 4 && placed < turn)
                    {   
                        if(str3[column] == 0)
                        {
                            str3[column] = value;
                            placed++;
                        }
                        column ++;
                        k++;
                    }
                    column = column - k;
                    while (column >= 0 && placed < turn)
                    {   
                        if(str3[column] == 0)
                        {
                            str3[column] = value;
                            placed++;
                        }
                        column --;
                    }   
                }
                if (trueRow == 4)
                {
                    k = 0;
                    while (column < 4 && placed < turn)
                    {   
                        if(str4[column] == 0)
                        {
                            str4[column] = value;
                            placed++;
                        }
                        column ++;
                        k++;
                    }
                    column = column - k;
                    while (column >= 0 && placed < turn)
                    {   
                        if(str4[column] == 0)
                        {
                            str4[column] = value;
                            placed++;
                        }
                        column --;
                    }   
                }
            }
            if (empty)
                {
                    lostValue = (possibleMove('w', str1, str2, str3, str4)+possibleMove('s', str1, str2, str3, str4)+possibleMove('a', str1, str2, str3, str4)+possibleMove('d', str1, str2, str3, str4));
                    if (lostValue == 0)
                    {
                        lost = 1;
                    }
                    else
                    {
                        lostValue = 0;
                    }
                }
                empty = 0;
        //prints rows
        printf("|");
        for (i = 0; i<3; i++) //prints row 1
        {
            printf("%4d ", str1[i]); 
        }
        printf("%4d|\n", str1[i]);
        printf("|");
        for (i = 0; i<3; i++) //prints row 2
        {
        printf("%4d ", str2[i]); 
        }
        printf("%4d|\n", str2[i]);
        printf("|");
        for (i = 0; i<3; i++) //prints row 3
        {
            printf("%4d ", str3[i]); 
        }
        printf("%4d|\n", str3[i]);
        printf("|");
        for (i = 0; i<3; i++) //prints row 4
        {
            printf("%4d ", str4[i]); 
        }
        printf("%4d|\n", str4[i]);
        //finished printing rows
        turn ++;
    }
    printf("You made it to %d turns and scored %d points!\n", turn, score);
}