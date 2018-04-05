DUCK = duck.cc

ENCAPSULATED_FLY_BEHAVIOUR =	fly_with_wings.cc \
						 	 	fly_no_way.cc

ENCAPSULATED_QUACK_BEHAVIOUR =	quacker.cc \
							   	squeak.cc \
							   	mute_quack.cc

SRCS =	main.cc \
	   	$(DUCK) \
	   	$(ENCAPSULATED_FLY_BEHAVIOUR) \
	   	$(ENCAPSULATED_QUACK_BEHAVIOUR)

all:
	g++ $(SRCS) -o ducks.o -std=c++11
	./ducks.o
	