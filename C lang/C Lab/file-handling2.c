#include<stdio.h>
main(){
	FILE *fp;
	char username[20],ch;
	char email[20];
	int contact,i;
	
	fp=fopen("user.cvs","a");
	
	for(i=0;i<3;i++){
		printf("\n Enter username email contact ");
		scanf("%s %s %d",username,email,&contact);
		fprintf(fp,"%s,%s,%d\n",username,email,contact);
	}
	fclose(fp);
	
	fp=fopen("user.cvs","r");
	printf("\n Username \t email \t contact \n");
	while((ch=getc(fp))!= EOF){
		if(ch==','){
			printf("\t");
			continue;
		}
		printf("%c",ch);
	}
	fclose(fp);
	
}
