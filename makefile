CFLAGS  = -std=c99
CFLAGS += -g

CFLAGS += -Wextra

CC = gcc

.PHONY: clean, build

build: tests.out
	

test: tests.out
	@./tests.out

clean:
	rm -rf *.o *.out *.out.dSYM

tests.out: test/test_isogram.c src/isogram.c src/isogram.h
	@echo Compiling $@
	@$(CC) $(CFLAGS) src/isogram.c test/vendor/unity.c test/test_isogram.c -o tests.out
