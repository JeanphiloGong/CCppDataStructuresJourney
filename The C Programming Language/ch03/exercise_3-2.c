#include <stdio.h>

void escape(char s[], char t[]) {
	int i, j;
	for (i = j =0; t[i] != '\0'; ++i) {
		switch (t[i]) {
			case '\n':
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				break;
			default:
				s[j++] = t[i];
				break;
		}
	}
	s[j] = '\0';
}

void unescape(char s[], char t[]) {
	int i, j;
	for (i = j =0; t[i] != '\0'; ++i) {
		if (t[i] == '\\' && t[i+1] !='\0') {
			switch (t[i+1]) {
				case 'n':
					s[j++] = '\n';
					++i; // Skip the escape character 
					break;
				case 't':
					s[j++] = '\t';
					++i; // Skip the escape character
					break;
				default:
					s[j++] = t[i];
					break;
			}

			} else {
				s[j++] = t[i];
			}
		}
		s[j] = '\0';
	}

int main() {
	char t[] = "Hello\tWorld\n";
	char s[100];
	escape(s, t);
	printf("Escaped: %s\n", s);

	char original[100];
	unescape(original, s);
	printf("Unescaped: %s", original);
	return 0;
}
