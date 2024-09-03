#include<stdio.h>
#include<stdlib.h>

//fungsi untuk memasukkan karakter spasi pada array
void resetarray(char data[100], int n){
	for(int i=0; i<n; i++){
		data[i] = ' ';
	}
}

//fungsi print tabel array
void printarray(char data[100], int n){
	printf("\n+-------------+");
	for(int i=0; i<n; i++){
		if(i < 10){
			printf("---+");
		}
		else{
			printf("----+");
		}
	}
	printf("\n");
	
	printf("| Letak array |");
	for(int i=0; i<n; i++){
		if(i < 10){
			printf(" %d |", i);
		}
		else{
			printf(" %d |", i);
		}
		
	}
	printf("\n");
	
	printf("+-------------+");
	for(int i=0; i<n; i++){
		if(i < 10){
			printf("---+");
		}
		else{
			printf("----+");
		}
	}
	printf("\n");
	
	printf("| Data        |");
	for(int i=0; i<n; i++){
		if(i < 10){
			printf(" %c |", data[i]);
		}
		else{
			printf(" %c  |", data[i]);
		}
	}
	printf("\n");
	
	printf("+-------------+");
	for(int i=0; i<n; i++){
		if(i < 10){
			printf("---+");
		}
		else{
			printf("----+");
		}
	}
	printf("\n");
}

//fungsi utama
int main(){
	int n;
	char data[100];
	
	printf("CARA MEMAHAMI ARRAY 2D\n\n");
//	memasukkan panjang array
	printf("Ingin membuat array sepanjang: ");
	scanf("%d", &n);
	getchar();
	
	resetarray(data, n);
	system("cls");
	
//	perulangan untuk memasukkan data ke array
	while(true){
		int array;
		
		printf("CARA MEMAHAMI ARRAY 2D\n");
		printarray(data, n);
//		memasukkan letak target array yang diinginkan
		printf("\nMasukkan letak array yang diinginkan: ");
		scanf("%d", &array);
		getchar();
		
//		perulangan jika letak array yang diingikan tidak tersedia
		while(array > n-1){
			system("cls");
			printf("CARA MEMAHAMI ARRAY 2D\n");
			printarray(data, n);
			printf("Letak array tidak tersedia, silahkan memilih lagi!\n");
			printf("\nMasukkan letak array yang diinginkan: ");
			scanf("%d", &array);
			getchar();
		}
		
//		memasukkan data
		printf("Masukkan data: ");
		scanf("%c", &data[array]);
		getchar();
		system("cls");
	}
	
	return 0;
}
