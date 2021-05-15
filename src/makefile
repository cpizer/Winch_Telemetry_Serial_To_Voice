FLITEDIR=/usr/share/flite/flite

serial_to_voice:
	gcc -Wall -g -o serial_to_voice main.c -I$(FLITEDIR) -L$(FLITEDIR)/lib -lflite_cmu_us_awb -lflite_cmu_us_kal -lflite_usenglish -lflite_cmulex -lflite -lm
