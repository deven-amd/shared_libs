COMPILER = g++
COMPILER_FLAGS = -Wall -Werror
LD_DEBUG_ARG="libs symbols"

all : shlib1 shlib2 main


shlib1 :
	$(COMPILER) $(COMPILER_FLAGS) shlib1.cpp -fPIC -shared -o libshlib1.so 

shlib2 :
	$(COMPILER) $(COMPILER_FLAGS) shlib2.cpp -fPIC -shared -o libshlib2.so 

main : main.cpp
	$(COMPILER) $(COMPILER_FLAGS) main.cpp -L. -lshlib1 -o run_test

run :
	LD_PRELOAD=libshlib2.so LD_DEBUG=$(LD_DEBUG_ARG) ./run_test 

clean :
	rm -rf ./run_test *.so *.log
