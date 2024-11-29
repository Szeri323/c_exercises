#include <stdio.h>
#include <stdlib.h>

typedef struct Token {
	char* literal;
	int line;
	int column;
}token_t;

token_t** create_array_of_pointers(token_t* tokens, size_t count) {
	token_t** token_pointers = malloc(count * sizeof(token_t));
	if(token_pointers == NULL) {
		exit(1);
	}

	for(size_t i = 0; i < count; ++i) {
		token_pointers[i] = (token_t*)malloc(sizeof(token_t));
		if(token_pointers[i] == NULL) {
			exit(1);
		}
		token_pointers[i]->literal = tokens[i].literal;
		token_pointers[i]->line = tokens[i].line;
		token_pointers[i]->column = tokens[i].column;
	}
	return token_pointers;
}

int main() {
	token_t tokens[3] = {
		{"foo", 1, 1},
		{"bar",	2, 5},
		{"baz", 3, 10}
	};
	token_t** result = create_array_of_pointers(tokens, 3);
	for(int i = 0; i < 3; ++i) {
		printf("%d\n", result[i]->line);
	}

	for(int i = 0; i < 3; ++i) {
		free(result[i]);
	}
	free(result);
}
