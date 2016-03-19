#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define f 5
#define c 5

void cursor ( int x, int y );
void cartones(int mat1[f][c], int mat2[f][c], int mat3[f][c], int mat4[f][c]);
void imprimir(int mat1[f][c], int mat2[f][c], int mat3[f][c], int mat4[f][c]);
void comprobar(int mat1[f][c], int mat2[f][c], int mat3[f][c], int mat4[f][c] );
void jugar (int mat1[f][c], int mat2[f][c], int mat3[f][c], int mat4[f][c] );


int main(int argc, char** argv) {
	
	srand(time(0));
	system("color b");
	int m1[f][c], m2[f][c], m3[f][c], m4[f][c];
	
	cartones(m1, m2, m3, m4);
	comprobar(m1, m2, m3, m4);
	imprimir(m1, m2, m3, m4);
	jugar(m1, m2, m3, m4);


	system("pause>null");
	return 0;
}

void cursor ( int x, int y )
{
  COORD coord = {x, y};
  SetConsoleCursorPosition ( GetStdHandle ( STD_OUTPUT_HANDLE ), coord );
}

void cartones(int mat1[f][c], int mat2[f][c], int mat3[f][c], int mat4[f][c] )
{
	for(int i=0; i<f; i++ )
	{
		for(int j=0; j<c; j++)
		{
		
		if(j==0)
		{
	    	mat1[i][j]=rand()%15+1;
	    	mat2[i][j]=rand()%15+1;
			mat3[i][j]=rand()%15+1;
			mat4[i][j]=rand()%15+1;
		
		}
		else if(j==1)

		{
			mat1[i][j]=rand()%15+16;
			mat2[i][j]=rand()%15+16;
			mat3[i][j]=rand()%15+16;
			mat4[i][j]=rand()%15+16;
		
		}		
		else if(j==2)
		{
			mat1[i][j]=rand()%15+31;
			mat2[i][j]=rand()%15+31;
			mat3[i][j]=rand()%15+31;
			mat4[i][j]=rand()%15+31;
		}
		
		else if(j==3)
		{
			mat1[i][j]=rand()%15+46;
			mat2[i][j]=rand()%15+46;
			mat3[i][j]=rand()%15+46;
			mat4[i][j]=rand()%15+46;
	
		}
		else if(j==4)
		{
			mat1[i][j]=rand()%15+61;
			mat2[i][j]=rand()%15+61;
			mat3[i][j]=rand()%15+61;
			mat4[i][j]=rand()%15+61;
		}
		
		if(j==2 && i==2){
			mat1[i][j]==0;
			mat2[i][j]==0;
			mat3[i][j]==0;
			mat4[i][j]==0;
			
		}
		/*mat1[i][0]=rand()%15+1;
		mat1[i][1]=rand()%15+16;
		mat1[i][2]=rand()%15+31;
		mat1[i][3]=rand()%15+46;
		mat1[i][4]=rand()%15+61;
		
		mat2[i][0]=rand()%15+1;
		mat2[i][1]=rand()%15+16;
		mat2[i][2]=rand()%15+31;
		mat2[i][3]=rand()%15+46;
		mat2[i][4]=rand()%15+61;
		
		mat3[i][0]=rand()%15+1;
		mat3[i][1]=rand()%15+16;
		mat3[i][2]=rand()%15+31;
		mat3[i][3]=rand()%15+46;
		mat3[i][4]=rand()%15+61;
		
		mat4[i][0]=rand()%15+1;
		mat4[i][1]=rand()%15+16;
		mat4[i][2]=rand()%15+31;
		mat4[i][3]=rand()%15+46;
		mat4[i][4]=rand()%15+61;*/
	
	}
	
	}
}

void comprobar(int mat1[f][c], int mat2[f][c], int mat3[f][c], int mat4[f][c])
{

	
	
}


