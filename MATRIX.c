#include <stdio.h>

int main()
{
	int matrix1[3][3],matrix2[2][2],i,j,max,min,mulai;

	printf("pilih matrix yang mau di pakai : \n");
	printf("1. 3x3\n");
	printf("2. 2x2\n");
	printf("pilih no : ");
	scanf("%i",&mulai);
	
	switch(mulai)
	{
	case 1:	
		printf("matrix 3x3 : \n");
		for (i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("indek [%d][%d] = ",i,j);
				scanf("%d",&matrix1[i][j]);///memasukkan nilai array seusai indeks 
			}
		}
		printf("hasil nya adalah = \n");
		for (i=0;i<3;i++)///menampilkan hasil yang di input 
		{
			for (j=0;j<3;j++)
			{
				printf("\t%d",matrix1[i][j]);///hasil urutan dari array yang di input 
			}
				printf("\n");
		}
			
		max=matrix1[0][0];///variable di kasi nilai array indeks ke 0
		min=matrix1[0][0];
		for (i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(matrix1[i][j]>max)
				{
				max=matrix1[i][j];
				}
				if (matrix1[i][j]<min)///kalau nilai array di indeks 
				{ ///i dan j kurang dari min maka
	   	    	min=matrix1[i][j];/// nilai array masuk ke variable min
		  	    }
			}
		}
			printf("\n\n Nilai Tertinggi : %d",max);
			printf("\n\n Nilai terendah : %d",min);
			break;
	
			
	case 2:		
		printf("\nMatrix 2x2 : \n");
			
		for (i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("indek [%d][%d] = ",i,j);
				scanf("%d",&matrix2[i][j]);///memasukkan nilai array seusai indeks 
			}
		}
		printf("hasil nya adalah = \n");
		for (i=0;i<2;i++)///menampilkan hasil yang di input 
		{
			for (j=0;j<2;j++)
			{
				printf("\t%d",matrix2[i][j]);///hasil urutan dari array yang di input 
			}
			printf("\n");
		}
			
	   	max=matrix2[0][0];
		min=matrix2[0][0];
		for (i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				if(matrix2[i][j]>max)
				{
				max=matrix2[i][j];
				}
				if (matrix2[i][j]<min)
				{ 
	   	    	min=matrix2[i][j];
		  	    }
			}
		}
		printf("\n\n Nilai Tertinggi : %d",max);
		printf("\n\n Nilai terendah : %d",min);
		break;
	}
return 0;
}

