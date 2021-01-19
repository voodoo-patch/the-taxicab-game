#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#import "configuration.c"

void print_config(configuration *config){
	printf("CONFIGURATION READ:\n");
	printf("\nSO_WIDTH: %u", config->SO_WIDTH);
	printf("\nSO_HEIGHT: %u", config->SO_HEIGHT);
	printf("\nSO_HOLES: %u", config->SO_HOLES);
	printf("\nSO_TIMENSEC_MIN: %u", config->SO_TIMENSEC_MIN);
	printf("\nSO_TIMENSEC_MAX: %u", config->SO_TIMENSEC_MAX);
	printf("\nSO_CAP_MIN: %u", config->SO_CAP_MIN);
	printf("\nSO_CAP_MAX: %u", config->SO_CAP_MAX);
	printf("\nSO_SOURCES: %u", config->SO_SOURCES);
	printf("\nSO_TIMEOUT: %u", config->SO_TIMEOUT);
	printf("\nSO_TOP_CELLS: %u", config->SO_TOP_CELLS);
	printf("\nSO_TAXI: %u", config->SO_TAXI);
}

configuration config_set(configuration * config, char * key, unsigned int value){	
	if(strcmp(key, "SO_WIDTH") == 0){
		config->SO_WIDTH = value;
	} else if(strcmp(key, "SO_HEIGHT") == 0){
		config->SO_HEIGHT = value;
	} else if(strcmp(key, "SO_HOLES") == 0){
		config->SO_HOLES = value;
	} else if(strcmp(key, "SO_TIMENSEC_MIN") == 0){
		config->SO_TIMENSEC_MIN = value;
	} else if(strcmp(key, "SO_TIMENSEC_MAX") == 0){
		config->SO_TIMENSEC_MAX = value;
	} else if(strcmp(key, "SO_CAP_MIN") == 0){
		config->SO_CAP_MIN = value;
	} else if(strcmp(key, "SO_CAP_MAX") == 0){
		config->SO_CAP_MAX = value;
	} else if(strcmp(key, "SO_SOURCES") == 0){
		config->SO_SOURCES = value;
	} else if(strcmp(key, "SO_TIMEOUT") == 0){
		config->SO_TIMEOUT = value;
	} else if(strcmp(key, "SO_TOP_CELLS") == 0){
		config->SO_TOP_CELLS = value;
	} else if(strcmp(key, "SO_TAXI") == 0){
		config->SO_TAXI = value;
	} else {
		printf("Invalid config key: %s", key);
	}	

	return *config;
}