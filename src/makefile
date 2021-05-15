CC=gcc


ODIR=obj
FLITEDIR=/usr/share/flite/flite

serial_to_voice: main.o
	$(CC) -Wall -g -o serial_to_voice main.c -I$(FLITEDIR) -L$FLITEDIR/lib -lflite_cmu_us_kal -lflite_usenglish -lflite_cmulex -lflite -lm
