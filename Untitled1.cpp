/*
Oleh:
1. Abdun Nafi' (05111940000066)
2. Aji Wahyu A.U (05111940000073)
*/

#include<stdio.h>

int main (){
	while(1){
		int jenis,ciri,ketebalan;
		printf(" ----- Expert System Penentu usia Fosil Purba -----\n");
		printf(" -------------- Pilih Jenis Tanah -----------------\n");
		printf("1. Lempung\n");
		printf("2. Gamping\n");
		printf("3. Pasir\n");
		printf("99. Exit\n");
		
		scanf("%d", &jenis);
		
		if(jenis==1){
			while(1){
				printf("----------Pilih Ciri-ciri Tanah---------------\n");
				printf("1. Lempung Warna biru, Endapan air laut\n");
				printf("2. Lempung Warna hitam, Endapan lahar dingin(breksi vulkanik)\n");
				
				scanf("%d", &ciri);
				if(ciri == 1){
					while(1){
						printf("----------Pilih Ketebalan Tanah---------------\n");
						printf("1. Mencapai 107 meter\n");
						printf("2. Mencapai 4 - 7 meter\n");
						printf("3. Mencapai 1 - 2,5  meter\n");
						printf("4. Mencapai 1 meter\n");
						
						scanf("%d", &ketebalan);
						if(ketebalan == 1){
							printf("Umur fosil 3.000.000 Tahun\n\n");
							break;
						}
						else if(ketebalan==2){
							printf("Umur fosil 2.600.000 Tahun\n\n");
							break;
						}
						else if(ketebalan==3){
							printf("Umur fosil 2.200.000 Tahun\n\n");
							break;
						}
						else if(ketebalan == 4){
							printf("Umur fosil 1.800.000 Tahun\n\n");
							break;
						}
						else {
							printf("Pilihan salah\n\n");
							continue;
						}
					} break;
				}else if(ciri==2){
					while(1){
						printf("----------Pilih Ketebalan Tanah---------------\n");
						printf("1. Mencapai 0.7 - 50 meter\n");
						printf("2. Mencapai 100 meter\n");
						
						
						scanf("%d", &ketebalan);
						if(ketebalan == 1){
							printf("Umur fosil 1.700.000 Tahun\n\n");
							break;
						}
						else if(ketebalan == 2){
							printf("Umur fosil 800.000 Tahun\n\n");
							break;
						}
						else {
							printf("Pilihan salah\n\n");
							continue;
						}
					} break;
				}else {
					printf("pilihan salah\n\n");
					continue;
				}
			}
		}
		else if(jenis == 2){
			while(1){
				printf("----------Pilih Ciri-ciri Tanah---------------\n");
				printf("1. Batu gamping dan batu pasir\n");
				scanf("%d", &ciri);
				if(ciri == 1){
					while(1){
						printf("----------Pilih Ketebalan Tanah---------------\n");
						printf("1. Mencapai 0.1 - 46.3 meter\n");
							
						scanf("%d", &ketebalan);
						if(ketebalan == 1){
							printf("Umur fosil 730.000 Tahun\n\n");
							break;
						}
						else{
							printf("Pilihan salah\n\n");
							continue;
						}
					}
					break;
				}
				else{
					printf("Pilihan salah\n\n");
					continue;
				}
			}
		}
		else if(jenis ==3){
			while(1){
				printf("----------Pilih Ciri-ciri Tanah---------------\n");
				printf("1. Pasir silang siur atau berlumpur, gravel air sungai\n");
				printf("2. Pasir terdapat batu pumisan, tufa\n");
				
				scanf("%d", &ciri);
				if(ciri == 1){
					while(1){
						printf("----------Pilih Ketebalan Tanah---------------\n");
						printf("1. Mencapai 6 - 20 meter\n");
						printf("2. Mencapai 5.8 - 20 meter\n");
						printf("3. Mencapai 3 - 16  meter\n");
						
						
						scanf("%d", &ketebalan);
						if(ketebalan == 1){
							printf("Umur fosil 720.000 Tahun\n\n");
							break;
						}
						else if(ketebalan==2){
							printf("Umur fosil 480.000 Tahun\n\n");
							break;
						}
						else if(ketebalan==3){
							printf("Umur fosil 250.000 Tahun\n\n");
							break;
						}
						else {
							printf("Pilihan salah\n\n");
							continue;
						}
					}
					break;
				} 
				else if(ciri == 2){
					while(1){
						printf("----------Pilih Ketebalan Tanah---------------\n");
						printf("1. Mencapai 2.8 - 28.9 meter\n");
						printf("2. Mencapai 20 meter\n");
						printf("3. Mencapai 25  meter\n");
						
						
						scanf("%d", &ketebalan);
						if(ketebalan == 1){
							printf("Umur fosil 240.000 Tahun\n\n");
							break;
						}
						else if(ketebalan==2){
							printf("Umur fosil 120.000 Tahun\n\n");
							break;
						}
						else if(ketebalan==3){
							printf("Umur fosil 11.000 Tahun\n\n");
							break;
						}
						else {
							printf("Pilihan salah\n\n");
							continue;
						}
					}
					break;
				}
				else {
					printf("Pilihan salah\n\n");
					continue;
				}
			}
		}
		else if(jenis == 99) break;
		else {
			printf("Pilihan salah\n\n");
			continue;
		}
	}
}
