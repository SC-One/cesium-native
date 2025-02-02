// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/Asset.h"
#include "CesiumGltf/ReaderContext.h"
#include "CesiumJsonReader/StringJsonHandler.h"
#include "ExtensibleObjectJsonHandler.h"

namespace CesiumGltf {
struct ReaderContext;

class AssetJsonHandler : public ExtensibleObjectJsonHandler {
public:
  using ValueType = Asset;

  AssetJsonHandler(const ReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentHandler, Asset* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyAsset(
      const std::string& objectType,
      const std::string_view& str,
      Asset& o);

private:
  Asset* _pObject = nullptr;
  CesiumJsonReader::StringJsonHandler _copyright;
  CesiumJsonReader::StringJsonHandler _generator;
  CesiumJsonReader::StringJsonHandler _version;
  CesiumJsonReader::StringJsonHandler _minVersion;
};
} // namespace CesiumGltf
