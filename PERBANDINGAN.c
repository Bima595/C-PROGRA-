#include <stdio.h>

int main()
{
	int nilai_bombom[3];
	int nilai_raply[3];
	int array_perbandingan[3];
	int i;
	printf("NILAI BOM BOM :\n");
	for (i=0; i<3;i++)///looping untuk  indeks 
	{
		printf("NILAI BOM BOM KE-%d: ",i+1);
		scanf("%d",&nilai_bombom[i]);//berfungsi untuk memasukkan nilai array
	}
	printf("\nNILAI RAPLY :\n");

	for (i=0; i<3;i++)
	{
		printf("NILAI RAPLY KE-%d: ",i+1);
		scanf("%d",&nilai_raply[i]);
	}
	printf("\nREKAP PERBANDINGAN NILAI BOM BOM DAN RAPLY: \n");
	for(i=0; i<3;i++)
	{
		if(nilai_bombom[i]>nilai_raply[i])
		{
		array_perbandingan[i]= 1;///menngeksekusi perbandingan array 
		}
		else
		{
		array_perbandingan[i]= 0;	
		}
		printf("HASIL NYA :%d\n",array_perbandingan[i]);
	}
		return 0;
}