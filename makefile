CLANG = gcc

EXECABLE = main

CODE = main


.PHONY: clean $(CLANG) build

clean:
	rm -f *.o *.so *.s *.out *.a *.i $(EXECABLE)

preprocess:
	# 预处理 gcc -E main.c -o main.i
	$(CLANG) -E $(CODE:=.c) -o $(CODE:=.i)

compile: preprocess
	# 编译 gcc -S -fverbose-asm main.i -o main.s
	$(CLANG) -S -fverbose-asm $(CODE:=.i) -o $(CODE:=.s)

assemble: compile
	# 汇编 gcc -c main.s -o main.o
	$(CLANG) -c $(CODE:=.s) -o $(CODE:=.o)
	

link: assemble
	# 链接 gcc main.o -o main
	$(CLANG) $(CODE:=.o) -o ${EXECABLE}

run: link
	./$(EXECABLE)


.DEFAULT_GOAL := run