
export PROJECT_ROOT := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

#TRACKER_OBJS =  main.o trackerHandler.o seeder.o fileAttr.o client.o

SUBDIRS := common/ pastryClient/
TOPTARGETS := all clean

$(TOPTARGETS): $(SUBDIRS)

$(SUBDIRS):
	protoc -I=./pastryClient --cpp_out=./pastryClient ./pastryClient/message.proto
	$(MAKE) -C $@ $(MAKECMDGOALS)

.PHONY: $(TOPTARGETS) $(SUBDIRS)
