CC = cc
CFLAGS = -c -w -std=gnu99 -Iinclude -fno-common
SRCS = $(wildcard src/*.c)

all:
	@rm -f compile-report.txt errors.txt
	@n=0; ok=0; fail=0; for f in $(SRCS); do \
	    n=$$((n+1)); err=$$($(CC) $(CFLAGS) $$f -o /tmp/$$(basename $$f).o 2>&1); \
	    if [ -z "$$err" ]; then ok=$$((ok+1)); \
	    else fail=$$((fail+1)); echo "=== $$f ===" >> errors.txt; echo "$$err" >> errors.txt; fi; \
	done; echo "total=$$n ok=$$ok fail=$$fail" | tee compile-report.txt

clean:
	rm -f /tmp/*.c.o compile-report.txt errors.txt
.PHONY: all clean
