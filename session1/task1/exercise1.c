#include <stdio.h>
#include <stdlib.h>

int speed_limit, driver_speed, fine, excess_speed = 0;
char input[20];

int get_limit( void )
{
// Get user input for speed limit
  printf("Enter the speed limit: ");
  if (fgets(input, sizeof(input), stdin)) 
  {
    sscanf(input, "%d", &speed_limit);
  }
  return speed_limit;
}

int get_speed( void )
{
// Get user input for speed limit
  printf("Now enter the speed driven: ");
  if (fgets(input, sizeof(input), stdin)) 
  {
    sscanf(input, "%d", &driver_speed);
  }
  return driver_speed;
}

int check_speed(int speed, int limit)
{
  if (driver_speed > speed_limit)
  {
    excess_speed = driver_speed - speed_limit;
  }
  return excess_speed;
}

int fine_amount(int excess_speed)
{
  if (excess_speed <= 10) 
    {
      fine = 50;
    }
    else if (excess_speed <= 20) 
    {
      fine = 100;
    }
    else 
    {
      fine = 200;
    }

    if (fine > 0)
    {
      printf("Fine: $%d\n", fine);
    }
    else 
    {
      printf("No fine needed.\n");
    }
    return 0;
}

int main( void )
{

  get_limit();
  get_speed();
  check_speed(driver_speed, speed_limit);
  fine_amount(excess_speed);

  return 0;
}