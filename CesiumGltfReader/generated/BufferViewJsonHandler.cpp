// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#include "BufferViewJsonHandler.h"
#include "CesiumGltf/BufferView.h"

#include <cassert>
#include <string>

using namespace CesiumGltf;

void BufferViewJsonHandler::reset(IJsonHandler* pParent, BufferView* pObject) {
  NamedObjectJsonHandler::reset(pParent, pObject);
  this->_pObject = pObject;
}

BufferView* BufferViewJsonHandler::getObject() {
  return this->_pObject;
}

void BufferViewJsonHandler::reportWarning(const std::string& warning, std::vector<std::string>&& context) {
  if (this->getCurrentKey()) {
    context.emplace_back(std::string(".") + this->getCurrentKey());
  }
  this->parent()->reportWarning(warning, std::move(context));
}

IJsonHandler* BufferViewJsonHandler::Key(const char* str, size_t /*length*/, bool /*copy*/) {
  assert(this->_pObject);
  return this->BufferViewKey(str, *this->_pObject);
}

IJsonHandler* BufferViewJsonHandler::BufferViewKey(const char* str, BufferView& o) {
  using namespace std::string_literals;

  if ("buffer"s == str) return property("buffer", this->_buffer, o.buffer);
  if ("byteOffset"s == str) return property("byteOffset", this->_byteOffset, o.byteOffset);
  if ("byteLength"s == str) return property("byteLength", this->_byteLength, o.byteLength);
  if ("byteStride"s == str) return property("byteStride", this->_byteStride, o.byteStride);
  if ("target"s == str) return property("target", this->_target, o.target);

  return this->NamedObjectKey(str, *this->_pObject);
}