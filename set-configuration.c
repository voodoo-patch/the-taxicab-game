#include <stdio.h>
#include <stdlib.h>
#include "configuration.h"

int main(int argc, char *argv[]){
	if(argc != 2){
		printf("usage: ./setconf <file_path>");
		return 1;	
	} 
	char *path = argv[1];
	FILE *file = fopen(path, "r");

	if(file == NULL) return 1;

    char *line = NULL;
    size_t len = 0;
    configuration config = EMPTY_CONFIG;
	while(getline(&line, &len, file) != -1){
		char *key = malloc(15*sizeof(char));
		unsigned int value;
		
		sscanf(line, "%s %u", key, &value);
		config = config_set(&config, key, value);
		free(key);
	}
	
	fclose(file);
	free(line);

	config_print(&config);	

	return 0;
}