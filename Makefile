EE_SRC_DIR = src/
EE_OBJS_DIR = obj/
EE_LIB_DIR = lib/

EE_INCS += -I./include -I$(EE_SRC_DIR)

EE_LIB = $(EE_LIB_DIR)libdl.a
EE_OBJS = functions.o math.o pad.o cheats.o moby.o game.o gamesettings.o \
			weapon.o hud.o player.o team.o math3d.o dl.o \
			spawnpoint.o dialog.o map.o graphics.o \
			net.o sifrpc.o mc.o ui.o guber.o radar.o color.o \
			help.o music.o collision.o utils.o camera.o sound.o spline.o area.o

EE_OBJS := $(EE_OBJS:%=$(EE_OBJS_DIR)%)

all: $(EE_OBJS_DIR) $(EE_LIB_DIR) $(EE_LIB)

$(EE_OBJS_DIR):
	mkdir -p $(EE_OBJS_DIR)

$(EE_LIB_DIR):
	mkdir -p $(EE_LIB_DIR)

$(EE_OBJS_DIR)%.o : $(EE_SRC_DIR)%.c
	$(EE_C_COMPILE) -c $< -o $@

$(EE_OBJS_DIR)%.o : $(EE_SRC_DIR)%.S
	$(EE_C_COMPILE) -c $< -o $@

install: all
	mkdir -p $(DESTDIR)$(PS2SDK)/ports/include/libdl
	mkdir -p $(DESTDIR)$(PS2SDK)/ports/lib
	cp -f $(EE_LIB) $(DESTDIR)$(PS2SDK)/ports/lib
	cp -f include/*.h $(DESTDIR)$(PS2SDK)/ports/include/libdl

clean:
	rm -f -r $(EE_OBJS_DIR)
	rm -f -r $(EE_LIB_DIR)

sample:

include $(PS2SDK)/samples/Makefile.pref
include Makefile.eeglobal
