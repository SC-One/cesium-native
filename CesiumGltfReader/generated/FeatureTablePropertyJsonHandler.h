// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/FeatureTableProperty.h"
#include "CesiumGltf/ReaderContext.h"
#include "CesiumJsonReader/IntegerJsonHandler.h"
#include "CesiumJsonReader/StringJsonHandler.h"
#include "ExtensibleObjectJsonHandler.h"

namespace CesiumGltf {
struct ReaderContext;

class FeatureTablePropertyJsonHandler : public ExtensibleObjectJsonHandler {
public:
  using ValueType = FeatureTableProperty;

  FeatureTablePropertyJsonHandler(const ReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentHandler, FeatureTableProperty* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyFeatureTableProperty(
      const std::string& objectType,
      const std::string_view& str,
      FeatureTableProperty& o);

private:
  FeatureTableProperty* _pObject = nullptr;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _bufferView;
  CesiumJsonReader::StringJsonHandler _offsetType;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _arrayOffsetBufferView;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _stringOffsetBufferView;
};
} // namespace CesiumGltf
