# Complile & Run an SFML C++ Code

## Compile the C++ Code with g++
```sh
g++ -c code.cpp
```

## Add corresponding libraries
```sh
g++ code.o -o game -lsfml-graphics -lsfml-window -lsfml-system
```

## Executing the final compiled version
```sh
./game
```