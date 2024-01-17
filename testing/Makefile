SRCS = $(wildcard src/*.c)

PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
		$(CC) $(CFLAGS) -o $@ $< -fno-stack-protector
		# quick and dirty solution - too tired
		mv $@ $(PWD)
clean: 
		rm -f $(PROGS)
