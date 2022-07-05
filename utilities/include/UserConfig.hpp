#ifndef USERCONFIG_HPP
#define USERCONFIG_HPP

/*This file contains customizations you can have before running the raytracer.
*/

//Alternate idea : parse flags from users. 
// for using doubles -d. Also --version perhaps.
// If included at runtime, basically no use of constexpr.
//Neat.

/*Set USE_DOUBLE value to one if you want to use doubles for computation
* Warning: If your processor doesn't support AVX, we would revert to float.
*/
#define USE_DOUBLE 1

#endif