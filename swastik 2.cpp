#include<simplecpp>

main_program{
turtleSim();
repeat (4){
forward(100); wait(0.5);
right(90); wait(0.5);
forward(100); wait(0.5);
right(180); wait(0.5);
forward(100); wait(0.5);
right(-90); wait(0.5);
forward(100); wait(0.5);
right(90); wait(0.5);
}
wait(10);
}
