LIGHT = Light/light.cc \
		Light/light_on_command.cc \
		Light/light_off_command.cc

STEREO = Stereo/stereo.cc \
		 Stereo/stereo_off_command.cc \
		 Stereo/stereo_on_command.cc \
		 Stereo/stereo_set_dvd_command.cc

SRCS =	main.cc \
		remote_control.cc \
		command.cc \
		no_command.cc \
		$(LIGHT) \
		$(STEREO)

all:
	g++ $(SRCS) -o command.o -std=c++11
	./command.o
	