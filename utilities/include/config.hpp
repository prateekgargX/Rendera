#ifndef CONFIG_HPP
#define CONFIG_HPP

/*This file encapsulates both SystemConfig and UserConfig
SystemConfig : Contains preprocessor directives to control architecture 
               and datatype and fallback mechanism in case the processor
               doesn't support doubles.
               sets default data type and arch for Vec class.
               -DOUBLE_TO_FLOAT_REVERT: sets to 1 if user demands double but AVX isn't available.
UserConfig  :  Contains Macro values set by user.
               -USE_DOUBLE: sets to 1 if user forces to use double.
*/

#include<UserConfig.hpp>
#include<SystemConfig.hpp>

#endif