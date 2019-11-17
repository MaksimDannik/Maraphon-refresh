void mx_printchar(char x);
void mx_printstr(const char* s);
int mx_strlen(int i);

int main(int argc, char* argv[]) {
		int p = 1;	
	for (int i = 1; i < argc; i++) {
		mx_printstr(argv[p]);
		mx_printchar('\n');
	p++;
	}	 
}

