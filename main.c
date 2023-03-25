//Experiment 2 To initialise and create an array which accepts user input and prints the number at index
#include<stdio.h>
#include<math.h>
int main(){

    int myNumbers[51];
    printf("please enter the numbers");
    scanf("%d\n%d\n%d\n%d\n%d", &myNumbers[0], &myNumbers[1], &myNumbers[2], &myNumbers[3], &myNumbers[4]);
    int chooseNum;
    printf("Which index");
    scanf("%d",&chooseNum);
    printf("%d", myNumbers[chooseNum]);
    return 0;
}