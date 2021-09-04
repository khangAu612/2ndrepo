cmake_minimum_required(VERSION 3.19)
project(STL)

set(CMAKE_CXX_STANDARD 17)

add_executable(STL Macro_and_func_templates.cpp Class_templates.cpp class_template_ARRAY.cpp Iterators.cpp Algorithms.cpp STLarray.cpp main.cpp STLVector.cpp stl_deque_challenge.cpp deque-challenge.cpp stl_list.cpp std_list_challenge2.cpp std_set.cpp stl_map.cpp stl_map_challenge3.cpp stl_stack.cpp stl_stack_queue_challenge4.cpp stl_queue.cpp)