#include <bits/stdc++.h>
using namespace std;

char s[1000005] , t[1000005] , out[1000005];

inline bool have(int x , char *sss){ sprintf(s , "problem\\%s\\%d.in" , sss , x); ifstream f(s); return f.good(); }

inline string print_file(){
	string ret = "";
	freopen(out , "r" , stdin);
	char tmp[1000005];
	while(~scanf("%[^\n]" , tmp)){
		if(strlen(tmp) > 100){ tmp[100] = tmp[101] = tmp[102] = '.';tmp[103] = '\0'; }
		int st = 0;
		while(tmp[st] == ' ') st++;
		for(int i = 0 , _ = strlen(tmp);i < _;i++) if(tmp[i] != ' ' && tmp[i] != '\n' && tmp[i] != '\0' && tmp[i] != '\r')
			ret += tmp[i];
		getchar();
		printf("%s\n" , tmp + st);
		tmp[0] = '\0';
	}
	fclose(stdin);
	return ret;
}

int main(int argc , char *argv[]){
	system("g++ std.cpp -o std.exe -std=c++14 -O2");
	int i = 0;
	while(have(++i , argv[1])){
		string ans , my;
		printf("test%d:\n" , i);
		puts("in:"); 
		sprintf(out , "problem\\%s\\%d.in" , argv[1] , i);
		print_file();
		puts("ans:");
		sprintf(out , "problem\\%s\\%d.ans" , argv[1] , i);
		ans = print_file();
		puts("out:");
		sprintf(t , "std.exe < %s > tmp" , s);
		sprintf(out , "tmp");
		double st = clock();
		system(t);
		double ed = clock() - st;
		my = print_file();
		puts("");
		if(my == ans) printf("\033[38;2;0;255;0mAC\033[0m   ");
		else printf("\033[38;2;255;0;0mWA\033[0m   ");
		printf("** ues time:");
		if(ed >= 2000) printf("\033[38;2;%d;%d;%dm" , 255 , 0 , 0);
		else if(ed >= 1000) printf("\033[38;2;%d;%d;%dm" , 200 , 0 , 0);
		else if(ed >= 600) printf("\033[38;2;%d;%d;%dm" , 150 , 50 , 0);
		else printf("\033[38;2;%d;%d;%dm" , 0 , 255 , 0);
		printf(" %.5lfms \033[0m**\n\n" , ed);
		puts("------------------------------------------");
	}
	system("del tmp /f");
}
