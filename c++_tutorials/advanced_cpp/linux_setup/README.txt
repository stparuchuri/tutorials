/************************************
* Linux setup video showing how to use
* cmake to automate the build process
* as shown by TheChernoProject Youtube
* Channel.
*
*
* @author: Surya Paruchuri
* @date: March 17 2018.
**************************************/

CMakeLists.txt - cmake configuration file
build.sh - build script for building the project
           can get away without this by manually
	   generating Makefiles using cmake
src -  source directory.

Any other files are automatically generated.

/****************************************
* BUILD and Run
****************************************/
generate make files: run the build script or
	 type cmake -G "Unix Makefiles" in shell
build the project: run "make" in the cwd.
run : ./linuxsetuphelloworld.exe
