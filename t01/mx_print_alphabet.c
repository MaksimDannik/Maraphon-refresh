void mx_printchar(char x);

void mx_print_alphabet(void) {
	char word = 'a';

	while(word <= 'z') {
		if(word >= 'A' && word <= 'Z') {
			word = word + 32; 
			mx_printchar(word);
		}
		else if(word >= 'a' && word <= 'z') { 
			word = word - 32;
			mx_printchar(word);
		}
		word++;
	} 
	mx_printchar('\n');	
}

