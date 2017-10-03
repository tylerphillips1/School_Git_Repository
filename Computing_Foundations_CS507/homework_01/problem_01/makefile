CXX = g++
OBJS = main.o exponential.o
CXXFLAGS = -I ./include
Prog = Phillips_HW_01_Prob_1 

VPATH = src
#vpath %.h include

all : $(OBJS)
	$(CXX) $(OBJS) -o $(Prog)

%.o : %.cpp
	$(CXX) -c $< $(CXXFLAGS)

.Phony : clean

clean:
	rm $(Prog) *.o
