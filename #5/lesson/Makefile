include common.mk
# First Makefile for app "Hello World"

OUT_NAME := app
#ifeq ($(OUT_NAME),)
#$(error not find name)
#endif



GCC_STD ?= c90
CFLAGS := --std=$(GCC_STD)
CFLAGS += -Wall
CFLAGS += -pedantic
CFLAGS += -DLOGNAME="\"$(LOGNAME)\""

.PHONY: all clean cbuild error warn

$(OUT_NAME): all
	$(ECHO) "END"
all:
	$(CC) $(CFLAGS) main.c -o $(OUT_NAME)
	$(ECHO) "ALL"
clean:
	$(RM) -f $(OUT_NAME)

cbuild: clean all
	$(ECHO) "Done!"

help:
	$(CAT) README

error:
	$(error XXX: test)

warn:
	$(warning WWW: test)


