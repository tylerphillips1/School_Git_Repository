CXX = g++
OBJS = main.o exponential.o
CXXFLAGS = -I ./include
Prog = Phillips_HW_01_Prob_1 

vpath %.cpp src

all : $(OBJS)
	$(CXX) $(OBJS) -o $(Prog)

%.o : %.cpp
	$(CXX) -c $< $(CXXFLAGS)

run : all 
	./$(Prog)
	make clean

.Phony : clean

clean:
	rm $(Prog) *.o
