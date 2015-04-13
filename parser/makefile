# Libname
LIBNAME=ezcparser.a

# Which .a libs the actual lib depends on ?
LIBDEP=rules/ezrule.a ast/ezast.a ../util/ezutil.a eval/ezeval.a ../db/ezdb.a

# Archiver
AR=ar
ARARGS=cvq

# Compiler
CC=g++
CFLAGS=-lfl -std=c++11 -lpq

# Obj dir
OBJDIR=obj

# Include dir
INCDIR=$(patsubst %, -I%, . ../ $(OBJDIR) $(dir $(LIBDEP)))

# Tests dir
TSTDIR=tests

# Grammar names
CGRAMMAR_BISON_NAME = c_grammar_2011.y
CGRAMMAR_FLEX_NAME  = c_grammar_2011.l
BISON_GENERATED 	= c_grammar_2011.tab.h c_grammar_2011.tab.c
LEXER_GENERATED 	= c_grammar_2011.lex.c

# Flex, Bison stuff
CGRAMMAR_DIR 		= c_grammar

# Lexer
LEXER 		  = flex
LEXER_FLAGS   = -o $(OBJDIR)/$(LEXER_GENERATED)
LEXER_FILES   = $(CGRAMMAR_DIR)/$(CGRAMMAR_FLEX_NAME)

# Bison
BISON 		  = bison
BISON_FLAGS   = -d 
BISON_FILES   = $(CGRAMMAR_DIR)/$(CGRAMMAR_BISON_NAME)

# Generated
GENERATED_HEADERS = $(wildcard $(OBJDIR)/*.h)
GENERATED_SOURCES = obj/c_grammar_2011.tab.c obj/c_grammar_2011.lex.c
OBJ_GENERATED = $(OBJDIR)/c_grammar_2011.lex.o $(OBJDIR)/c_grammar_2011.tab.o

# All files
FILES = $(LEXER_FILES) $(BISON_FILES)

# Sources
SRC = $(wildcard *.cpp)
TSTSRC = $(wildcard $(TSTDIR)/*.cpp)

# Objects
OBJ=$(patsubst %.cpp, $(OBJDIR)/%.o, $(SRC)) 

# Dependencies
DEP=$(wildcard *.h)

$(LIBNAME): $(LIBDEP) $(OBJDIR) BISON FLEX $(OBJ) $(OBJ_GENERATED)
	rm -f $(LIBNAME)
	$(AR) $(ARARGS) $(LIBNAME) $(OBJ) $(OBJ_GENERATED) $(LIBDEP) 

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.cpp $(DEP)
	rm -f $@
	$(CC) -c -o $@ $< $(CFLAGS) $(INCDIR)

# Special cases for 
$(OBJDIR)/c_grammar_2011.lex.o:
	$(CC) -c -o $@ $(OBJDIR)/c_grammar_2011.lex.c $(LIBDEP) $(CFLAGS) $(INCDIR)

$(OBJDIR)/c_grammar_2011.tab.o:
	$(CC) -c -o $@ $(OBJDIR)/c_grammar_2011.tab.c $(CFLAGS) $(INCDIR)

$(LIBDEP):
	cd $(dir $@) && make

FLEX: $(LEXER_FILES)
	$(LEXER) $(LEXER_FLAGS) $(LEXER_FILES)

BISON: $(BISON_FILES)
	$(BISON) $(BISON_FLAGS) $(BISON_FILES)
	mv $(BISON_GENERATED) $(OBJDIR)

.PHONY: tests
	
tests: $(LIBNAME)
	$(CC) -o $(TSTDIR)/$@.out $(TSTSRC) $(LIBNAME) $(LIBDEP) $(INCDIR) $(CFLAGS)

clean:
	rm -f $(OBJDIR)/*
	rm -f $(LIBNAME)
