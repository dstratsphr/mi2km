/*! \file main.cpp
    \brief Main program file.

    Defines the `main` function and some global variables.
*/

/*! \brief Shorthand for null.

    The macro `NULL` is defined in a C header file. I'm not sure exactly which
    one.
*/
#define null NULL

/*! \brief Stroustrup's header file.

    This file came from http://www.stroustrup.com/Programming/.
*/
#include <std_lib_facilities.h>

using namespace std ;

#include "arguments.h"

/*! \brief Global debugging option.
*/
bool DEBUG = false ;
/*! \brief Global verbosity option.
*/
bool VERBOSE = false ;

/*! \brief Conversion factor for converting miles to kilometers.
*/
const auto CONVERSION_FACTOR = 1.609 ;

/*! \brief The main program.

    Calls `get_arguments` to set up the global options and the argument list
    `args`. Then multiplies the number given as an argument by `CONVERSION_FACTOR`
    and outputs the result.
*/
int main(int  argc,   ///< The number of command line arguments.
         char *argv[] ///< A C array containing all the command line arguments.
        ) {
  get_arguments(argc, argv) ;
  auto mi = atof(args[0].c_str()) ;
  cout << mi << " miles = " << CONVERSION_FACTOR * mi << " km." << endl ;
  if (VERBOSE) cout << argv[0] << " execution complete." << endl ;
  if (DEBUG) cout << argv[0] << " debugging complete." << endl ;
}

/*! \mainpage My Personal Index Page
 *
 * \section intro_sec Introduction
 *
 * This is the introduction.
 *
 * \section install_sec Installation
 *
 * \subsection step1 Step 1: Opening the box
 *
 * etc...
 */
