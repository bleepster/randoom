RANDOOM_SRC_DIR= src
RANDOOM=randoom

RANDOOM_TEST_DIR= test
RANDOOMT=randoomt

all: $(RANDOOM) $(RANDOOMT)

$(RANDOOM):
	cd $(RANDOOM_SRC_DIR); make

$(RANDOOMT):
	cd $(RANDOOM_TEST_DIR); make

clean:
	cd $(RANDOOM_SRC_DIR); $(MAKE) clean
	cd $(RANDOOM_TEST_DIR); $(MAKE) clean
