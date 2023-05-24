#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
//Ham thay doi man hinh console 
void SizeConsole(SHORT width, SHORT height)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    SMALL_RECT WindowSize;
    WindowSize.Top = 0;
    WindowSize.Left = 0;
    WindowSize.Right = width;
    WindowSize.Bottom = height;

    SetConsoleWindowInfo(hStdout, 1, &WindowSize);
}

//Ham chan thay doi kich thuoc man hinh
void DisableResizeWindow()
{
    HWND hWnd = GetConsoleWindow();
    SetWindowLong(hWnd, GWL_STYLE, GetWindowLong(hWnd, GWL_STYLE) & ~WS_SIZEBOX);
}

//Ham xoa thanh cuon
void ShowScrollbar(BOOL Show)
{
    HWND hWnd = GetConsoleWindow();
    ShowScrollBar(hWnd, SB_BOTH, Show);
}

//Ham thay doi mau sac
void SetColor(int backgound_color, int text_color)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    int color_code = backgound_color * 16 + text_color;
    SetConsoleTextAttribute(hStdout, color_code);
}

//Ham di chuyen vi tri con tro
void Goto(SHORT posX, SHORT posY)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Position;
    Position.X = posX;
    Position.Y = posY;

	SetConsoleCursorPosition(hStdout, Position);
}

//Ham xoa com tro
void ShowCur(bool CursorVisibility)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConCurInf;

    ConCurInf.dwSize = 10;
    ConCurInf.bVisible = CursorVisibility;

    SetConsoleCursorInfo(handle, &ConCurInf);
}

struct Name{
	char Ho[100];
	char HoDem[100];
	char Ten[100];
};
struct Date{
	int day;
	int month;
	int year;
};
struct Address{
	char quanhuyen[100];
	char tinh[100];
};
struct Be{
	int ID1, ID2, ID3, ID4, ID5, ID6;
	struct Name name;
	int Old;
	char GioiTinh[10];
	struct Date date;
	struct Address Dc;
};
struct Little{
	int ID1, ID2, ID3, ID4, ID5, ID6;
	struct Name name;
	int Old;
	char GioiTinh[10];
	struct Date date;
	struct Address Dc;
};
struct HocPhi{
	int hp;
	int So_Ngay_Nghi;
	struct Name name;
	int ID1, ID2, ID3, ID4, ID5, ID6;
};


void khungmenu();

void textmenu();

void listmenuchinh();

void thongtin();

void information();

void hocphi();

void tuition();

void ngonngu();

void Language();

void vechungtoi();

void aboutus();

void thoat();

void exit();

void danhsach();

void list();

void luachon();

void selection();


int main(){
	int nhom1=0, nhom2=0, nhom3=0;
	int lop1=0, lop2=0, lop3=0;
	struct Be dsN1[50];
	struct Be dsN2[50];
	struct Be dsN3[50];
	struct Be dsL1[50];
	struct Be dsL2[50];
	struct Be dsL3[50];
	struct Be be;
	struct HocPhi hpN1[50];
	struct HocPhi hpN2[50];
	struct HocPhi hpN3[50];
	struct HocPhi hpL1[50];
	struct HocPhi hpL2[50];
	struct HocPhi hpL3[50];
	struct HocPhi hocphi;
	DisableResizeWindow();
	ShowScrollbar(0);
	khungmenu();
	textmenu();
	danhsach();
	luachon();
}

