# Libname
PROJ=ezparser

# Compiler
CC=g++
CFLAGS=-lpq -std=c++11

# Dependent modules
MODULES = parser/ezcparser.a util/ezutil.a db/ezdb.a parser/eval/ezeval.a \
			parser/rules/ezrule.a parser/ast/ezast.a dsl/ezdsl.a

# Include dir
INC=-I.
MODULES_INC = $(patsubst %, -I%, $(dir $(MODULES)))

# Obj dir
OBJDIR=obj

# Build dir
BUILDDIR = build

# Tests dir
TSTDIR=tests

# Root dir
ROOT_DIR=$(shell pwd)

# Sources
SRC=$(wildcard *.cpp)
TSTSRC=$(wildcard $(TSTDIR)/*.cpp)

# Objects
OBJ=$(patsubst %.cpp, $(OBJDIR)/%.o, $(SRC))

# Dependencies
DEP=$(wildcard *.h)

all: $(OBJDIR) $(MODULES) $(OBJ)
	$(CC) -o $(PROJ) $(MAIN) $(OBJ) $(MODULES) $(INC) $(MODULES_INC) $(CFLAGS)

$(MODULES): 
	cd $(dir $@) && make

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.cpp $(DEP)
	rm -f $@
	$(CC) -c -o $@ $< $(CFLAGS) $(INC) $(MODULES_INC)

.PHONY: tests
	
tests: $(LIBNAME)
	$(CC) -o $(TSTDIR)/$@.out $(TSTSRC) $(LIBNAME) $(INC) $(CFLAGS)

clean:
	rm -f $(OBJDIR)/*.o
	rm -f $(PROJ)

clean-modules: clean
	for module in $(dir $(MODULES)) ; do \
        cd $$module && make clean && cd $(ROOT_DIR) ; \
    done
	