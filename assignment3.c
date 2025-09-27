#include <stdio.h>

char display(char str[])
{

    int i=0;
    while(str[i]!='\0') {
    printf("%c\n",str[i]);
    i++; }
}
int main() {
    char str[] = "MAHI";
    display(str);


}