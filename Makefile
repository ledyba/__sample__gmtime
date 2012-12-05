all: gmtime_test gmtime_test_newlib

gmtime_test:
	gcc -o gmtime_test main.c -O0 -g

gmtime_test_newlib:
	/opt/gcc-new/bin/gcc-4.7 -nostdlib -static main.c -I /opt/gcc-new/include -L /opt/gcc-new/lib -o gmtime_test_newlib -O0 -g -lc -lm -DNEWLIB

clean:
	rm -f gmtime_test gmtime_test_newlib *.o
