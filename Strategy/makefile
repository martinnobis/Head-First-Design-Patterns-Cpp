DUCK = duck.cpp

ENCAPSULATED_FLY_BEHAVIOUR = fly_with_wings.cpp \
						 	 fly_no_way.cpp

ENCAPSULATED_QUACK_BEHAVIOUR = quacker.cpp \
							   squeak.cpp \
							   mute_quack.cpp

SRCS = main.cpp \
	   $(DUCK) \
	   $(ENCAPSULATED_FLY_BEHAVIOUR) \
	   $(ENCAPSULATED_QUACK_BEHAVIOUR)

all:
	g++ $(SRCS) -o ducks -std=c++11
	./ducks
	