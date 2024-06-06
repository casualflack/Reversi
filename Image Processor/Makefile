CXX = g++
CXXFLAGS = -std=c++14 -g -Wall -MMD -Werror=vla
OBJECTS = flip.o rotate.o sepia.o main.o image.o basic.o decorator.o exception.o ppm.o
DEPENDS = ${OBJECTS:.o=.d}
EXEC = a4q2

${EXEC} : ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

clean :
	rm ${DEPENDS} ${OBJECTS} ${EXEC}

-include ${DEPENDS} # reads the .d files and reruns dependencies
