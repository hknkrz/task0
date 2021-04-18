#pragma once
#include <gmock/gmock.h>
#include <Weather.h>
#include <random>

class WeatherMock : public Weather {
public:
    cpr::Response Get(const std::string& city, const cpr::Url& url) override {
        cpr::Response r;
        float(rnd() % 1000) / 100.0;
        r.text = "{\"main\":{\"temp\":" + std::to_string(float(rnd() % 1000) / 100.0) + "},\"list\":[\"\",\"\",\"\",\"\",\"\",\"\",\"\",{\"main\":{\"temp\":" + std::to_string(float(rnd() % 1000) / 100.0) + "}}]}";
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


