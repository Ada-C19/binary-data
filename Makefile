CC = clang
CFLAGS = -Wall -Wextra -Werror

TARGET = binary-data
SRCS = main.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)
.PHONY: all

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

debug: CFLAGS += -g
debug: clean $(TARGET)
.PHONY: debug

clean:
	rm -f $(OBJS) $(TARGET)
.PHONY: clean
