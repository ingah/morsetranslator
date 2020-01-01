set (Boost_USE_STATIC_LIBS OFF) #enable dynamic linking
set(Boost_NO_BOOST_CMAKE ON) #workaround: https://github.com/boostorg/boost_install/issues/13

# search for unit_test_framework
find_package (Boost REQUIRED COMPONENTS unit_test_framework)

include_directories(${Boost_INCLUDE_DIR})

# create a cmake_testapp_boost target from test.cpp
add_executable (morsetranslator_boost tests.cpp ../MorseTranslator.h)

# link Boost libraries to the new target
target_link_libraries (morsetranslator_boost ${Boost_LIBRARIES})

# link Boost with code library
target_link_libraries (morsetranslator_boost test_library)