#ifndef CONFIG_HPP
#define CONFIG_HPP

/*This file encapsulates both SystemConfig and UserConfig
SystemConfig : Contains preprocessor directives to control architecture 
               and datatype and fallback mechanism in case the processor
               doesn't support doubles. Also sets default data type and arch for Vec class.
               -DOUBLE_TO_FLOAT_REVERT: sets to 1 if user demands double but AVX isn't available.
               -ALIGN_WIDTH: Sets according to dtype used. 32 for doubles and 16 for floates.
               -UArch: Architecture to be used.
               -UType: Dtype to be used.

UserConfig  :  Contains Macro values set by user.
               -USE_DOUBLE: sets to 1 if user forces to use double.
*/

#include<UserConfig.hpp>
#include<SystemConfig.hpp>

#endif