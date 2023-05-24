#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

void hienthitheocot();
void hienthi(struct Be be);
void hienthids(struct Be* ds, int sl);

//Xoa con tro.
void contro(bool CursorVisibility)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConCurInf;
    
    ConCurInf.dwSize = 10;
    ConCurInf.bVisible = CursorVisibility;
    
    SetConsoleCursorInfo(handle, &ConCurInf);
}

struct Name{
	char ho[20];
	char dem[21];
	char ten[20];
};

struct ngaysinh{
	int day;
	int month;
	int year;
};

struct diachi{
	char quanhuyen[100];
	char tinh[100];
};

struct hocphi{
	int dadong;
};

struct Be{
	int r;
	int ID;
	struct Name name;
	int Old;
	char GioiTinh[10];
	struct ngaysinh date;
	struct diachi dc;
	struct hocphi hp;
};


void nhapHoTen(struct Name* name){
	printf("\n\t%c Ho & Ten", 21);
	printf("\n\t\t%c Nhap Ho: ", 26);
	scanf("%s", name->ho);
	printf("\t\t%c Nhap Ten Dem: ", 26);
	fflush(stdin);
	gets(name->dem);
	printf("\t\t%c Nhap Ten: ", 26);
	scanf("%s", name->ten);
}

void nhapNgaySinh(struct ngaysinh* date){
	printf("\n\t%c Ngay sinh", 21);
	printf("\n\t\t%c Nhap nam: ", 26);
	scanf("%d", &date->year);
	if(date->year < 0){
		do{
			printf("\n\t\tDinh dang nam khong dung.");
			printf("\n\t\t\t%c Nhap lai nam: ", 26);
			scanf("%d", &date->year);
		}while(date->year < 0);
	}
	if(date->year % 400 == 0 || date->year % 100 == 0 ){
		printf("\t\t%c Nhap thang: ", 26);
		scanf("%d", &date->month);
		if(date->month <= 0 || date->month >12){
			do{
				printf("\n\t\tDinh dang thang khong dung.");
				printf("\n\t\t\t%c Nhap lai thang: ", 26);
				scanf("%d", &date->month);
			}while(date->month <= 0 || date->month >12);
		}
		if(date->month < 8){
			if(date->month % 2 != 0){
				printf("\t\t%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						printf("\n\t\tDinh dang ngay khong dung.");
						printf("\n\t\t\t%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
			}
		}
		if(date->month < 8){
			if(date->month % 2 == 0 && date->month != 2){
				printf("\t\t%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=31){
					do{
						printf("\n\t\tDinh dang ngay khong dung.");
						printf("\n\t\t\t%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);
					}while(date->day <= 0 || date->day >=31);
				}
			}
		}
		if(date->month == 2){
			printf("\t\t%c Nhap ngay: ", 26);
			scanf("%d", &date->day);
			if(date->day <= 0 || date->day >=30){
				do{
					printf("\n\t\tDinh dang ngay khong dung.");
					printf("\n\t\t\t%c Nhap lai ngay: ", 26);
					scanf("%d", &date->day);
				}while(date->day <= 0 || date->day >=30);
			}
		}
		if(date->month > 8){
			if(date->month % 2 != 0){
				printf("\t\t%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=31){
					do{
						printf("\n\t\tDinh dang ngay khong dung.");
						printf("\n\t\t\t%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);
					}while(date->day <= 0 || date->day >=31);
				}
			}
		}
		if(date->month > 8){
			if(date->month % 2 == 0){
				printf("\t\t%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						printf("\n\t\tDinh dang ngay khong dung.");
						printf("\n\t\t\t%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
			}
		}
		if(date->month == 8){
			printf("\t\t%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					printf("\n\t\tDinh dang ngay khong dung.");
					printf("\n\t\t\t%c Nhap lai ngay: ", 26);
					scanf("%d", &date->day);	
				}while(date->day <= 0 || date->day >=32);
		}
	}
	if(date->year % 4 != 0){
		printf("\t\t%c Nhap thang: ", 26);
		scanf("%d", &date->month);
		if(date->month <= 0 || date->month >12){
			do{
				printf("\n\t\tDinh dang thang khong dung.");
				printf("\n\t\t\t%c Nhap lai thang: ", 26);
				scanf("%d", &date->month);
			}while(date->month <= 0 || date->month >12);
		}
		if(date->month < 8){
			if(date->month % 2 != 0){
				printf("\t\t%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						printf("\n\t\tDinh dang ngay khong dung.");
						printf("\n\t\t\t%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
			}
		}
		if(date->month < 8){
			if(date->month % 2 == 0 && date->month != 2){
				printf("\t\t%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=31){
					do{
						printf("\n\t\tDinh dang ngay khong dung.");
						printf("\n\t\t\t%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);
					}while(date->day <= 0 || date->day >=31);
				}
			}
		}
		if(date->month == 2){
			printf("\t\t%c Nhap ngay: ", 26);
			scanf("%d", &date->day);
			if(date->day <= 0 || date->day >=29){
				do{
					printf("\n\t\tDinh dang ngay khong dung.");
					printf("\n\t\t\t%c Nhap lai ngay: ", 26);
					scanf("%d", &date->day);
				}while(date->day <= 0 || date->day >=29);
			}
		}
		if(date->month > 8){
			if(date->month % 2 != 0){
				printf("\t\t%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=31){
					do{
						printf("\n\t\tDinh dang ngay khong dung.");
						printf("\n\t\t\t%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);
					}while(date->day <= 0 || date->day >=31);
				}
			}
		}
		if(date->month > 8){
			if(date->month % 2 == 0){
				printf("\t\t%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{ 
						printf("\n\t\tDinh dang ngay khong dung.");
						printf("\n\t\t\t%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
			}
		}
		if(date->month == 8){
			printf("\t\t%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						printf("\n\t\tDinh dang ngay khong dung.");
						printf("\n\t\t\t%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
		}
	}
}

void nhapDiaChi(struct diachi* dc){
	printf("\n\t%c Dia chi", 21);
	printf("\n\t\t%c Nhap Quan/Huyen: ", 26);
	fflush(stdin);
	gets(dc->quanhuyen); 
	printf("\t\t%c Nhap Tinh/TP: ", 26);
	gets(dc->tinh);
}

void donghocphi(struct hocphi* hp){
	printf("\n\t%c Hoc phi", 21);
	printf("\n\t\t%c Nhap so tien dong: ", 26);
	scanf("%d", &hp->dadong);
	hp->dadong = hp->dadong;
}

int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}

struct Be nhapBe(){
	system("cls");
	printf("%c NHAP THONG TIN", 21);
	struct Be be;
	printf("\n\tID: 1LT");
	srand((int) time(0));
    be.r = random(1,100);
    be.ID= be.r;
    printf("%d ",be.r);
	nhapHoTen(&be.name);
	printf("\n\t%c Nhap Tuoi: ", 21);
	scanf("%d", &be.Old);
	printf("\t%c Nhap Gioi Tinh: ", 21);
	scanf("%s", be.GioiTinh);
	nhapNgaySinh(&be.date);
	nhapDiaChi(&be.dc);
	donghocphi(&be.hp);
	printf("\nNhan phim bat ky de hoan tat!!!");
	getch();
	return be;
}


void hienthi(struct Be be){
	printf("\n|1LT%-4d|%-7s%-13s|%-10s|%-4d|%-9s|%-2d/%-2d/%-4d|%-12s- %-14s|%-15d|" ,
	be.r ,be.name.ho, be.name.dem, be.name.ten,be.Old, be.GioiTinh, be.date.day, be.date.month, be.date.year,
	be.dc.quanhuyen, be.dc.tinh, be.hp.dadong);
}
void sapxepten(struct Be* ds, int sl){
	int i, j;
	for(i = 0; i < sl - 1; i++){
		for(j = sl - 1; j > i; j--){
			if(strcmp(ds[j].name.ten, ds[j-1].name.ten) < 0){
				struct Be be = ds[j];
				ds[j] = ds[j - 1];
				ds[j - 1] = be;
			}
		}
	}
	hienthids(ds, sl);
}

void sapxepid(struct Be* ds, int sl){
	int i, j;
	for(i=0; i < sl ; i++){
		for(j = i+1; j < sl; j++){
			if(ds[i].r > ds[j].r){
				struct Be be = ds[i];
				ds[i] = ds[j];
				ds[j] = be;
			}
		}
	}
	hienthids(ds, sl);
}

void timkiemten(struct Be* ds, int sl){
	system("cls");
	char ten[20];
	printf("\n%c TIM KIEM TEN\n", 21);
	printf("\t%c Nhap ten be: ", 16);
	scanf("%s", ten);
	hienthitheocot();
	int i, timten = 0;
	for(i = 0; i < sl; i++) {
		if(strcmp(ten, ds[i].name.ten) == 0) {
			hienthi(ds[i]);
			timten = 1;
		}
	}
	if(timten == 0) {
		printf("\nNote: Khong co be %s trong danh sach!\n", ten);
	}
	printf("\nNhan phim bat ky de tro ve!!!");
	getch();
}

void timkiemid(struct Be* ds, int sl){
	system("cls");
	printf("\n%c TIM KIEM ID\n", 21);
	int id, timid=0;
	printf("\t%c Nhap Id: ", 16);
	scanf("%d", &id);
	for(int i=0; i<sl; i++){
		if(id == ds[i].r){
			hienthitheocot();
			hienthi(ds[i]);
			timid=1;
		}
	}
	if(timid == 0){
		printf("\nNote: Khong co ID %d trong danh sach!\n", id);
	}
	printf("\nNhan bat ky de hoan tat.");
	getch();
}

void timkiemdiachi(struct Be* ds, int sl){
	system("cls");
	printf("\n%c TIM KIEM THEO DIA CHI\n", 21);
	int dc=0;
	char diachi[50];
	printf("\t%c Nhap Dia Chi: ",16);
	scanf("%s", diachi);
	hienthitheocot();
	for(int i=0; i<sl; i++){
		if(strcmp(diachi, ds[i].dc.quanhuyen) == 0){
			hienthi(ds[i]);
			dc = 1;
		}
	}
	if(dc==0){
		printf("\nNote: Khong co be %s trong danh sach!\n", diachi);	
	}
	printf("\nNhan bat ky de hoan tat.");
	getch();
}

void ghifile(struct Be* ds, int sl){
	char filename[26];
	printf("\t\tNhap ten file: ");
	fflush(stdin);
	gets(filename);
	FILE* xuat = fopen(filename, "a");
	int i;
	for(i = 0; i < sl; i++) {
		struct Be be = ds[i];
		fprintf(xuat, "|%-6s|%-20s|%-10s|%-4s|%-9s|%-10s|%-28s|%-15s| \n", 
		" ID", "    Ho & Ten dem", "    Ten","Tuoi", "Gioi Tinh", "Ngay sinh", "          Dia chi", "   HP da dong");
		fprintf(xuat, "------------------------------------------------------------------------------------------------------------------------------\n");
		fprintf(xuat, "|1LT%-6d|%-7s%-13s|%-10s|%-4d|%-9s|%-2d/%-2d/%-4d|%-12s- %-14s|%-15d|\n",
		be.ID ,be.name.ho, be.name.dem, be.name.ten,be.Old, be.GioiTinh, be.date.day, be.date.month, be.date.year,
		be.dc.quanhuyen, be.dc.tinh, be.hp.dadong);
	}
	fclose(xuat);
	printf("\nFile ban vua xuat ra co ten: %s", filename);
	printf("\nNhan phim bat ky de tro ve!!!");
	getch();
}

void hienthitheocot(){
	printf("\n|%-7s|%-20s%|%-10s|%-4s|%-9s|%-10s|%-28s|%-15s|\n",
	" ID", "    Ho & Ten dem", "    Ten","Tuoi", "Gioi Tinh", "Ngay sinh", "          Dia chi", "   HP da dong");
	for(int i=0; i<112; i++){
		printf("%c", 205);
	}
}

void hienthids(struct Be* ds, int sl){
	hienthitheocot();
	int i;
	for(i = 0; i < sl; i++) {
		hienthi(ds[i]);
	}
	printf("\n");
	for(int i=0; i<112; i++){
		printf("%c", 45);
	}
	
	printf("\nNhan phim bat ky de tro ve!!!");
	getch();
}

int main(){
	struct Be ds[1000];
	int sl = 0;
	int id;
	int timid=0;
	contro(0);
	int i,a=0;		
	do {
		system("cls");
		for(int i=0; i<=15 ; i++){
			printf("%c", 219);
		}
		printf(" TEST ");
		for(int i=0; i<=15 ; i++){
			printf("%c", 219);
		}
		printf("\n");
		printf("%c\t    %c 1 %c Nhap be.\t     %c\n", 219, 17, 16, 219);
		printf("%c\t    %c 2 %c Xem danh sach.     %c\n", 219, 17, 16, 219);
		printf("%c\t    %c 3 %c Sap xep.\t     %c\n", 219, 17, 16, 219);
		printf("%c\t    %c 4 %c Tim kiem.\t     %c\n", 219, 17, 16, 219);
		printf("%c\t    %c 5 %c Ghi File.\t     %c\n", 219, 17, 16, 219);
		printf("%c\t    %c 0 %c Thoat.\t     %c\n", 219, 17, 16, 219);
		for(int i=0; i<=37; i++){
			printf("%c", 219);
		}
		struct Be be;
		switch(getch()) {
			case 48:
				a=1;
				break;
				
			case 49:
				be = nhapBe();
				ds[sl++] = be;
				break;
				
			case 50:
				system("cls");
				printf("%c DANH SACH DA NHAP\n", 21);
				hienthids(ds, sl);
				break;
				
			case 51:
				system("cls");
				for(int i=0; i<=14 ; i++){
					printf("%c", 219);
				}
				printf(" SAP XEP ");
				for(int i=0; i<=13 ; i++){
					printf("%c", 219);
				}
				printf("\n");
				printf("%c\t\t\t\t     %c\n", 219, 219);
				printf("%c\t  %c 1 %c Sap xep theo ten.    %c\n", 219, 17, 16, 219);
				printf("%c\t  %c 2 %c Sap xep theo id.     %c\n", 219, 17, 16, 219);
				printf("%c\t  %c 3 %c Tro ve.\t\t     %c\n", 219, 17, 16, 219);
				printf("%c\t\t\t\t     %c\n", 219, 219);
				printf("%c\t\t\t\t     %c\n", 219, 219);
				for(int i=0 ; i<=37; i++){
					printf("%c", 219);
				}
				switch(getch()){
					case 49:
						system("cls");
						printf("%c SAP XEP THEO TEN A%cz\n", 21, 26);
						sapxepten(ds, sl);
						break;
					case 50:
						system("cls");
						printf("%c SAP XEP THEO ID %c\n",21, 24);
						sapxepid(ds, sl);
						break;
					case 51:
						break;
				}
				break;
				
			case 52:
				system("cls");
				for(int i=0; i<=13 ; i++){
					printf("%c", 219);
				}
				printf(" TIM KIEM ");
				for(int i=0; i<=13 ; i++){
					printf("%c", 219);
				}
				printf("\n");
				printf("%c\t\t\t\t     %c\n", 219, 219);
				printf("%c\t   %c 1 %c Tim ten.            %c\n", 219, 17, 16, 219);
				printf("%c\t   %c 2 %c tim id.             %c\n", 219, 17, 16, 219);
				printf("%c\t   %c 3 %c tim diachi.         %c\n", 219, 17, 16, 219);
				printf("%c\t   %c 4 %c Tro ve.             %c\n", 219, 17, 16, 219);
				printf("%c\t\t\t\t     %c\n", 219, 219);
				printf("%c\t\t\t\t     %c\n", 219, 219);
				for(int i=0 ; i<=37; i++){
					printf("%c", 219);
				}
				switch(getch()){
					case 49:
						system("cls");
						timkiemten(ds, sl);
						break;
					case 50:
						system("cls");
						timkiemid(ds, sl);
						break;
					case 51:
						system("cls");
						timkiemdiachi(ds, sl);
						break;
					case 52:
						system("cls");
						printf("%c DANH SACH TIM THAY", 21);
						printf("\nNhan phim bat ky de tro ve!!!");
						getch();
						break;
				}
				break;
			case 53:
				system("cls");
				printf("\n\t%c LUU FILE\n", 21);
				ghifile(ds, sl);
				break;
			default:
				printf("\nSai chuc nang, vui long chon lai!\n");
				getch();
				break;
		}
		
	} while(a==0);
	
	return 0;
}
