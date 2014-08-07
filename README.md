SFML 2.1 Tutorial 2 - Setting Up On Windows
===========================================

Code for the following video tutorial http://youtu.be/Z6alClFOGoM

Project properties to add

Go to C/C++ and click on General and add the following to the Additional Include Directories 
$(SolutionDir)/SFML-2.1/include

Still within C/C++ click on All Options and add the same to the Additional Include Directories 
$(SolutionDir)/SFML-2.1/include

Now go to Linker then click on General and add the following to the Additional Library Directories 
$(SolutionDir)/SFML-2.1/lib

Still within Linker click on Input and add the following to Additional Dependencies
sfml-main-d.lib
sfml-graphics-d.lib
sfml-window-d.lib
sfml-system-d.lib
sfml-audio-d.lib
sfml-network-d.lib