void khungmenu(){
	ShowCur(0);
	SizeConsole(150 ,25);//thay doi kich thuoc console
	ShowScrollbar(0);//xoa thanh cuon
	SetColor( 0 , 15 );//thay doi mau sac

	//thanh ngang tren cung
	for(int i=0; i<=55; i++){
		printf("%c", 219);
	}
	SetColor( 15 , 3 );//nt
	printf("V.0.01");
	SetColor( 0 , 15 );//nt
	for(int i=0; i<=55 ; i++){
		printf("%c", 219);
	}

	//hai duong doc hai ben
	SetColor( 0 , 15 );
	for(int j=0; j<=27; j++){
		printf("\n");
		for(int i=0; i<=117; i++){
			printf((i==0 || i==117)? "%c" : " ", 219);
		}
	}

	//thanh ngang duoi cung
	SetColor( 0 , 15 );
	printf("\n");
	for(int k=0; k<=117; k++){
		printf("%c", 219);
	}
}
//Ve chu menu
void textmenu(){

	Goto(37, 2); 
	printf("     %c%c   %c%c  %c%c%c%c  %c%c     %c  %c      %c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	Goto(37, 3); 
	printf("    %c  %c %c %c  %c     %c %c    %c  %c      %c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	Goto(37, 4); 
	printf("   %c   %c%c  %c  %c     %c  %c   %c  %c      %c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	Goto(37, 5); 
	printf("  %c        %c  %c%c%c%c  %c   %c  %c  %c      %c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	Goto(37, 6); 
	printf(" %c         %c  %c     %c    %c %c  %c      %c", 219, 219, 219, 219, 219, 219, 219, 219);
	Goto(37, 7); 
	printf("%c          %c  %c%c%c%c  %c     %c%c   %c%c%c%c%c%c",219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);

}

void nhapHoTen(struct Name* name){
	Goto(40, 7);
	printf("%c Ho & Ten", 21);
	Goto(45, 8);
	printf("%c Nhap Ho: ", 26);
	scanf("%s", name->Ho);
	Goto(45, 9);
	printf("%c Nhap Ten Dem: ", 26);
	fflush(stdin);
	gets(name->HoDem);
	Goto(45, 10);
	printf("%c Nhap Ten: ", 26);
	scanf("%s", name->Ten);
}

void EnterYourFullName(struct Name* name){
	Goto(40, 7);
	printf("%c First & last name", 21);
	Goto(45, 8);
	printf("%c Enter Last Name: ", 26);
	fflush(stdin);
	scanf("%s", name->Ho);
	Goto(45, 9);
	printf("%c Enter Middle Name: ", 26);
	fflush(stdin);
	gets(name->HoDem);
	Goto(45, 10);
	printf("%c Enter Name: ", 26);
	scanf("%s", name->Ten);
}

void nhapNgaySinh(struct Date* date){
	Goto(40, 16);
	printf("%c Ngay sinh", 21);
	Goto(45, 17);
	printf("%c Nhap nam: ", 26);
	scanf("%d", &date->year);
	if(date->year < 0){
		do{
			Goto(45, 17);
			printf("%c Nhap lai nam: ", 26);
			scanf("%d", &date->year);
		}while(date->year < 0);
	}
	if(date->year % 4 == 0 ){
		Goto(45, 18);
		printf("%c Nhap thang: ", 26);
		scanf("%d", &date->month);
		if(date->month <= 0 || date->month >12){
			do{
				Goto(45, 18 );
				printf("%c Nhap lai thang: ", 26);
				scanf("%d", &date->month);
			}while(date->month <= 0 || date->month >12);
		}
		if(date->month < 8){
			if(date->month % 2 != 0){
				Goto(45, 19 );
				printf("%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						Goto(45, 19 );
						printf("%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
			}
		}
		if(date->month < 8){
			if(date->month % 2 == 0 && date->month != 2){
				Goto(45, 19 );
				printf("%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=31){
					do{
						Goto(45, 19 );
						printf("%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);
					}while(date->day <= 0 || date->day >=31);
				}
			}
		}
		if(date->month == 2){
			Goto(45, 19 );
			printf("%c Nhap ngay: ", 26);
			scanf("%d", &date->day);
			if(date->day <= 0 || date->day >=30){
				do{
					Goto(45, 19 );
					printf("%c Nhap lai ngay: ", 26);
					scanf("%d", &date->day);
				}while(date->day <= 0 || date->day >=30);
			}
		}
		if(date->month > 8){
			if(date->month % 2 != 0){
				Goto(45, 19 );
				printf("%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=31){
					do{
						Goto(45, 19 );
						printf("%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);
					}while(date->day <= 0 || date->day >=31);
				}
			}
		}
		if(date->month > 8){
			if(date->month % 2 == 0){
				Goto(45, 19 );
				printf("%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						Goto(45, 19 );
						printf("%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
			}
		}
		if(date->month == 8){
			Goto(45, 19 );
			printf("%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						Goto(45, 19 );
						printf("%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
		}
	}
	if(date->year % 4 != 0){
		Goto(45, 18);
		printf("%c Nhap thang: ", 26);
		scanf("%d", &date->month);
		if(date->month <= 0 || date->month >12){
			do{
				Goto(45, 18 ); 
				printf("%c Nhap lai thang: ", 26);
				scanf("%d", &date->month);
			}while(date->month <= 0 || date->month >12);
		}
		if(date->month < 8){
			if(date->month % 2 != 0){
				Goto(45, 19 ); 
				printf("%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						Goto(45, 19 ); 
						printf("%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
			}
		}
		if(date->month < 8){
			if(date->month % 2 == 0 && date->month != 2){
				Goto(45, 19 ); 
				printf("%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=31){
					do{
						Goto(45, 19 ); 
						printf("%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);
					}while(date->day <= 0 || date->day >=31);
				}
			}
		}
		if(date->month == 2){
			Goto(45, 19 ); 
			printf("%c Nhap ngay: ", 26);
			scanf("%d", &date->day);
			if(date->day <= 0 || date->day >=29){
				do{
					Goto(45, 19 ); 
					printf("%c Nhap lai ngay: ", 26);
					scanf("%d", &date->day);
				}while(date->day <= 0 || date->day >=29);
			}
		}
		if(date->month > 8){
			if(date->month % 2 != 0){
				Goto(45, 19 ); 
				printf("%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=31){
					do{
						Goto(45, 19 ); 
						printf("%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);
					}while(date->day <= 0 || date->day >=31);
				}
			}
		}
		if(date->month > 8){
			if(date->month % 2 == 0){
				Goto(45, 19 ); 
				printf("%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						Goto(45, 19 ); 
						printf("%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
			}
		}
		if(date->month == 8){
			Goto(45, 19 ); 
			printf("%c Nhap ngay: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						Goto(45, 19 ); 
						printf("%c Nhap lai ngay: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
		}
	}
}

void EnterYourDateOfBirth(struct Date* date){
	Goto(40, 16);
	printf("%c Date of birth: ", 21);
	Goto(45, 17);
	printf("%c Enter year: ", 26);
	scanf("%d", &date->year);
	if(date->year < 0){
		do{
			Goto(45, 17);
			printf("%c Re-enter the year: ", 26);
			scanf("%d", &date->year);
		}while(date->year < 0);
	}
	if(date->year % 4 == 0 ){
		Goto(45, 18);
		printf("%c Enter month: ", 26);
		scanf("%d", &date->month);
		if(date->month <= 0 || date->month >12){
			do{
				Goto(45, 18 );
				printf("%c Re-enter the month: ", 26);
				scanf("%d", &date->month);
			}while(date->month <= 0 || date->month >12);
		}
		if(date->month < 8){
			if(date->month % 2 != 0){
				Goto(45, 19 );
				printf("%c Enter day: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						Goto(45, 19 );
						printf("%c Re-enter the date: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
			}
		}
		if(date->month < 8){
			if(date->month % 2 == 0 && date->month != 2){
				Goto(45, 19 );
				printf("%c Enter day: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=31){
					do{
						Goto(45, 19 );
						printf("%c Re-enter the date: ", 26);
						scanf("%d", &date->day);
					}while(date->day <= 0 || date->day >=31);
				}
			}
		}
		if(date->month == 2){
			Goto(45, 19 );
			printf("%c Enter day: ", 26);
			scanf("%d", &date->day);
			if(date->day <= 0 || date->day >=30){
				do{
					Goto(45, 19 );
					printf("%c Re-enter the date: ", 26);
					scanf("%d", &date->day);
				}while(date->day <= 0 || date->day >=30);
			}
		}
		if(date->month > 8){
			if(date->month % 2 != 0){
				Goto(45, 19 );
				printf("%c Enter day: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=31){
					do{
						Goto(45, 19 );
						printf("%c Re-enter the date: ", 26);
						scanf("%d", &date->day);
					}while(date->day <= 0 || date->day >=31);
				}
			}
		}
		if(date->month > 8){
			if(date->month % 2 == 0){
				Goto(45, 19 );
				printf("%c Enter day: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						Goto(45, 19 );
						printf("%c Re-enter the date: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
			}
		}
		if(date->month == 8){
			Goto(45, 19 );
			printf("%c Enter day: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						Goto(45, 19 );
						printf("%c Re-enter the date: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
		}
	}
	if(date->year % 4 != 0){
		Goto(45, 18);
		printf("%c Enter month: ", 26);
		scanf("%d", &date->month);
		if(date->month <= 0 || date->month >12){
			do{
				Goto(45, 18 ); 
				printf("%c Re-enter the month: ", 26);
				scanf("%d", &date->month);
			}while(date->month <= 0 || date->month >12);
		}
		if(date->month < 8){
			if(date->month % 2 != 0){
				Goto(45, 19 ); 
				printf("%c Enter day: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						Goto(45, 19 ); 
						printf("%c Re-enter the date: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
			}
		}
		if(date->month < 8){
			if(date->month % 2 == 0 && date->month != 2){
				Goto(45, 19 ); 
				printf("%c Enter day: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=31){
					do{
						Goto(45, 19 ); 
						printf("%c Re-enter the date: ", 26);
						scanf("%d", &date->day);
					}while(date->day <= 0 || date->day >=31);
				}
			}
		}
		if(date->month == 2){
			Goto(45, 19 ); 
			printf("%c Enter day: ", 26);
			scanf("%d", &date->day);
			if(date->day <= 0 || date->day >=29){
				do{
					Goto(45, 19 ); 
					printf("%c Re-enter the date: ", 26);
					scanf("%d", &date->day);
				}while(date->day <= 0 || date->day >=29);
			}
		}
		if(date->month > 8){
			if(date->month % 2 != 0){
				Goto(45, 19 ); 
				printf("%c Enter day: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=31){
					do{
						Goto(45, 19 ); 
						printf("%c Re-enter the date: ", 26);
						scanf("%d", &date->day);
					}while(date->day <= 0 || date->day >=31);
				}
			}
		}
		if(date->month > 8){
			if(date->month % 2 == 0){
				Goto(45, 19 ); 
				printf("%c Enter day: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						Goto(45, 19 ); 
						printf("%c Re-enter the date: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
			}
		}
		if(date->month == 8){
			Goto(45, 19 ); 
			printf("%c Enter day: ", 26);
				scanf("%d", &date->day);
				if(date->day <= 0 || date->day >=32){
					do{
						Goto(45, 19 ); 
						printf("%c Re-enter the date: ", 26);
						scanf("%d", &date->day);	
					}while(date->day <= 0 || date->day >=32);
				}
		}
	}
}

void nhapDiaChi(struct Address* address){
	Goto(40, 21); 
	printf("%c Dia chi", 21);
	Goto(45, 22); 
	printf("%c Nhap Quan/Huyen: ", 26);
	fflush(stdin);
	gets(address->quanhuyen);
	Goto(45, 23); 
	printf("%c Nhap Tinh/TP: ", 26);
	gets(address->tinh);
}

void EnterAddress(struct Address* address){
	Goto(40, 21); 
	printf("%c Address", 21);
	Goto(45, 22); 
	printf("%c Enter District: ", 26);
	fflush(stdin);
	gets(address->quanhuyen);
	Goto(45, 23); 
	printf("%c Enter Province: ", 26);
	gets(address->tinh);
}

struct Be nhapBe1(){
	struct Be be;
	(be.ID1)++;
	Goto(45, 5);
	printf("ID: 1N%d", be.ID1);
	nhapHoTen(&be.name);
	Goto(45, 12); 
	printf("%c Nhap Tuoi: ", 26);
	scanf("%d", &be.Old);
	Goto(45, 14); 
	printf("%c Nhap Gioi Tinh: ", 26);
	scanf("%s", be.GioiTinh);
	nhapNgaySinh(&be.date);
	nhapDiaChi(&be.Dc);
	return be;
}

struct Be nhapBe2(){
	struct Be be;
	(be.ID2)++;
	Goto(45, 5);
	printf("ID: 2N%d", be.ID2);
	nhapHoTen(&be.name);
	Goto(45, 12); 
	printf("%c Nhap Tuoi: ", 26);
	scanf("%d", &be.Old);
	Goto(45, 14); 
	printf("%c Nhap Gioi Tinh: ", 26);
	scanf("%s", be.GioiTinh);
	nhapNgaySinh(&be.date);
	nhapDiaChi(&be.Dc);
	return be;
}

struct Be nhapBe3(){
	struct Be be;
	(be.ID3)++;
	Goto(45, 5);
	printf("ID: 3N%d", be.ID3);
	nhapHoTen(&be.name);
	Goto(45, 12); 
	printf("%c Nhap Tuoi: ", 26);
	scanf("%d", &be.Old);
	Goto(45, 14); 
	printf("%c Nhap Gioi Tinh: ", 26);
	scanf("%s", be.GioiTinh);
	nhapNgaySinh(&be.date);
	nhapDiaChi(&be.Dc);
	return be;
}

struct Be nhapBe4(){
	struct Be be;
	(be.ID4)++;
	Goto(45, 5);
	printf("ID: 1L%d", be.ID4);
	nhapHoTen(&be.name);
	Goto(45, 12); 
	printf("%c Nhap Tuoi: ", 26);
	scanf("%d", &be.Old);
	Goto(45, 14); 
	printf("%c Nhap Gioi Tinh: ", 26);
	scanf("%s", be.GioiTinh);
	nhapNgaySinh(&be.date);
	nhapDiaChi(&be.Dc);
	return be;
}

struct Be nhapBe5(){
	struct Be be;
	(be.ID5)++;
	Goto(45, 5);
	printf("ID: 2L%d", be.ID5);
	nhapHoTen(&be.name);
	Goto(45, 12); 
	printf("%c Nhap Tuoi: ", 26);
	scanf("%d", &be.Old);
	Goto(45, 14); 
	printf("%c Nhap Gioi Tinh: ", 26);
	scanf("%s", be.GioiTinh);
	nhapNgaySinh(&be.date);
	nhapDiaChi(&be.Dc);
	return be;
}

struct Be nhapBe6(){
	struct Be be;
	(be.ID6)++;
	Goto(45, 5);
	printf("ID: 3L%d", be.ID6);
	nhapHoTen(&be.name);
	Goto(45, 12); 
	printf("%c Nhap Tuoi: ", 26);
	scanf("%d", &be.Old);
	Goto(45, 14); 
	printf("%c Nhap Gioi Tinh: ", 26);
	scanf("%s", be.GioiTinh);
	nhapNgaySinh(&be.date);
	nhapDiaChi(&be.Dc);
	return be;
}

struct Little EnterLittle1(){
	struct Little little;
	(little.ID1)++;
	Goto(45, 5); 
	printf("ID: 1N%d", little.ID1);
	EnterYourFullName(&little.name);
	Goto(45, 12); 
	printf("%c Enter Old: ", 26);
	scanf("%d", &little.Old);
	Goto(45, 14); 
	printf("%c Enter Your Gender: ", 26);
	scanf("%s", little.GioiTinh);
	EnterYourDateOfBirth(&little.date);
	EnterAddress(&little.Dc);
	return little;
}

struct Little EnterLittle2(){
	struct Little little;
	(little.ID2)++;
	Goto(45, 5); 
	printf("ID: 2N%d", little.ID2);
	EnterYourFullName(&little.name);
	Goto(45, 12); 
	printf("%c Enter Old: ", 26);
	scanf("%d", &little.Old);
	Goto(45, 14); 
	printf("%c Enter Your Gender: ", 26);
	scanf("%s", little.GioiTinh);
	EnterYourDateOfBirth(&little.date);
	EnterAddress(&little.Dc);
	return little;
}

struct Little EnterLittle3(){
	struct Little little;
	(little.ID3)++;
	Goto(45, 5); 
	printf("ID: 3N%d", little.ID3);
	EnterYourFullName(&little.name);
	Goto(45, 12); 
	printf("%c Enter Old: ", 26);
	scanf("%d", &little.Old);
	Goto(45, 14); 
	printf("%c Enter Your Gender: ", 26);
	scanf("%s", little.GioiTinh);
	EnterYourDateOfBirth(&little.date);
	EnterAddress(&little.Dc);
	return little;
}

struct Little EnterLittle4(){
	struct Little little;
	(little.ID4)++;
	Goto(45, 5); 
	printf("ID: 1L%d", little.ID4);
	EnterYourFullName(&little.name);
	Goto(45, 12); 
	printf("%c Enter Old: ", 26);
	scanf("%d", &little.Old);
	Goto(45, 14); 
	printf("%c Enter Your Gender: ", 26);
	scanf("%s", little.GioiTinh);
	EnterYourDateOfBirth(&little.date);
	EnterAddress(&little.Dc);
	return little;
}

struct Little EnterLittle5(){
	struct Little little;
	(little.ID5)++;
	Goto(45, 5); 
	printf("ID: 2L%d", little.ID5);
	EnterYourFullName(&little.name);
	Goto(45, 12); 
	printf("%c Enter Old: ", 26);
	scanf("%d", &little.Old);
	Goto(45, 14); 
	printf("%c Enter Your Gender: ", 26);
	scanf("%s", little.GioiTinh);
	EnterYourDateOfBirth(&little.date);
	EnterAddress(&little.Dc);
	return little;
}

struct Little EnterLittle6(){
	struct Little little;
	(little.ID6)++;
	Goto(45, 5); 
	printf("ID: 3L%d", little.ID6);
	EnterYourFullName(&little.name);
	Goto(45, 12); 
	printf("%c Enter Old: ", 26);
	scanf("%d", &little.Old);
	Goto(45, 14); 
	printf("%c Enter Your Gender: ", 26);
	scanf("%s", little.GioiTinh);
	EnterYourDateOfBirth(&little.date);
	EnterAddress(&little.Dc);
	return little;
}

void xemnhom1(struct Be be){
	printf("\n|1N%-3d|%-7s%-13s|%-10s|%-4d|%-9s|%-2d/%-2d/%-4d|%-12s- %-14s|\n" , be.ID1 ,be.name.Ho, be.name.HoDem, be.name.Ten,be.Old, be.GioiTinh, be.date.day, be.date.month, be.date.year, be.Dc.quanhuyen, be.Dc.tinh);

}

void xemnhom2(struct Be be){
	printf("\n|2N%-3d|%-7s%-13s|%-10s|%-4d|%-9s|%-2d/%-2d/%-4d|%-12s- %-14s|\n" , be.ID2 ,be.name.Ho, be.name.HoDem, be.name.Ten,be.Old, be.GioiTinh, be.date.day, be.date.month, be.date.year, be.Dc.quanhuyen, be.Dc.tinh);

}

void xemnhom3(struct Be be){
	printf("\n|3N%-3d|%-7s%-13s|%-10s|%-4d|%-9s|%-2d/%-2d/%-4d|%-12s- %-14s|\n" , be.ID3 ,be.name.Ho, be.name.HoDem, be.name.Ten,be.Old, be.GioiTinh, be.date.day, be.date.month, be.date.year, be.Dc.quanhuyen, be.Dc.tinh);

}

void xemlop1(struct Be be){
	printf("\n|1L%-3d|%-7s%-13s|%-10s|%-4d|%-9s|%-2d/%-2d/%-4d|%-12s- %-14s|\n" , be.ID4 ,be.name.Ho, be.name.HoDem, be.name.Ten,be.Old, be.GioiTinh, be.date.day, be.date.month, be.date.year, be.Dc.quanhuyen, be.Dc.tinh);

}

void xemlop2(struct Be be){
	printf("\n|2L%-3d|%-7s%-13s|%-10s|%-4d|%-9s|%-2d/%-2d/%-4d|%-12s- %-14s|\n" , be.ID5 ,be.name.Ho, be.name.HoDem, be.name.Ten,be.Old, be.GioiTinh, be.date.day, be.date.month, be.date.year, be.Dc.quanhuyen, be.Dc.tinh);

}

void xemlop3(struct Be be){
	printf("\n|3L%-3d|%-7s%-13s|%-10s|%-4d|%-9s|%-2d/%-2d/%-4d|%-12s- %-14s|\n" , be.ID6 ,be.name.Ho, be.name.HoDem, be.name.Ten,be.Old, be.GioiTinh, be.date.day, be.date.month, be.date.year, be.Dc.quanhuyen, be.Dc.tinh);

}

void DanhSach(){
	system("cls");
	printf("\n|%-5s|%-20s|%-10s|%-4s|%-9s|%-10s|%-28s|\n", "ID", "Ho & Ten dem", "Ten","Tuoi", "Gioi Tinh", "Ngay sinh", "Dia chi");
	for(int i=0; i<94; i++){
		printf("%c", 205);
	}
}

void viewgroup1(struct Little little){
	printf("\n|1N%-3d|%-7s%-13s|%-10s|%-4d|%-9s|%-2d/%-2d/%-4d|%-12s- %-14s|\n" ,little.ID1, little.name.Ho, little.name.HoDem, little.name.Ten,little.Old, little.GioiTinh, little.date.day, little.date.month, little.date.year, little.Dc.quanhuyen, little.Dc.tinh);

}

void viewgroup2(struct Little little){
	printf("\n|2N%-3d|%-7s%-13s|%-10s|%-4d|%-9s|%-2d/%-2d/%-4d|%-12s- %-14s|\n" ,little.ID2, little.name.Ho, little.name.HoDem, little.name.Ten,little.Old, little.GioiTinh, little.date.day, little.date.month, little.date.year, little.Dc.quanhuyen, little.Dc.tinh);

}

void viewgroup3(struct Little little){
	printf("\n|3N%-3d|%-7s%-13s|%-10s|%-4d|%-9s|%-2d/%-2d/%-4d|%-12s- %-14s|\n" ,little.ID3, little.name.Ho, little.name.HoDem, little.name.Ten,little.Old, little.GioiTinh, little.date.day, little.date.month, little.date.year, little.Dc.quanhuyen, little.Dc.tinh);

}

void viewclass1(struct Little little){
	printf("\n|1L%-3d|%-7s%-13s|%-10s|%-4d|%-9s|%-2d/%-2d/%-4d|%-12s- %-14s|\n" ,little.ID4, little.name.Ho, little.name.HoDem, little.name.Ten,little.Old, little.GioiTinh, little.date.day, little.date.month, little.date.year, little.Dc.quanhuyen, little.Dc.tinh);

}

void viewclass2(struct Little little){
	printf("\n|2L%-3d|%-7s%-13s|%-10s|%-4d|%-9s|%-2d/%-2d/%-4d|%-12s- %-14s|\n" ,little.ID5, little.name.Ho, little.name.HoDem, little.name.Ten,little.Old, little.GioiTinh, little.date.day, little.date.month, little.date.year, little.Dc.quanhuyen, little.Dc.tinh);

}

void viewclass3(struct Little little){
	printf("\n|3L%-3d|%-7s%-13s|%-10s|%-4d|%-9s|%-2d/%-2d/%-4d|%-12s- %-14s|\n" ,little.ID6, little.name.Ho, little.name.HoDem, little.name.Ten,little.Old, little.GioiTinh, little.date.day, little.date.month, little.date.year, little.Dc.quanhuyen, little.Dc.tinh);

}

void List(){
	system("cls");
	printf("\n|%-5s|%-20s|%-10s|%-4s|%-9s|%-10s|%-28s|\n", "ID", "Last&Middle ", "Name","Old", "Gender", "Date of birth", "Address");
	for(int i=0; i<94; i++){
		printf("%c", 205);
	}
}

void xuatVaoFile(struct Be be[], int soluong,char tenFile[100]){
	FILE *f;
	f = fopen(tenFile, "wb");
	fwrite(&soluong, sizeof(soluong), 1, f);
	for(int i=0; i<soluong; i++){
		fwrite(&be[i], sizeof(Be), 1, f);
	}
	fclose(f);
}
void nhapTuFile(struct Be be[], int &soluong,char tenFile[100]){
	FILE *f;
	f = fopen(tenFile, "rb");
	fread(&soluong, sizeof(soluong), 1, f);
	for(int i=0; i<soluong; i++){
		fread(&be[i], sizeof(Be), 1, f);
	}
	fclose(f);
}

	struct Be nhom1[25];
	struct Be nhom2[25];
	struct Be nhom3[25];
	struct Be lop1[30];
	struct Be lop2[30];
	struct Be lop3[30];
	int sln1=0;
	int sln2=0;
	int sln3=0;
	int sll1=0;
	int sll2=0;
	int sll3=0;
	
//1>>Thong tin.	
void thongtin(){
	system("cls");
	int key;
	int i;
	do{
		system("cls");
		khungmenu();
		ShowScrollbar(0);
		textmenu();
		Goto(45 , 10); 
		printf("%c 1 %c Nhap thong tin.", 17, 16);
		Goto(45 , 13); 
		printf("%c 2 %c Xem thong tin.", 17, 16);
		Goto(45 , 16); 
		printf("%c 3 %c Tro ve.", 17, 16);
		Goto(85 , 28); 
		printf("lua chon mot gia tri %c ", 16);
		scanf("%d", &key);
		struct Be be;
		switch(key){
			case 1:
				system("cls");
				khungmenu();
				textmenu();
				Goto(47, 10); 
				printf("CHON NHOM HOAC LOP");
				Goto(49, 14); 
				printf("%c 1 %c Nhom tre.", 17, 16);
				Goto(49, 16); 
				printf("%c 2 %c Lop mau giao.", 17, 16);
				Goto(49, 18); 
				printf("%c 3 %c Tro ve.", 17, 16);
				Goto(85, 28); 
				printf("lua chon mot gia tri %c ", 16);
				int key1;
				scanf("%d", &key1);
				switch(key1){
					case 1:
						system("cls");
						khungmenu();
						textmenu();
						Goto(53, 10); 
						printf("CHON NHOM");
						Goto(40, 14); 
						printf("%c 1 %c Nhom tre tu 3 den 12 thang tuoi.", 17, 16);
						Goto(40, 16); 
						printf("%c 2 %c Nhom tre tu 13 den 24 thang tuoi.", 17, 16);
						Goto(40, 18); 
						printf("%c 3 %c Nhom tre tu 25 den 36 thang tuoi.", 17, 16);
						Goto(40, 20); 
						printf("%c 4 %c Tro ve.", 17, 16);
						Goto(85, 28); 
						printf("lua chon mot gia tri %c ", 16);
						int key2;
						scanf("%d", &key2);
						switch(key2){
							case 1:
								system("cls");
								khungmenu();
								be = nhapBe1();
								nhom1[sln1++] = be;
								xuatVaoFile(nhom1,sln1,"thongtinn1.bin");
								Goto(45, 28);
								printf("Nhan phim bat ki de hoan tat");
								getch();
								break;
							case 2:
								system("cls");
								khungmenu();
								be = nhapBe2();
								nhom2[sln2++] = be;
								xuatVaoFile(nhom2,sln2,"thongtinn2.bin");
								Goto(45, 28);
								printf("Nhan phim bat ki de hoan tat");
								getch();
								break;
							case 3:
								system("cls");
								khungmenu();
								be = nhapBe3();
								nhom3[sln3++] = be;
								xuatVaoFile(nhom1,sln3,"thongtinn3.bin");
								Goto(45, 28);
								printf("Nhan phim bat ki de hoan tat");
								getch();
								break;
							case 4:
								break;
						}
						break;
					case 2:
						system("cls");
						Goto(47, 10); 
						printf("CHON LOP");
						Goto(45, 14);
						printf("%c 1 %cLop mau giao 3 tuoi den 4 tuoi.", 17, 16);
						Goto(45, 16);
						printf("%c 2 %cLop mau giao 4 tuoi den 5 tuoi.", 17, 16);
						Goto(45, 18);
						printf("%c 3 %cLop mau giao 5 tuoi den 6 tuoi.", 17, 16);
						Goto(45, 20);
						printf("%c 4 %cTro ve.", 17, 16);
						Goto(85, 28); 
						printf("lua chon mot gia tri %c ", 16);
						int key3;
						scanf("%d", &key3);
						switch(key3){
							case 1:
								system("cls");
								khungmenu();
								be = nhapBe4();
								lop1[sll1++] = be;
								xuatVaoFile(lop1,sll1,"thongtinl1.bin");
								Goto(45, 28);
								printf("Nhan phim bat ki de hoan tat");
								getch();
								break;
							case 2:
								system("cls");
								khungmenu();
								be = nhapBe5();
								lop2[sll2++] = be;
								xuatVaoFile(lop1,sll2,"thongtinl2.bin");
								Goto(45, 28);
								printf("Nhan phim bat ki de hoan tat");
								getch();
								break;
							case 3:
								system("cls");
								khungmenu();
								be = nhapBe6();
								lop3[sll3++] = be;
								xuatVaoFile(lop1,sll3,"thongtinl3.bin");
								Goto(45, 28);
								printf("Nhan phim bat ki de hoan tat");
								getch();
								break;
							case 4:
								break;
						}
						break;
					case 3:
						break;
				}
				break;
			case 2:
				system("cls");
				khungmenu();
				textmenu();
				Goto(47, 10); 
				printf("CHON NHOM HOAC LOP");
				Goto(49, 14); 
				printf("%c 1 %c Nhom tre.", 17, 16);
				Goto(49, 16); 
				printf("%c 2 %c Lop mau giao.", 17, 16);
				Goto(49, 18); 
				printf("%c 3 %c Tro ve.", 17, 16);
				Goto(85, 28); 
				printf("lua chon mot gia tri %c ", 16);
				int key4;
				scanf("%d", &key4);
				switch(key4){
					case 1:
						system("cls");
						khungmenu();
						textmenu();
						Goto(53, 10); 
						printf("CHON NHOM");
						Goto(40, 14); 
						printf("%c 1 %c Nhom tre tu 3 den 12 thang tuoi.", 17, 16);
						Goto(40, 16); 
						printf("%c 2 %c Nhom tre tu 13 den 24 thang tuoi.", 17, 16);
						Goto(40, 18); 
						printf("%c 3 %c Nhom tre tu 25 den 36 thang tuoi.", 17, 16);
						Goto(40, 20); 
						printf("%c 4 %c Tro ve.", 17, 16);
						Goto(85, 28); 
						printf("lua chon mot gia tri %c ", 16);
						int key5;
						scanf("%d", &key5);
						switch(key5){
							case 1:
								system("cls");
								DanhSach();
								nhapTuFile(nhom1,sln1,"thongtinn1.bin");
								for(i=0; i<sln1 ; i++){
									xemnhom1(nhom1[i]);
								}
								printf("\n\nNhan phim bat ky de tro ve!!!");
								getch();
								break;
							case 2:
								system("cls");
								DanhSach();
								nhapTuFile(nhom2,sln2,"thongtinn2.bin");
								for(i=0; i<sln2 ; i++){
									xemnhom2(nhom2[i]);
								}
								printf("\n\nNhan phim bat ky de tro ve!!!");
								getch();
								break;
							case 3:
								system("cls");
								DanhSach();
								nhapTuFile(nhom3,sln3,"thongtinn3.bin");
								for(i=0; i<sln3 ; i++){
									xemnhom3(nhom3[i]);
								}
								printf("\n\nNhan phim bat ky de tro ve!!!");
								getch();
								break;
							case 4:
								break;
						}
						break;
					case 2:
						system("cls");
						Goto(47, 10); 
						printf("CHON LOP");
						Goto(45, 14);
						printf("%c 1 %cLop mau giao 3 tuoi den 4 tuoi.", 17, 16);
						Goto(45, 16);
						printf("%c 2 %cLop mau giao 4 tuoi den 5 tuoi.", 17, 16);
						Goto(45, 18);
						printf("%c 3 %cLop mau giao 5 tuoi den 6 tuoi.", 17, 16);
						Goto(45, 20);
						printf("%c 4 %cTro ve.", 17, 16);
						Goto(85, 28); 
						printf("lua chon mot gia tri %c ", 16);
						int key6;
						scanf("%d", &key6);
						switch(key6){
							case 1:
								system("cls");
								DanhSach();
								nhapTuFile(lop1,sll1,"thongtinl1.bin");
								for(i=0; i<sll1 ; i++){
									xemlop1(lop1[i]);
								}
								printf("\n\nNhan phim bat ky de tro ve!!!");
								getch();
								break;
							case 2:
								system("cls");
								DanhSach();
								nhapTuFile(lop2,sll2,"thongtinl2.bin");
								for(i=0; i<sll2 ; i++){
									xemlop2(lop2[i]);
								}
								printf("\n\nNhan phim bat ky de tro ve!!!");
								getch();
								break;
							case 3:
								system("cls");
								DanhSach();
								nhapTuFile(lop3,sll3,"thongtinl3.bin");
								for(i=0; i<sll3 ; i++){
									xemlop3(lop3[i]);
								}
								printf("\n\nNhan phim bat ky de tro ve!!!");
								getch();
								break;
							case 4:
								break;
						}
						break;
					case 3:
						break;
				}
				break;
			case 3:
				system("cls");
				khungmenu();
				textmenu();
				danhsach();
				luachon();
				break;
		}

	}
	while(key);
}

//1.1>>english
void information(){
	system("cls");
	struct Little group1[25];
	struct Little group2[25];
	struct Little group3[25];
	struct Little class1[30];
	struct Little class2[30];
	struct Little class3[30];
	int amg1=0;
	int amg2=0;
	int amg3=0;
	int amc1=0;
	int amc2=0;
	int amc3=0;
	int key;
	int i;
	do{
		system("cls");
		khungmenu();
		ShowScrollbar(0);
		textmenu();
		Goto(45 , 10); 
		printf("%c 1 %c Enter the information.", 17, 16);
		Goto(45 , 13); 
		printf("%c 2 %c View information.", 17, 16);
		Goto(45 , 16); 
		printf("%c 3 %c Back.", 17, 16);
		Goto(85 , 28); 
		printf("Choose a value %c ", 16);
		scanf("%d", &key);
		struct Little little;
		switch(key){
			case 1:
				system("cls");
				khungmenu();
				textmenu();
				Goto(47, 10); 
				printf("Select group or class");
				Goto(49, 14); 
				printf("%c 1 %c Young group.", 17, 16);
				Goto(49, 16); 
				printf("%c 2 %c Kindergarten class.", 17, 16);
				Goto(49, 18); 
				printf("%c 3 %c Back.", 17, 16);
				Goto(85, 28); 
				printf("Choose a value %c ", 16);
				int key1;
				scanf("%d", &key1);
				switch(key1){
					case 1:
						system("cls");
						khungmenu();
						textmenu();
						Goto(53, 10); 
						printf("Select group");
						Goto(40, 14); 
						printf("%c 1 %c Children from 3 to 12 months old.", 17, 16);
						Goto(40, 16); 
						printf("%c 2 %c Children from 13 to 24 months old.", 17, 16);
						Goto(40, 18); 
						printf("%c 3 %c Children from 24 to 36 months old.", 17, 16);
						Goto(40, 20); 
						printf("%c 4 %c Back.", 17, 16);
						Goto(85, 28); 
						printf("Choose a value %c ", 16);
						int key2;
						scanf("%d", &key2);
						switch(key2){
							case 1:
								system("cls");
								khungmenu();
								little = EnterLittle1();
								group1[amg1++] = little;
								Goto(45, 28);
								printf("Press any key to finish!!!");
								getch();
								break;
							case 2:
								system("cls");
								khungmenu();
								little = EnterLittle2();
								group2[amg2++] = little;
								Goto(45, 28);
								printf("Press any key to finish!!!");
								getch();
								break;
							case 3:
								system("cls");
								khungmenu();
								little = EnterLittle3();
								group3[amg3++] = little;
								Goto(45, 28);
								printf("Press any key to finish!!!");
								getch();
								break;
							case 4:
								break;
						}
						break;
					case 2:
						system("cls");
						Goto(47, 10); 
						printf("Select class");
						Goto(45, 14);
						printf("%c 1 %cKindergarten 3 years old to 4 years old.", 17, 16);
						Goto(45, 16);
						printf("%c 2 %cKindergarten 4 years old to 5 years old.", 17, 16);
						Goto(45, 18);
						printf("%c 3 %cKindergarten 5 years old to 6 years old.", 17, 16);
						Goto(45, 20);
						printf("%c 4 %cBack.", 17, 16);
						Goto(85, 28); 
						printf("Choose a value %c ", 16);
						int key3;
						scanf("%d", &key3);
						switch(key3){
							case 1:
								system("cls");
								khungmenu();
								little = EnterLittle4();
								class1[amc1++] = little;
								Goto(45, 28);
								printf("Press any key to finish!!!");
								getch();
								break;
							case 2:
								system("cls");
								khungmenu();
								little = EnterLittle5();
								class2[amc2++] = little;
								Goto(45, 28);
								printf("Press any key to finish!!!");
								getch();
								break;
							case 3:
								system("cls");
								khungmenu();
								little = EnterLittle6();
								class3[amc3++] = little;
								Goto(45, 28);
								printf("Press any key to finish!!!");
								getch();
								break;
							case 4:
								break;
						}
						break;
					case 3:
						break;
				}
				break;
			case 2:
				system("cls");
				khungmenu();
				textmenu();
				Goto(47, 10); 
				printf("Select group or class");
				Goto(49, 14); 
				printf("%c 1 %c Young group.", 17, 16);
				Goto(49, 16); 
				printf("%c 2 %c Kindergarten class.", 17, 16);
				Goto(49, 18); 
				printf("%c 3 %c Back.", 17, 16);
				Goto(85, 28); 
				printf("Choose a value %c ", 16);
				int key4;
				scanf("%d", &key4);
				switch(key4){
					case 1:
						system("cls");
						khungmenu();
						textmenu();
						Goto(53, 10); 
						printf("Select group");
						Goto(40, 14); 
						printf("%c 1 %c Children from 3 to 12 months old.", 17, 16);
						Goto(40, 16); 
						printf("%c 2 %c Children from 13 to 24 months old.", 17, 16);
						Goto(40, 18); 
						printf("%c 3 %c Children from 24 to 36 months old.", 17, 16);
						Goto(40, 20); 
						printf("%c 4 %c Back.", 17, 16);
						Goto(85, 28); 
						printf("Choose a value %c ", 16);
						int key5;
						scanf("%d", &key5);
						switch(key5){
							case 1:
								system("cls");
								List();
								for(i=0; i<amg1 ; i++){
									viewgroup1(group1[i]);
								}
								printf("\n\nPress any key to return!!!");
								getch();
								break;
							case 2:
								system("cls");
								List();
								for(i=0; i<amg2 ; i++){
									viewgroup2(group2[i]);
								}
								printf("\n\nPress any key to return!!!");
								getch();
								break;
							case 3:
								system("cls");
								List();
								for(i=0; i<amg3 ; i++){
									viewgroup3(group3[i]);
								}
								printf("\n\nPress any key to return!!!");
								getch();
								break;
							case 4:
								break;
						}
						break;
					case 2:
						system("cls");
						Goto(47, 10); 
						printf("Select class");
						Goto(45, 14);
						printf("%c 1 %cKindergarten 3 years old to 4 years old.", 17, 16);
						Goto(45, 16);
						printf("%c 2 %cKindergarten 4 years old to 5 years old.", 17, 16);
						Goto(45, 18);
						printf("%c 3 %cKindergarten 5 years old to 6 years old.", 17, 16);
						Goto(45, 20);
						printf("%c 4 %cBack.", 17, 16);
						Goto(85, 28); 
						printf("Choose a value %c ", 16);
						int key6;
						scanf("%d", &key6);
						switch(key6){
							case 1:
								system("cls");
								List();
								for(i=0; i<amc1 ; i++){
									viewclass1(class1[i]);
								}
								printf("\n\nPress any key to return!!!");
								getch();
								break;
							case 2:
								system("cls");
								List();
								for(i=0; i<amc2 ; i++){
									viewclass2(class2[i]);
								}
								printf("\n\nPress any key to return!!!");
								getch();
								break;
							case 3:
								system("cls");
								List();
								for(i=0; i<amc3 ; i++){
									viewclass3(class3[i]);
								}
								printf("\n\nPress any key to return!!!");
								getch();
								break;
							case 4:
								break;
						}
						break;
					case 3:
						break;
				}
				break;
			case 3:
				system("cls");
				khungmenu();
				textmenu();
				list();
				selection();
				break;
		}

	}
	while(key);
}

struct HocPhi Dong1(){
	struct HocPhi hocphi;
	Goto(45, 5);
	printf("DONG HOC PHI\n");
	nhapHoTen(&hocphi.name);
	Goto(45, 12);
	printf("Nhap ID: 1N");
	scanf("%d",&hocphi.ID1);
	hocphi.hp=1950000;
	Goto(45, 16);
	printf("Hoc phi cua be la %d dong",hocphi.hp);
	return hocphi;
}

struct HocPhi Dong2(){
	struct HocPhi hocphi;
	Goto(45, 5);
	printf("DONG HOC PHI\n");
	nhapHoTen(&hocphi.name);
	Goto(45, 12);
	printf("Nhap ID: 2N");
	scanf("%d",&hocphi.ID2);
	hocphi.hp=1950000;
	Goto(45, 16);
	printf("Hoc phi cua be la %d dong",hocphi.hp);
	return hocphi;
}

struct HocPhi Dong3(){
	struct HocPhi hocphi;
	Goto(45, 5);
	printf("DONG HOC PHI\n");
	nhapHoTen(&hocphi.name);
	Goto(45, 12);
	printf("Nhap ID: 3N");
	scanf("%d",&hocphi.ID3);
	hocphi.hp=1950000;
	Goto(45, 16);
	printf("Hoc phi cua be la %d dong",hocphi.hp);
	return hocphi;
}

struct HocPhi Dong4(){
	struct HocPhi hocphi;
	Goto(45, 5);
	printf("DONG HOC PHI\n");
	nhapHoTen(&hocphi.name);
	Goto(45, 12);
	printf("Nhap ID: 1L");
	scanf("%d",&hocphi.ID4);
	hocphi.hp=1955000;
	Goto(45, 16);
	printf("Hoc phi cua be la %d dong",hocphi.hp);
	return hocphi;
}

struct HocPhi Dong5(){
	struct HocPhi hocphi;
	Goto(45, 5);
	printf("DONG HOC PHI\n");
	nhapHoTen(&hocphi.name);
	Goto(45, 12);
	printf("Nhap ID: 2L");
	scanf("%d",&hocphi.ID5);
	hocphi.hp=1960000;
	Goto(45, 16);
	printf("Hoc phi cua be la %d dong",hocphi.hp);
	return hocphi;
}

struct HocPhi Dong6(){
	struct HocPhi hocphi;
	Goto(45, 5);
	printf("DONG HOC PHI\n");
	nhapHoTen(&hocphi.name);
	Goto(45, 12);
	printf("Nhap ID: 3L");
	scanf("%d",&hocphi.ID6);
	hocphi.hp=2000000;
	Goto(45, 16);
	printf("Hoc phi cua be la %d dong",hocphi.hp);
	return hocphi;
}

void DanhSachHocPhi(){
	system("cls");
	printf("\n|%-5s|%-20s|%-10s|%-10s|\n", "ID", "Ho & Ten dem", "Ten","Tinh trang");
	for(int i=0; i<50; i++){
		printf("%c", 205);
	}
}

void xemhpnhom1(struct HocPhi hocphi){
	printf("\n|1N%-3d|%-7s%-13s|%-10s|%-10s|\n" , hocphi.ID1 ,hocphi.name.Ho, hocphi.name.HoDem, hocphi.name.Ten,"Da dong");

}

void xemhpnhom2(struct HocPhi hocphi){
	printf("\n|2N%-3d|%-7s%-13s|%-10s|%-10s|\n" , hocphi.ID2 ,hocphi.name.Ho, hocphi.name.HoDem, hocphi.name.Ten,"Da dong");

}
void xemhpnhom3(struct HocPhi hocphi){
	printf("\n|3N%-3d|%-7s%-13s|%-10s|%-10s|\n" , hocphi.ID3 ,hocphi.name.Ho, hocphi.name.HoDem, hocphi.name.Ten,"Da dong");

}

void xemhplop1(struct HocPhi hocphi){
	printf("\n|1L%-3d|%-7s%-13s|%-10s|%-10s|\n" , hocphi.ID4 ,hocphi.name.Ho, hocphi.name.HoDem, hocphi.name.Ten,"Da dong");

}

void xemhplop2(struct HocPhi hocphi){
	printf("\n|2L%-3d|%-7s%-13s|%-10s|%-10s|\n" , hocphi.ID5 ,hocphi.name.Ho, hocphi.name.HoDem, hocphi.name.Ten,"Da dong");

}

void xemhplop3(struct HocPhi hocphi){
	printf("\n|3L%-3d|%-7s%-13s|%-10s|%-10s|\n" , hocphi.ID6 ,hocphi.name.Ho, hocphi.name.HoDem, hocphi.name.Ten,"Da dong");

}
void xuatVaoFile(struct HocPhi hocphi[], int soluong,char tenFile[100]){
	FILE *f;
	f = fopen(tenFile, "wb");
	fwrite(&soluong, sizeof(soluong), 1, f);
	for(int i=0; i<soluong; i++){
		fwrite(&hocphi[i], sizeof(HocPhi), 1, f);
	}
	fclose(f);
}
void nhapTuFile(struct HocPhi hocphi[], int &soluong,char tenFile[100]){
	FILE *f;
	f = fopen(tenFile, "rb");
	fread(&soluong, sizeof(soluong), 1, f);
	for(int i=0; i<soluong; i++){
		fread(&hocphi[i], sizeof(HocPhi), 1, f);
	}
	fclose(f);
}
	struct HocPhi hpnhom1[25];
	struct HocPhi hpnhom2[25];
	struct HocPhi hpnhom3[25];
	struct HocPhi hplop1[30];
	struct HocPhi hplop2[30];
	struct HocPhi hplop3[30];
	int hpsln1=0;
	int hpsln2=0;
	int hpsln3=0;
	int hpsll1=0;
	int hpsll2=0;
	int hpsll3=0;
//2>>Hoc phi.
void hocphi(){
	system("cls");
	int key;
	int i;
	do{
	system("cls");
	khungmenu();
	textmenu();
	Goto(45 , 10); 
	printf("%c 1 %c Dong hoc phi.", 17, 16);
	Goto(45 , 12); 
	printf("%c 2 %c Danh sach cac be da dong hoc phi.", 17, 16);
	Goto(45 , 14); 
	printf("%c 3 %c Tro ve.", 17, 16);
	Goto(85 , 28); 
	printf("Lua chon mot gia tri %c ", 16);
	scanf("%d", &key);
	struct HocPhi hocphi;
	switch(key){
			case 1:
				system("cls");
				khungmenu();
				textmenu();
				Goto(47, 10); 
				printf("CHON NHOM HOAC LOP");
				Goto(49, 14); 
				printf("%c 1 %c Nhom tre.", 17, 16);
				Goto(49, 16); 
				printf("%c 2 %c Lop mau giao.", 17, 16);
				Goto(49, 18); 
				printf("%c 3 %c Tro ve.", 17, 16);
				Goto(85, 28); 
				printf("lua chon mot gia tri %c ", 16);
				int key1;
				scanf("%d", &key1);
				switch(key1){
					case 1:
						system("cls");
						khungmenu();
						textmenu();
						Goto(53, 10); 
						printf("CHON NHOM");
						Goto(40, 14); 
						printf("%c 1 %c Nhom tre tu 3 den 12 thang tuoi.", 17, 16);
						Goto(40, 16); 
						printf("%c 2 %c Nhom tre tu 13 den 24 thang tuoi.", 17, 16);
						Goto(40, 18); 
						printf("%c 3 %c Nhom tre tu 25 den 36 thang tuoi.", 17, 16);
						Goto(40, 20); 
						printf("%c 4 %c Tro ve.", 17, 16);
						Goto(85, 28); 
						printf("lua chon mot gia tri %c ", 16);
						int key2;
						scanf("%d", &key2);
						switch(key2){
							case 1:
								system("cls");
								khungmenu();
								hocphi = Dong1();
								hpnhom1[hpsln1++] = hocphi;
								xuatVaoFile(hpnhom1,hpsln1,"hocphin1.bin");
								Goto(45, 28);
								printf("Nhan phim bat ki de xac nhan da dong");
								getch();
								break;
							case 2:
								system("cls");
								khungmenu();
								hocphi = Dong2();
								hpnhom2[hpsln2++] = hocphi;
								xuatVaoFile(hpnhom2,hpsln2,"hocphin2.bin");
								Goto(45, 28);
								printf("Nhan phim bat ki de xac nhan da dong");
								getch();
								break;
							case 3:
								system("cls");
								khungmenu();
								hocphi = Dong3();
								hpnhom3[hpsln3++] = hocphi;
								xuatVaoFile(hpnhom3,hpsln3,"hocphin3.bin");
								Goto(45, 28);
								printf("Nhan phim bat ki de xac nhan da dong");
								getch();
								break;
							case 4:
								break;
						}
						break;
					case 2:
						system("cls");
						Goto(47, 10); 
						printf("CHON LOP");
						Goto(45, 14);
						printf("%c 1 %cLop mau giao 3 tuoi den 4 tuoi.", 17, 16);
						Goto(45, 16);
						printf("%c 2 %cLop mau giao 4 tuoi den 5 tuoi.", 17, 16);
						Goto(45, 18);
						printf("%c 3 %cLop mau giao 5 tuoi den 6 tuoi.", 17, 16);
						Goto(45, 20);
						printf("%c 4 %cTro ve.", 17, 16);
						Goto(85, 28); 
						printf("lua chon mot gia tri %c ", 16);
						int key3;
						scanf("%d", &key3);
						switch(key3){
							case 1:
								system("cls");
								khungmenu();
								hocphi = Dong4();
								hplop1[hpsll1++] = hocphi;
								xuatVaoFile(hplop1,hpsll1,"hocphil1.bin");
								Goto(45, 28);
								printf("Nhan phim bat ki de xac nhan da dong");
								getch();
								break;
							case 2:
								system("cls");
								khungmenu();
								hocphi = Dong5();
								hplop2[hpsll2++] = hocphi;
								xuatVaoFile(hplop2,hpsll2,"hocphil2.bin");
								Goto(45, 28);
								printf("Nhan phim bat ki de xac nhan da dong");
								getch();
								break;
							case 3:
								system("cls");
								khungmenu();
								hocphi = Dong6();
								hplop3[hpsll3++] = hocphi;
								xuatVaoFile(hplop3,hpsll3,"hocphil3.bin");
								Goto(45, 28);
								printf("Nhan phim bat ki de xac nhan da dong");
								getch();
								break;
							case 4:
								break;
						}
						break;
					case 3:
						break;
				}
				break;
			case 2:
				system("cls");
				khungmenu();
				textmenu();
				Goto(47, 10); 
				printf("CHON NHOM HOAC LOP");
				Goto(49, 14); 
				printf("%c 1 %c Nhom tre.", 17, 16);
				Goto(49, 16); 
				printf("%c 2 %c Lop mau giao.", 17, 16);
				Goto(49, 18); 
				printf("%c 3 %c Tro ve.", 17, 16);
				Goto(85, 28); 
				printf("lua chon mot gia tri %c ", 16);
				int key4;
				scanf("%d", &key4);
				switch(key4){
					case 1:
						system("cls");
						khungmenu();
						textmenu();
						Goto(53, 10); 
						printf("CHON NHOM");
						Goto(40, 14); 
						printf("%c 1 %c Nhom tre tu 3 den 12 thang tuoi.", 17, 16);
						Goto(40, 16); 
						printf("%c 2 %c Nhom tre tu 13 den 24 thang tuoi.", 17, 16);
						Goto(40, 18); 
						printf("%c 3 %c Nhom tre tu 25 den 36 thang tuoi.", 17, 16);
						Goto(40, 20); 
						printf("%c 4 %c Tro ve.", 17, 16);
						Goto(85, 28); 
						printf("lua chon mot gia tri %c ", 16);
						int key5;
						scanf("%d", &key5);
						switch(key5){
							case 1:
								system("cls");
								DanhSachHocPhi();
								nhapTuFile(hpnhom1,hpsln1,"hocphin1.bin");
								for(i=0; i<sln1 ; i++){
									xemhpnhom1(hpnhom1[i]);
								}
								printf("\n\nNhan phim bat ky de tro ve!!!");
								getch();
								break;
							case 2:
								system("cls");
								DanhSachHocPhi();
								nhapTuFile(hpnhom2,hpsln2,"hocphin2.bin");
								for(i=0; i<sln2 ; i++){
									xemhpnhom2(hpnhom2[i]);
								}
								printf("\n\nNhan phim bat ky de tro ve!!!");
								getch();
								break;
							case 3:
								system("cls");
								DanhSachHocPhi();
								nhapTuFile(hpnhom3,hpsln3,"hocphin3.bin");
								for(i=0; i<sln3 ; i++){
									xemhpnhom3(hpnhom3[i]);
								}
								printf("\n\nNhan phim bat ky de tro ve!!!");
								getch();
								break;
							case 4:
								break;
						}
						break;
					case 2:
						system("cls");
						Goto(47, 10); 
						printf("CHON LOP");
						Goto(45, 14);
						printf("%c 1 %cLop mau giao 3 tuoi den 4 tuoi.", 17, 16);
						Goto(45, 16);
						printf("%c 2 %cLop mau giao 4 tuoi den 5 tuoi.", 17, 16);
						Goto(45, 18);
						printf("%c 3 %cLop mau giao 5 tuoi den 6 tuoi.", 17, 16);
						Goto(45, 20);
						printf("%c 4 %cTro ve.", 17, 16);
						Goto(85, 28); 
						printf("lua chon mot gia tri %c ", 16);
						int key6;
						scanf("%d", &key6);
						switch(key6){
							case 1:
								system("cls");
								DanhSachHocPhi();
								nhapTuFile(hplop1,hpsll1,"hocphil1.bin");
								for(i=0; i<sll1 ; i++){
									xemhplop1(hplop1[i]);
								}
								printf("\n\nNhan phim bat ky de tro ve!!!");
								getch();
								break;
							case 2:
								system("cls");
								DanhSachHocPhi();
								nhapTuFile(hplop2,hpsll2,"hocphil2.bin");
								for(i=0; i<sll2 ; i++){
									xemhplop2(hplop2[i]);
								}
								printf("\n\nNhan phim bat ky de tro ve!!!");
								getch();
								break;
							case 3:
								system("cls");
								DanhSachHocPhi();
								nhapTuFile(hplop3,hpsll3,"hocphil3.bin");
								for(i=0; i<sll3 ; i++){
									xemhplop3(hplop3[i]);
								}
								printf("\n\nNhan phim bat ky de tro ve!!!");
								getch();
								break;
							case 4:
								break;
						}
						break;
					case 3:
						break;
				}
				break;
			case 3:
				system("cls");
				khungmenu();
				textmenu();
				danhsach();
				luachon();
				break;
		}
	}while(key);
}

//2.2>>english
void tuition(){
	system("cls");
	khungmenu();
	textmenu();
	Goto(45 , 10); 
	printf("%c 1 %c Pay tuition.", 17, 16);
	Goto(45 , 12); 
	printf("%c 2 %c See list of tuition fees.", 17, 16);
	Goto(45 , 14); 
	printf("%c 3 %c Save the list.", 17, 16);
	Goto(45 , 16); 
	printf("%c 4 %c Back.", 17, 16);
	Goto(85 , 28); 
	printf("Choose a value %c ", 16);
	int luachon22;
	scanf("%d", &luachon22);
	switch(luachon22){
		case 1:
			system("cls");
			khungmenu();
			Goto(55 , 20);
			printf("This is not composed 4");
			getchar();
		case 2:
			system("cls");
			khungmenu();
			Goto(55 , 20);
			printf("This is not composed 5");
			getchar();
		case 3:
			system("cls");
			khungmenu();
			Goto(55 , 20);
			printf("This is not composed 6");
			getchar();
		case 4:
			system("cls");
			khungmenu();
			textmenu();
			list();
			selection();
	}
	getchar();
} 

//3>>Ngon ngu.
void ngonngu(){
	system("cls");
	khungmenu();
	textmenu();
	Goto(45 , 10); 
	printf("Lua chon ngon ngu ban muon hien thi");
	Goto(45 , 14); 
	printf("%c 1 %c Tieng viet.",17, 16);
	Goto(45 , 18); 
	printf("%c 2 %c English.", 17, 16);
	Goto(85 , 28); 
	printf("Lua chon mot gia tri %c ", 16);
	int luachon3;
	scanf("%d", &luachon3);
	switch(luachon3){
		case 1:
			system("cls");
			khungmenu();
			textmenu();
			danhsach();
			luachon();
		case 2:
			system("cls");
			khungmenu();
			textmenu();
			list();
			selection();
	}
	getchar();
}

//3.3>>english
void Language(){
	system("cls");
	khungmenu();
	textmenu();
	Goto(45 , 10); 
	printf("Select the language you want to display");
	Goto(45 , 14); 
	printf("%c 1 %c Vietnamese.",17, 16);
	Goto(45 , 18); 
	printf("%c 2 %c English.", 17, 16);
	Goto(85 , 28); 
	printf("Choose a value %c ", 16);
	int luachon33;
	scanf("%d", &luachon33);
	switch(luachon33){
		case 1:
			system("cls");
			khungmenu();
			textmenu();
			danhsach();
			luachon();
		case 2:
			system("cls");
			khungmenu();
			textmenu();
			list();
			selection();
	}
	getchar();
	getchar();
}

//5>> thoat
void thoat(){
	system("cls");
	khungmenu();
	textmenu();
	Goto(40, 10);
	printf("Ban co muon thoat chuong trinh?");
	Goto(45 , 12);
	printf("%c 1 %c Thoat.", 17 , 16);
	Goto(45 , 16);
	printf("%c 2 %c Tro ve", 17 , 16);
	Goto(85 , 28);
	printf("Hay lua chon mot gia tri %c ", 16);
	int luachon5;
	scanf("%d", &luachon5);
	switch(luachon5){
		case 1:
			break;
		case 2:
			system("cls");
			khungmenu();
			textmenu();
			danhsach();
			luachon();
	}
}

//5.5>>english
void exit(){
	system("cls");
	khungmenu();
	textmenu();
	Goto(40, 10);
	printf("do you want to exit the program??");
	Goto(45 , 12);
	printf("%c 1 %c Exit.", 17 , 16);
	Goto(45 , 16);
	printf("%c 2 %c Back", 17 , 16);
	Goto(85 , 28);
	printf("Choose a value %c ", 16);
	int luachon55;
	scanf("%d", &luachon55);
	switch(luachon55){
		case 1:
			break;
		case 2:
			system("cls");
			khungmenu();
			textmenu();
			list();
			selection();
	}
}

void danhsach(){
	Goto(48 , 10); 
	printf("%c 1 %c Thong tin.",17, 16);
	Goto(48 , 12); 
	printf("%c 2 %c Hoc phi.",17, 16);
	Goto(48 , 14); 
	printf("%c 3 %c Ngon ngu.",17, 16);
	Goto(48 , 16); 
	printf("%c 4 %c Thoat.",17, 16);
	Goto(85 , 28);
	printf("Hay lua chon mot gia tri %c ", 16);
}
void list(){
	Goto(48 , 10); 
	printf("%c 1 %c Information.",17, 16);
	Goto(48 , 12); 
	printf("%c 2 %c Tuition.",17, 16);
	Goto(48 , 14); 
	printf("%c 3 %c Language.",17, 16);
	Goto(48 , 16); 
	printf("%c 4 %c Exit.",17, 16);
	Goto(85 , 28);
	printf("Choose a value %c ", 16);
}
void luachon(){
	int luachon;
	scanf("%d", &luachon);
	switch(luachon){
		case 1:
			thongtin();
			getchar();
		case 2:
			hocphi();
			getchar();
		case 3:
			ngonngu();
			getchar();
		case 4:
			thoat();
	}
}
void selection(){
	int selection;
	scanf("%d", &selection);
	switch(selection){
		case 1:
			information();
			getchar();
		case 2:
			tuition();
			getchar();
		case 3:
			Language();
			getchar();
		case 4:
			exit();
			getchar();
	}
	getchar();
}
