#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
printf("lutfen cumleyi giriniz:");
char cumle[1000];
gets(cumle);
int i,sayac=0;
for(i=0;cumle[i];i++){
	char karakter=cumle[i];
if(karakter=='a'||karakter=='e'||karakter=='i'||karakter=='o'||karakter=='u'||karakter=='A'||karakter=='E'||karakter=='I'||karakter=='O'||karakter=='U')
{
sayac++;	
}
}
printf("cumledeki sesli harf sayisi %d'dir.",sayac);
	return 0;
}
