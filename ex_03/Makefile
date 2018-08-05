COMPILER = g++
COMPILER_FLAGS = -Wall -Werror
LD_DEBUG_ARG="libs symbols"

all : shlib1 main


shlib1 :
	$(COMPILER) $(COMPILER_FLAGS) shlib1.cpp -fPIC -shared -o libshlib1.so 

main : main.cpp
	$(COMPILER) $(COMPILER_FLAGS) main.cpp -L. -lshlib1 -o run_test

run :
#	LD_DEBUG=$(LD_DEBUG_ARG) strace -e trace=write,writev -o run.log ./run_test 
	LD_DEBUG=$(LD_DEBUG_ARG) -o run.log ./run_test 

clean :
	rm -rf ./run_test *.so *.log
