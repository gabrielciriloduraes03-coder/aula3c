#include <stdio.h>
int main() {
int x;
int y;

printf("Digite x: ");
scanf("%d", &x);
printf("Digite y: ");
scanf("%d", &y); 

if( x == y ) {
printf("x igual a y");
}
if( x != y ) {
printf("x diferente de y");
}
return 0;
}