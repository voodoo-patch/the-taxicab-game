CCFLAGS=-std=c89 -pedantic
ODIR=obj
CONF=config.txt

build: 
	gcc -o $(ODIR)/master.o master.c $(CCFLAGS) 
run:
	./master.o
ensure-config:
	gcc -o $(ODIR)/setconf.o set-configuration.c configuration.c $(CCFLAGS) && \
	./$(ODIR)/setconf.o $(CONF)
new-ride:
	./new-ride.o
clean: 
	rm -f $(ODIR)/*.o *~ 