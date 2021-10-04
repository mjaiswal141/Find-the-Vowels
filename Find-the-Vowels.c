// Find-the-Vowels
// Enter a string and the program will display the vowels present in the string with it's count
#include <stdio.h>
#include <string.h>

int main() {
    char str[50], temp;
    int cnt=0,i;
    fgets(str, 50, stdin);
    printf("The string that you have entered is as follows:\n%s\n",str);
    printf ("The vowels are:");
    for(i=0; str[i]!='\0'; i++){
        temp=str[i];
        switch (temp){
            case 'a':          case 'A':
            case 'e':          case 'E':
            case 'i':          case 'I':
            case 'o':          case 'O':
            case 'u':          case 'U':cnt++;
            printf (" %c ",temp); 
            break;
        }
        
    }
    printf ("\nThe number of vowels in the string: %d",cnt);
    
    return 0;
}