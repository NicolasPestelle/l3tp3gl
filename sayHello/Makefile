OBJO = *.o

all : sayHello.out

sayHello.out : $(OBJO)
	$(CXX) -std=c++14 -o $@ $^

%.o : %.cpp
	$(CXX) -g -std=c++14 -c $<

clean :
	rm -f $(OBJO) sayHello.out
