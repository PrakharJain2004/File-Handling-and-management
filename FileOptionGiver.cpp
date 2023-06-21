#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,j;
	char ch,r,fname[200],x[100];
	FILE *fp;
	do
{
	printf("\n1.Read the file\n");
	printf("2.Write in a file\n");
	printf("3.Create a file\n");
	printf("4.Delete a file\n");
	printf("Enter option here-> ");
	scanf("%d",&a);
	switch(a)
    {
	case(1):
	{
		printf("Enter file path here-> ");
		scanf("%s",&fname);
		for(i=0;fname[i]!=NULL;i++)
		{
			if(fname[i]==92)
			fname[i]=47;
		}
		for(i=0;fname[i]!='\0';i++)
	{
		if(fname[i]=='"')
		{
			for(j=i;fname[j]!='\0';j++)
			{
				fname[j]=fname[j+1];
			}
			i--;
		}
	}
		fp = fopen(fname,"r");
		if(fp==NULL)
		{
			printf("File Not Found");
		}
		else
		{
		while((ch=fgetc(fp))!=EOF)
	    {
			printf("%c",ch);
		}
		printf("\n");
	    }
	    fclose(fp);
		break;
	}
	case(2):
	{
		printf("Enter file path here-> ");
		scanf("%s",&fname);
		for(i=0;fname[i]!=NULL;i++)
		{
			if(fname[i]==92)
			fname[i]=47;
		}
		for(i=0;fname[i]!='\0';i++)
	{
		if(fname[i]=='"')
		{
			for(j=i;fname[j]!='\0';j++)
			{
				fname[j]=fname[j+1];
			}
			i--;
		}
	}
		fp = fopen(fname,"a");
		if(fp==NULL)
		{
			printf("File Not Found");
		}
		else
		{
		printf("Enter the text you want to Write in the file-> ");
		getchar();
		gets(x);
		fprintf(fp,"%s",x);
		fprintf(fp,"\n");
		printf("Written Succesfully");
		fclose(fp);
	    }
		break;
	}
	case(3):
	    {
		    printf("Enter the file path with name here-> ");
		    scanf("%s",&fname);
		    for(i=0;fname[i]!=NULL;i++)
		{
			if(fname[i]==92)
			fname[i]=47;
		}
		    for(i=0;fname[i]!='\0';i++)
	{
		if(fname[i]=='"')
		{
			for(j=i;fname[j]!='\0';j++)
			{
				fname[j]=fname[j+1];
			}
			i--;
		}
	}
		    fp = fopen(fname,"a");
		    if(fp==NULL)
	        {
		        printf("File Not Created");
	        }
	        else
	        {
		        printf("File Created Succesfully");
	        }
	        fclose(fp);
	        break;
	    }
	case(4):
		{
			printf("Enter file path here-> ");
		    scanf("%s",&fname);
		    for(i=0;fname[i]!=NULL;i++)
		{
			if(fname[i]==92)
			fname[i]=47;
		}
		    for(i=0;fname[i]!='\0';i++)
	{
		if(fname[i]=='"')
		{
			for(j=i;fname[j]!='\0';j++)
			{
				fname[j]=fname[j+1];
			}
			i--;
		}
	}
		    fp = fopen(fname,"w");
		    fprintf(fp,NULL);
		    fclose(fp);
		    printf("File Deleted");
		    break;
		}
	default:
	    {
	    	printf("Invalid Input!!");
	    	break;
		}
	}
	printf("\nDo you want to continue (y/n) -> ");
	r=getch();
}while(r=='y');
}
