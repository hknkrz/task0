#pragma once
#include <gmock/gmock.h>
#include <Weather.h>
#include <random>

class WeatherMock : public Weather {
public:
    cpr::Response Get(const std::string& city, const cpr::Url& url) override {
        cpr::Response r;
        r.text = "{\"main\":{\"temp\":" + std::to_string(float(5) + "},\"list\":[\"\",\"\",\"\",\"\",\"\",\"\",\"\",{\"main\":{\"temp\":" + std::to_string(8) + "}}]}";
        json j = json::parse(r.text);
        r.status_code = 200;
        return r;
    }
    std::mt19937 rnd;
};

class WeatherMockMock : public Weather {
public:
    cpr::Response Get(const std::string& city, const cpr::Url& url) override {
        cpr::Response r;
        r.status_code = 201;
        return r;
    }
};


