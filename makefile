.PHONY: dirs clean stat

SRC = src/hello.h

TEST = test/ut_hello.h

all: dirs ut_main

ut_main:
	g++ test/ut_main.cpp -o bin/ut_main

dirs:
	mkdir -p bin
	mkdir -p obj

clean:
	rm -f bin/* obj/*

stat:
	wc -l src/* test/*.h test/*.cpp
