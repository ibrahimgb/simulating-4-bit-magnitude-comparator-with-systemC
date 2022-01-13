include Makefile.config

PROJECT := add3
SRCS    := $(wildcard *.cpp)
OBJS    := $(SRCS:.cpp=.o)

include Makefile.rules
