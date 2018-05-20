LIGHT = Light/light.cc \
		Light/light_on_command.cc \
		Light/light_off_command.cc

STEREO = Stereo/stereo.cc

SRCS =	main.cc \
		remote_control.cc \
		command.cc \
		no_command.cc \
		$(LIGHT) \
		$(STEREO)

all:
	g++ $(SRCS) -o command.o -std=c++11
	./command.o
	