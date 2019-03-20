/*! \file arguments.cpp
    \brief Source code for handling command line arguments.

    Declares a couple of macros and the `get_arguments` function.
*/

/*! \brief STL headers.

    ## System Headers

    * [iostream](http://www.cplusplus.com/reference/iolibrary/)
*/
#include <iostream>
#include <string>
#include <vector>

#include "arguments.h"

extern bool DEBUG ;
extern bool VERBOSE ;

using namespace std ;

/*!
    Global vector of strings to contain the command line arguments other than
    options.
    @see get_arguments()
*/
vector <string> args ;

/*!
    Check each argument. If it is an option apply the setting to the global
    option variable that's indicated or carry out the required command. Check
    for `--help` amd `--version` options first, since they terminate the program
    after output. Any strings that aren't supported options go in the global
    vector `args`.
    @param argc The number of command line arguments.
    @param argv A C array containing the command line arguments passed to the
                program by the user.
    @see args
    @see DEBUG
    @see VERBOSE
*/
int get_arguments(int argc, char *argv[]) {
  if(DEBUG) cout << "Number of args: " << argc << endl ;
  if (argc > 1) {
    for (auto i=1; i<argc; ++i) {
      string arg = argv[i] ;
      if(DEBUG) cout << arg << endl ;
      if (arg == "-h" || arg == "--help") {
        cout << "Help system is not yet implemented. Sorry 'bout that."
                "\nMaybe next time."
             << endl ;
        exit(0) ;
      }
      else if (arg == "--version") {
        cout << "getopts version 1.0.0c" << endl ;
        exit(0) ;
      }
      else if (arg == "-d" || arg == "--debug") {
        DEBUG = true ;
      }
      else if (arg == "-v" || arg == "--verbose") {
        VERBOSE = true ;
      }
      else args.push_back(argv[i]) ;
    }
    // if (DEBUG) cout << v ;
  }
}
