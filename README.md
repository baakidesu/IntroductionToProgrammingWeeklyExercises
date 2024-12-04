If you open this repo as a project instead of running them individiually, you have to rewrite CMakeList.txt file.

For Example, If you want to run Exercise3.cpp file in Week10, you have to change add_executable to this:

add_executable(IntroductionToProgrammingWeeklyExercises
        Week10/Exercise3.cpp
)
