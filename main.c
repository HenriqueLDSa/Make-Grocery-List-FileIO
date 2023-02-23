/*
Suppose we are planning a party and we would like to create an array to store our list of 
supplies. Currently our list is stored in a text file with the name of each item to be purchased on 
a line by itself. Write a function called make_grocery_list that reads these items from a file and 
stores them in a two-dimensional character array. Your function should take 2 parameters: a 
pointer to the file and an integer indicating the number of grocery items in the file. It should 
return a pointer to the array of items. Be sure to allocate memory for the array dynamically and 
only allocate as much space as is needed. You may assume that all of the strings stored in the 
file representing grocery items are alphabetic strings of no more than 127 characters (so the 
buffer declared is adequate to initially read in the string).  
*/

#include <stdlib.h> 
#include <string.h> 
#include <stdio.h> 

char ** make_grocery_list (FILE *ifp, int numItems)  
{  
    char buffer[128];  
    char **list = NULL;  
    int i; 



    return list;
} 

// 1. Get the strings from the file and add it to buffer (fscanf)
// 2. Get the string length (while buffer[i] != \0)
// 3. Copy it to list[i][j]
// 4. Clear buffer with \0 (while buffer[i] != \0)