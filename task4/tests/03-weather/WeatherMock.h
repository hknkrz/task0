#pragma once
#include <Weather.h>
#include <gmock/gmock.h>
#include <random>

using namespace std;
using namespace cpr;


class WeatherMockMock : public Weather {
    Response Get(const string& city, const Url& url) override {
        Response r;
        r.status_code = 201;
        return r;
    }
};

class WeatherMock : public Weather {
    Response Get(const std::string& city, const Url& url) override {
        float(rnd() % 1000) / 100.0;
        Response r;
        r.text = "{\"main\":{\"temp\":" + to_string(float(rnd() % 1000) / 100.0)
                + "},\"list\":[\"\",\"\",\"\",\"\",\"\",\"\",\"\",{\"main\":{\"temp\":" +
                to_string(float(rnd() % 1000) / 100.0) + "}}]}";
        json j = json::parse(r.text);
        r.status_code = 200;
        return r;
    }
    mt19937 rnd;
};
