
typedef struct {
	unsigned int SO_WIDTH;
	unsigned int SO_HEIGHT;
	unsigned int SO_HOLES;
	unsigned int SO_TIMENSEC_MIN;
	unsigned int SO_TIMENSEC_MAX;
	unsigned int SO_CAP_MIN;
	unsigned int SO_CAP_MAX;
	unsigned int SO_SOURCES;
	unsigned int SO_TIMEOUT;
	unsigned int SO_TOP_CELLS;
	unsigned int SO_TAXI;
} configuration;

#define EMPTY_CONFIG { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }

/*
* Prints the current configuration
*/
extern void config_print(configuration *);

/*
* Updates the specified configuration key with the provided value
*
* configuration *: configuration to update
* char *: key to update between {SO_WIDTH|SO_HEIGHT|SO_HOLES|...}
* unsigned int: value to set provided key
*/
extern configuration config_set(configuration *, char *, unsigned int);