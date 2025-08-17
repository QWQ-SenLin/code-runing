#include <bits/stdc++.h>
using namespace std;

char s[1005];

int main(int argc , char *argv[]){
	if(argc < 2 || (argv[1][0] == 'h' && argv[1][1] == '\0') || (argv[1][0] == 'h' && argv[1][1] == 'e' && argv[1][2] == 'l' && argv[1][3] == 'p' && argv[1][4] == '\0')){
		puts("-------------FUCK made by QWQ_SenLin-------------");
		puts("\033[38;2;30;144;255m- make/m name test_num\033[0m:creat a problem.");
		puts("\033[38;2;30;144;255m- del/d name\033[0m:delete the problem.");
		puts("\033[38;2;30;144;255m- run/r name\033[0m:run your code.");
		puts("\033[38;2;30;144;255m- save/s name version\033[0m:save your code with the version.");
		puts("....");
		puts("-------------------------------------------------");
		puts("\033[38;2;255;140;0mtry now!\033[0m");
		return 0;
	}
	if((argv[1][0] == 'm' && argv[1][1] == '\0') || (argv[1][0] == 'm' && argv[1][1] == 'a' && argv[1][2] == 'k' && argv[1][3] == 'e' && argv[1][4] == '\0')){
		if(argc != 4){ return -1;}
		sprintf(s , "mkdir problem\\%s", argv[2]);
		system(s);
		for(int i = 1;i <= (argv[3][0] - '0');i++){
			sprintf(s , "type nul>problem\\%s\\%d.in", argv[2] , i);
			system(s);
			sprintf(s , "vim problem\\%s\\%d.in", argv[2] , i);
			system(s);
			sprintf(s , "type nul>problem\\%s\\%d.ans", argv[2] , i);
			system(s);
			sprintf(s , "vim problem\\%s\\%d.ans", argv[2] , i);
			system(s);
		}
		return 0;
	}
	if((argv[1][0] == 'd' && argv[1][1] == '\0') || (argv[1][0] == 'd' && argv[1][1] == 'e' && argv[1][2] == 'l' && argv[1][3] == '\0')){
		if(argc != 3){ return -1;}
		sprintf(s , "rmdir problem\\%s /s", argv[2]);
		system(s);
		return 0;
	}
	if((argv[1][0] == 'r' && argv[1][1] == '\0') || (argv[1][0] == 'r' && argv[1][1] == 'u' && argv[1][2] == 'n' && argv[1][3] == '\0')){
		if(argc != 3){ return -1;}
		sprintf(s , "run.exe %s", argv[2]);
		system(s);
		return 0;
	}
	if((argv[1][0] == 's' && argv[1][1] == '\0') || (argv[1][0] == 's' && argv[1][1] == 'a' && argv[1][2] == 'v' && argv[1][3] == 'e' && argv[1][4] == '\0')){
		if(argc != 4){ return -1;}
		sprintf(s , "copy std.cpp problem\\%s\\std-%s.cpp", argv[2] , argv[3]);
		system(s);
		return 0;
	}
	if((argv[1][0] == 'b' && argv[1][1] == '\0') || (argv[1][0] == 'b' && argv[1][1] == 'a' && argv[1][2] == 'c' && argv[1][3] == 'k' && argv[1][4] == '\0')){
		if(argc != 4){ return -1;}
		sprintf(s , "copy /Y problem\\%s\\std-%s.cpp std.cpp", argv[2] , argv[3]);
		system(s);
		return 0;
	}
	puts("can't unerstand.");
	return 0;
}
