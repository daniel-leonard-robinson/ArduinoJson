// Copyright Benoit Blanchon 2014
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson

#pragma once

#include "../JsonVariant.hpp"

namespace ArduinoJson {
namespace Internals {

struct JsonArrayNode {
  JsonArrayNode() : next(NULL) {}

  JsonArrayNode* next;
  JsonVariant value;
};
}
}