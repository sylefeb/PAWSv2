include ../makefile.inc

PROJECT=PFORTH
PROJECTTYPE=COMPUTER/PFORTH

PFORTH_HEADERS= pf_all.h pf_cglue.h pf_clib.h pf_core.h pf_float.h \
		pf_guts.h pf_host.h pf_inc1.h pf_io.h pf_mem.h pf_save.h \
		pf_text.h pf_types.h pf_win32.h pf_words.h pfcompfp.h \
		pfcompil.h pfdicdat_arm.h pfinnrfp.h pforth.h

PFORTH_SOURCES= pf_cglue.c pf_clib.c pf_core.c pf_inner.c \
		pf_io.c pf_main.c pf_mem.c pf_save.c \
		pf_text.c pf_words.c pfcompil.c pfcustom.c \
		pf_fileio_stdio.c pf_io_stdio.c

PFORTH_OBJECTS= pf_cglue.o pf_clib.o pf_core.o pf_inner.o \
		pf_io.o pf_main.o pf_mem.o pf_save.o \
		pf_text.o pf_words.o pfcompil.o pfcustom.o \
		pf_fileio_stdio.o pf_io_stdio.o

PFORTH_BUILD_OBJECTS= build/pf_cglue.o build/pf_clib.o build/pf_core.o build/pf_inner.o \
		build/pf_io.o build/pf_main.o build/pf_mem.o build/pf_save.o \
		build/pf_text.o build/pf_words.o build/pfcompil.o build/pfcustom.o \
		build/pf_fileio_stdio.o build/pf_io_stdio.o

all: $(OUTPUT_DIR)$(PROJECTTYPE)/$(PROJECT).PAW

$(OUTPUT_DIR)$(PROJECTTYPE)/$(PROJECT).PAW : $(BUILD_DIR)/pforth.elf
	$(ARCH)-elf-objcopy -O binary $< $@
	@echo ""
	@echo "Copy the files in fth/ to the SDCARD"
	@echo "in folder /COMPUTER/PFORTH/"
	@echo ""
	@echo "FORTH.PAW loads files from /COMPUTER/PFORTH/"
	@echo ""

$(BUILD_DIR)/pforth.elf : $(LIBPAWS) $(PFORTH_OBJECTS)
	$(CC) $(CFLAGS) $(LFLAGS) $(LCONFIG) -o $@ $(PFORTH_BUILD_OBJECTS) $(LIBPAWS) $(LIBRARY)

%.o: csrc/%.c
	$(CC) $(INCLUDE) $(CFLAGS) -c -o $(BUILD_DIR)/$@ $<

clean :
	rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/*.elf $(OUTPUT_DIR)$(PROJECTTYPE)/$(PROJECT).PAW
