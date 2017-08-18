#include "door.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/*
100 doors in a row are all initially closed. You make
100 passes by the doors. The first time through, you
visit every door and toggle the door (if the door is
closed, you open it; if it is open, you close it).
The second time you only visit every 2nd door (door
#2, #4, #6, ...). The third time, every 3rd door
(door #3, #6, #9, ...), etc, until you only visit
the 100th door.

Question: What state are the doors in after the last
pass? Which are open, which are closed?

6 doors closed (door1', door2', door3', door4', door5', door6')
doorx = open
doorx' = closed

1st time through: door1, door2, door3, door4, door5, door6
2nd time through: door1, door2', door3, door4', door5, door6'
3rd time through: door1, door2', door3', door4', door5, door6

*/

// Q: How would you optimize this code in terms of memory used and instructions?
// A: 
// a) Save if statement
// b) doors[iteration] = !doors[iteration]
// c) char doors[100]
// d) One for loop if number is a square print open else print closed

int door_slow(void)
{
  static char doors[100+1];
  int i;

  // Initialize state of doors to zero
  memset(doors, 0, sizeof(doors));

  for (i=1; i<100+1; i++)
  {
    int iteration;
    for (iteration = i; iteration<100+1; iteration=iteration+i)
    {
      if (doors[iteration] == 0)
      {
        doors[iteration] = 1;
      }
      else
      {
        doors[iteration] = 0;
      }
    }
  }  
  
  for (i=1; i<100+1; i++)
  {
    printf("door[%i] = %s\n", i, (doors[i] ? "Open":"Closed"));
  }
  return 0;
}

int door_faster(void)
{
  static char doors[100+1];
  int i;
  
  // Initialize state of doors to zero
  memset(doors, 0, sizeof(doors));
  
  for (i=1; i<100+1; i++)
  {
    int iteration;
    for (iteration = i; iteration<100+1; iteration=iteration+i)
    {
      doors[iteration] = !doors[iteration];
    }
    printf("door[%i] = %s\n", i, (doors[i] ? "Open":"Closed"));
  }  
  return 0;
}


int door_fastest(void)
{ 
  int i;
  for (i=1; i<100+1; i++)
  {
    char state = 0;
    int square = sqrt(i);
    if (i == square*square)
    {
      state = 1;
    }
    printf("door[%i] = %s\n", i, (state ? "Open":"Closed"));
  }
  return 0;
}


int door_bug(void)
{
  static char doors[100];
  
  // Initialize state of doors to zero
  memset(doors, 0, sizeof(doors));
  int i;
  for (i=1; i<100; i++)
  {
    int iteration;
    for (iteration = 1; iteration<100; iteration=iteration+i)
    {
      if (doors[iteration] == 0)
      {
        doors[iteration] = 1;
      }
      else
      {
        doors[iteration] = 0;
      }
    }
  }  
  
  for (i=1; i<100; i++)
  {
    printf("door[%i] = %s\n", i, (doors[i] ? "Open":"Closed"));
  }
  return 0;
}





