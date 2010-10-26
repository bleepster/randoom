CC      = /usr/bin/gcc
C_FLAGS = -Wall
RM      = /bin/rm

.c.o:
	$(CC) $(C_FLAGS) $(CC_INCLUDE) -c -g $<

RANDOOM_TEST_BIN  = randoom_test
RANDOOM_TEST_OBJS = randoom_test.o
RANDOOM_TEST_SRCS = randoom_test.c

RANDOOM_OBJS = ../src/randoom.o

all: $(RANDOOM_TEST_BIN)

$(RANDOOM_TEST_BIN) : $(RANDOOM_TEST_OBJS)
	$(CC) $(C_FLAGS) -o $(RANDOOM_TEST_BIN) $(RANDOOM_TEST_OBJS) \
	  $(RANDOOM_OBJS)

clean:
	$(RM) -f $(RANDOOM_TEST_OBJS) $(RANDOOM_TEST_BIN)
