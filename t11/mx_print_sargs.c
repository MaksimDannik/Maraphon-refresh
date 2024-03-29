void mx_printchar(char x);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int main(int argc, char**argv) {
		
	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			for (int j = 1; j < argc; j++) {
				if (mx_strcmp(argv[i], argv[j]) < 1) {
					char *box = argv[i];
					argv[i] = argv[j];
					argv[j] = box;
				}
			}	
		}
		for (int i = 1; i < argc; i++) {
			mx_printstr(argv[i]);
			mx_printchar('\n');
			}
		return 0; 	
	}
}

