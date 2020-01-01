#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>
#include "../MorseTranslator.h"


BOOST_AUTO_TEST_SUITE(my_testsuite)

    BOOST_AUTO_TEST_CASE(should_translate_text_to_morse) {
        MorseTranslator *morseTranslator = new MorseTranslator();
        BOOST_CHECK_EQUAL((morseTranslator->translateMorse("test")
            .compare("|-|.|...|-|")), 0);
        BOOST_CHECK_EQUAL((morseTranslator->translateMorse("Where are you?")
            .compare("|.--|....|.|.-.|.| |.-|.-.|.| |-.--|---|..-|")), 0);
    }

BOOST_AUTO_TEST_SUITE_END()