#include <stdio.h>
#include <unistd.h>

int main(int argc, const char *  argv[])
{

int index;

printf("Starting Basic Sample");

for (index = 1; index <= 5; index++){ 
sleep(1);
printf("\n %i%c...", (index*20), '%');
}

printf("\nBasic Sample Finished.\n");

return (0);

}
