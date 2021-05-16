
#pragma once
#include "WeatherMock.h"
#include <gtest/gtest.h>

class WeatherTestCase : public ::testing::Test {
public:
    WeatherMock mw;
    void Test() {
        mw.GetTomorrowTemperature("efsefs");
        mw.GetTomorrowTemperature("gnffgf");
        mw.FindDiffBetweenTwoCities(" fgnfgnfg", "rthrthrt");
        mw.GetDifferenceString("dfsdfs", "sdfsdf");
        mw.SetApiKey("gngvbrrbr.db,dr");
        mw.FindDiffBetweenTwoCities("Berlin", "Berlin");
        mw.GetTomorrowDiff("gnhng");
        ASSERT_ANY_THROW(mw.GetDifferenceString("sefsfse", "hrthrth"));
    }
};