void imprimir(int mat1[f][c], int mat2[f][c], int mat3[f][c], int mat4[f][c] )
{
	cursor(5,2);
	
	printf("\tBINGO 1\n");
	for(int i=0; i<f; i++)
	{
		printf("\n");
		for(int j=0; j<c; j++)
		{
			if(i==2 && j==2)
			{
				printf(" %3c ", 42);
			}
			else
			{
				if(mat1[i][j]==0)
				{
					printf(" %3c ", 88);
				}
				else
				{
					printf(" %3d ", mat1[i][j]);
				}
					
			}
		
		}
	}
	
	printf("\n\n");
	
	printf("\tBINGO 2\n");
	for(int i=0; i<f; i++)
	{
		printf("\n");
		for(int j=0; j<c; j++)
		{
			if(i==2 && j==2)
			{
				printf(" %3c ", 42);
			}
			else
			{
				if(mat2[i][j]==0)
				{
					printf(" %3c ", 88);
				}
				else
				{
					printf(" %3d ", mat2[i][j]);
				}
					
			}
		
		}
	}
	
	printf("\n\n");
	printf("\tBINGO 3\n");
	for(int i=0; i<f; i++)
	{
		printf("\n");
		for(int j=0; j<c; j++)
		{
			if(i==2 && j==2)
			{
				printf(" %3c ", 42);
			}
			else
			{
				if(mat3[i][j]==0)
				{
					printf(" %3c ", 88);
				}
				else
				{
					printf(" %3d ", mat3[i][j]);
				}
					
			}
		
		}
	}
	
	printf("\n\n");
	printf("\tBINGO 4\n");
	for(int i=0; i<f; i++)
	{
		printf("\n");
		for(int j=0; j<c; j++)
		{
				if(i==2 && j==2)
			{
				printf(" %3c ", 42);
			}
			else
			{
				if(mat4[i][j]==0)
				{
					printf(" %3c ", 88);
				}
				else
				{
					printf(" %3d ", mat4[i][j]);
				}
					
			}
		
		}
	}

}

void jugar (int mat1[f][c], int mat2[f][c], int mat3[f][c], int mat4[f][c] )
{
	int num, band=0, aux=0;
	

	while(band==0)
	{

		num= rand()%75+1;
		cursor(20, 2);
		printf("Numero cantado: %d ", num);


	for(int i=0; i<f; i++)
	{
		for(int j=0; j<c; j++)
		{
			if(num== mat1[i][j])
			{
				mat1[i][j]=0;
			}
			
			if(num== mat2[i][j])
			{
				mat2[i][j]=0;
			}
			
			if(num== mat3[i][j])
			{
				mat3[i][j]=0;
			}
			
			if(num== mat4[i][j])
			{
				mat4[i][j]=0;
			}
		}
	}
	
	for(int i=0; i<f; i++)
	{
		for(int j=0; j<c; j++)
		{
			if( mat1[i][j]== 0 && mat1[i+1][j]== 0 && mat1[i+2][j]== 0 && mat1[i+3][j]== 0 && mat1[i+4][j]== 0)
			{
				band=1;
			}
			if( mat1[i][j]== 0 && mat1[i][j+1]== 0 && mat1[i][j+2]== 0 && mat1[i][j+3]== 0 && mat1[i][j+4]== 0)
			{
				band=1;
			}
			if( mat2[i][j]== 0 && mat2[i+1][j]== 0 && mat2[i+2][j]== 0 && mat2[i+3][j]== 0 && mat2[i+4][j]== 0)
			{
				band=2;
			}
			if( mat2[i][j]== 0 && mat2[i][j+1]== 0 && mat2[i][j+2]== 0 && mat2[i][j+3]== 0 && mat2[i][j+4]== 0)
			{
				band=2;
			}
			if( mat3[i][j]== 0 && mat3[i+1][j]== 0 && mat3[i+2][j]== 0 && mat3[i+3][j]== 0 && mat3[i+4][j]== 0)
			{
				band=3;
			}
			if( mat3[i][j]== 0 && mat3[i][j+1]== 0 && mat3[i][j+2]== 0 && mat3[i][j+3]== 0 && mat3[i][j+4]== 0)
			{
				band=3;
			}
			if( mat4[i][j]== 0 && mat4[i+1][j]== 0 && mat4[i+2][j]== 0 && mat4[i+3][j]== 0 && mat4[i+4][j]== 0)
			{
				band=4;
			}
			if( mat4[i][j]== 0 && mat4[i][j+1]== 0 && mat4[i][j+2]== 0 && mat4[i][j+3]== 0 && mat4[i][j+4]== 0)
			{
				band=4;
			}
		}
	}
		system("pause>null");
		system("cls");
		imprimir(mat1, mat2, mat3, mat4);
	
		
	}//while
	
	if(band==1)
	{	system("pause>null");
		system("cls");
		imprimir(mat1, mat2, mat3, mat4);
		cursor(35,5);
		printf("GANASTE(Tabla 1)!!!, BINGO");
	}
	if(band==2)
	{	system("pause>null");
		system("cls");
		imprimir(mat1, mat2, mat3, mat4);
		cursor(35,5);
		printf("GANASTE(Tabla 2)!!!, BINGO");
	}
	if(band==3)
	{	system("pause>null");
		system("cls");
		imprimir(mat1, mat2, mat3, mat4);
		cursor(35,5);
		printf("GANASTE(Tabla 3)!!!, BINGO");
	}
	if(band==4)
	{	system("pause>null");
		system("cls");
		imprimir(mat1, mat2, mat3, mat4);
		cursor(35,5);
		printf("GANASTE(Tabla 4)!!!, BINGO");
	}
}
