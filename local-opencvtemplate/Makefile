CC=g++
APP_BINARY=local-opencvtemplate

ML=/home/lubuntu/minimod/Libs/

CFLAGS += -g -DLINUX -Wall -I$(ML) -I../lib/ -I. -I/usr/local/include
LFLAGS += -lpthread -L$(ML) -L/usr/local/lib -Wl,-unresolved-symbols=ignore-in-shared-libs,-rpath,/usr/local/lib -lrt -lopencv_imgcodecs -lopencv_core -lopencv_features2d -lopencv_highgui -lopencv_imgproc -lopencv_photo -lopencv_ml

OBJECTS=main.o

all: local-opencvtemplate
Debug: local-opencvtemplate
local-opencvtemplate: $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) $(LFLAGS) -o $(APP_BINARY)

-include $(OBJECTS:.o=.d)

%.o: %.c
	$(CC) -c $(CFLAGS) $*.cpp -o $*.o
	$(CC) -MM $(CFLAGS) $*.cpp > $*.d

cleanDebug: clean
clean:
	rm -f $(OBJECTS)
	rm -f $(OBJECTS:.o=.d)
	rm -f $(APP_BINARY)





