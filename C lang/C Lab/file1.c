#include<stdio.h>
main(){
	FILE *fp;
	char data[100],ch;
	fp=fopen("hello1.txt","a");
	printf("Enter string :");
	scanf("%s",&data);
	putc('c',fp);
	
	fprintf(fp, "\n%s\n", data);
	fclose(fp);
	
	fp = fopen("hello1.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and print contents
    printf("\nFile content:\n");
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }
	ch = getc(fp);
	printf("\nch=%c",ch);
    fclose(fp);

}
