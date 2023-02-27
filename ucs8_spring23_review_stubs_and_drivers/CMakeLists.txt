cmake_minimum_required(VERSION 3.17)
project(ucs8_spring23_review_stubs_and_drivers)

set(CMAKE_CXX_STANDARD 14)

add_executable(ucs8_spring23_review_stubs_and_drivers main.cpp Hangman.cpp Hangman.h Wordbank.cpp Wordbank.h Word.cpp Word.h States.cpp States.h Visuals.cpp Visuals.h Accuracy.cpp Accuracy.h Logic.cpp Logic.h UserInput.cpp UserInput.h NoWordException.cpp NoWordException.h Tests.h Tests.cpp Opening.cpp Opening.h)