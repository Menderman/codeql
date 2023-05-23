.PHONY: dirs clean stat

all: dirs ut_main

ut_main:
	g++ test/ut_main.c -o bin/ut_main

dirs:
	mkdir -p bin
	mkdir -p obj

clean:
	rm -f bin/* obj/*

stat:
	wc -l src/* test/*.h test/*.c
